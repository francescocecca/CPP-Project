#include "Friends.hpp"

Friends::Friends(int intensity, int fun, int help){
    this->help=help;
    this->intensity=intensity;
    this->fun=fun;
}


int Friends::getIntensity(){
    return intensity*fun/2+help/3;
}
