#include "Friends.hpp"

Friends::Friends(int intensity, int fun, int help){
    this->help=help;
    this->intensity=intensity;
    this->fun=fun;
}


int Friends::getIntensity(){
    intensity=(intensity/10)*fun/2+help/3;
    return intensity;
}
