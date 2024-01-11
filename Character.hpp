#include <iostream>
#include <string>
using namespace std;

class Character{

    private:

    string name;
    int concentration;
    int knowledge;
    int tiredness;
    int fun;

    public:

    Character(string name="Pio", int concentration=50, int knowledge=50, int tiredness=50, int fun=50);

    string getName();
    void setName(string name);
    int getConcentration();
    void setConcentration(int concentration);
    int getKnowledge();
    void setKnowledge(int knowledge);
    int getTiredness();
    void setTiredness(int tiredness);
    int getFun();
    void setFun(int fun);
};