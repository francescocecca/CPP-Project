#include "Experience.hpp"

Experience::Experience(int concentration_variation, int knowledge_variation, int tiredness_variation, int fun_variation){
    this->concentration_variation=concentration_variation;
    this->knowledge_variation=knowledge_variation;
    this->tiredness_variation=tiredness_variation;
    this->fun_variation=fun_variation;
}

int Experience::getConcentrationVariation(){
    return concentration_variation;
}

int Experience::getKnowledgeVariation(){
    return knowledge_variation;
}

int Experience::getTirednessVariation(){
    return tiredness_variation;
}

int Experience::getFunVariation(){
    return fun_variation;
}
     