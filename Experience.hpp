#include <iostream>
#include <string>
using namespace std;

class Experience{

    private: 

    int concentration_variation;
    int knowledge_variation;
    int tiredness_variation;
    int fun_variation;

    public:

    Experience(int concentration_variation=0, int knowledge_variation=0, int tiredness_variation=0, int fun_variation=0);

    int getConcentrationVariation();
    int getKnowledgeVariation();
    int getTirednessVariation();
    int getFunVariation();
     
};