#include <iostream>
#include <string>
#include <fstream>
#include "Header.h"

using namespace std;


void mybmi:: set_height(float h) {height=h;}
void mybmi:: set_mass(float m) {mass=m;}

float mybmi:: get_height() {return height;}
float mybmi:: get_mass() {return mass;}


float mybmi:: caculate(){
    float BMI;
    float height=get_height();
    float mass=get_mass();
    BMI = mass / ((height/100)*(height/100));
    return BMI;
}

string mybmi:: answer(float BMI){
    string category;
    if(BMI<15) category= "Very severely underweight\n";
    else if(BMI<16.0) category= "Severely underweight\n";
    else if(BMI<18.5) category= "Underweight\n";
    else if(BMI<25) category= "Normal\n";
    else if(BMI<30) category= "Overweight\n";
    else if(BMI<35) category= "Obese Class I (Moderately obese)\n";
    else if(BMI<40) category= "Obese Class II (Severely obese)\n";
    else if(BMI>=40) category= "Obese Class III (Very severely obese)\n";
    
    return category;
}









