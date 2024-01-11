#include "Friends.hpp"

Friends::Friends(int intensity){
    this->intensity=intensity;
}

int Friends::getIntensity(){
    return intensity;
}

void Friends::setIntensity(int intens){
    intensity=intens;
}