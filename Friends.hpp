#include <iostream>
#include <string>
using namespace std;

class Friends{

    private: 

    int intensity;

    public:

    Friends(int intensity=0);

    int getIntensity();
    void setIntensity(int intensity);
};