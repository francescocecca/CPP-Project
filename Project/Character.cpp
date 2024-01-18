#include "Character.hpp"

Character::Character(string name, int concentration, int knowledge, int tiredness, int fun){
    this->name=name;
    this->concentration=concentration;
    this->knowledge=knowledge;
    this->tiredness=tiredness;
    this->fun=fun;
}

string Character::getName(){
    return name;
}

void Character::setName(string n){
    name=n;
}

int Character::getConcentration(){
    return concentration;
}

void Character::setConcentration(int conc){
    concentration=conc;
}

int Character::getKnowledge(){
    return knowledge;
}

void Character::setKnowledge(int kn){
    knowledge=kn;
}

int Character::getTiredness(){
    return tiredness;
}

void Character::setTiredness(int tir){
    tiredness=tir;
}

int Character::getFun(){
    return fun;
}

void Character::setFun(int f){
    fun=f;
}