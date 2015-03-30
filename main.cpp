#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "Header.h"

using namespace std;


int main(){
    mybmi fat;
    float h,m,height,mass;
    string category ;
    float BMI;
    
    ifstream inFile("file.in", ios::in);
    
    if(!inFile)
    {
        cerr<<"Failed opening"<<endl;
        exit(1);
    }


fstream outFile("file.out", ios::out);

        if(!outFile)
        {
        cerr<<"Failed opening"<<endl;
        exit(2);
        }

    
    while (inFile >> h >> m)
    {
        if(h==0) break;
        
        fat.set_height(h);
        fat.set_mass(m);
        
        height=fat.get_height();
        mass=fat.get_mass();
        BMI=fat.caculate();
        category=fat.answer(BMI);


       outFile << BMI << "\t" << category << endl;    
}



}












