#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class mybmi{
public:
    float caculate ();
    
    void set_height(float h);
    void set_mass(float m);
    float get_height();
    float get_mass();
    
    string answer(float BMI);
    
private:
    float height,mass,BMI;
    
};
