#include "People.hpp"

class Friends : public People{

    private:

    int help;

    public:

    Friends(int intensity=0, int fun=10, int help=10);

    int getIntensity();

};