#include <iostream>
#include <string>
using namespace std;

class People{

    private: 

    int intensity;
    int fun;

    public:

    People(int intensity=0, int fun=0);

    virtual int getIntensity();
    void setIntensity(int intensity);
    int getFun();
    void SetFun(int fun);
};