#include "People.hpp"

People::People(int intensity, int fun){
    this->intensity=intensity;
    this->fun=fun;
}

int People::getIntensity(){
    return intensity;
}

void People::setIntensity(int intens){
    intensity=intens;
}

int People::getFun(){
    return fun;
}

void People::SetFun(int fu){
    fun=fu;
}