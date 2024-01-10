#include "Character.hpp"
#include "Friends.hpp"

void recap(Character &c, int conc, int know, int tired, int funny);
void recap(Character &c, Friends &f, int conc, int know, int tired, int funny);

int main(){

    string answer;
    int ans;

    Character c;
    Friends f;

    cout << "Welcome, insert your name: " << endl;

    string name;
    cin >> name;

    c.setName(name);

    cout << "Name: " << c.getName() << endl;
    cout << "Concentration: " << c.getConcentration() << endl;
    cout << "Knowledge: " << c.getKnowledge() << endl;
    cout << "Tiredness: " << c.getTiredness() << endl;
    cout << "Fun:" << c.getFun() << endl;

    // START STORY

    // WEEK 1

    cout << "First week" << endl;
    cout << "You're just arrived in Krakow. What do you want to do now?" << endl;

    do{
    cout << "Spend all the week visiting the city / Relax untill the begin of the lessons [1/2]" << endl;
    cin >> answer;
    ans=stoi(answer);

    cout << ans << endl;
    
    } while( (ans != 1) && (ans != 2) ); 

    if(ans==1){
       recap(c,(-20),0,20,20);
    }

    else{
       recap(c,20,0,(-20),(-20));
    }

    // WEEK 2

    cout << "Second week" << endl;
    cout << "It's the night before the OOP lesson. What do you want to do now?" << endl;

    do{
    cout << "Go to sleep / Go to the party and meet new friends [1/2]" << endl;
    cin >> answer;
    ans=stoi(answer);
    
    } while( (ans != 1) && (ans != 2) ); 

    if(ans==1){
        recap(c,20,20,(-20),(-20));
    }

    else{
        recap(c,f,(-20),0,20,20);
    }

    // WEEK 3

    cout << "Third week" << endl;
    cout << "It's Saturday. What do you want to do?" << endl;

    do{
    cout << "Visit some places outside of Krakow / Go to ice rink with your friends [1/2]" << endl;
    cin >> answer;
    ans=stoi(answer);
    
    } while( (ans != 1) && (ans != 2) ); 

        if(ans==1){
        recap(c,-20,0,20,20);
    }

    else{
        recap(c,f,10,10,-10,20);
    }

    // WEEK 4

    cout << "It's the week before the exams. What do you want to do?" << endl;;

    do{
    cout << "Study hard all the week without stop / Study hard all the week and spend some chill night with your friend [1/2]" << endl;
    cin >> answer;
    ans=stoi(answer);
    
    } while( (ans != 1) && (ans != 2) ); 

        if(ans==1){
        recap(c,10,20,-20,-20);
    }

    else{
        recap(c,f,20,20,-10,10);
    }

    // WEEK 5

    cout << "It's the week of the exams" << endl;

    double mark=0;

    if (c.getConcentration()>=50) mark += 1;
    if (c.getKnowledge()>=80) mark += 3;
    if (c.getTiredness()<=50) mark +=1;

    cout << "The mark for your OOP exam is: " << mark << endl;
}

// END OF THE MAIN

// FUNCTIONS

void recap(Character &c, int conc, int know, int tired, int funny){

        c.setConcentration(c.getConcentration()+conc);
        
        if (c.getConcentration()>100){
            c.setConcentration(100);
        }

        if (c.getConcentration()<0){
            c.setConcentration(0);
        }

        c.setTiredness(c.getTiredness()+tired);

        if (c.getTiredness()>100){
            c.setTiredness(100);
        }

        if (c.getTiredness()<0){
            c.setTiredness(0);
        }

        c.setFun(c.getFun()+funny);

        if (c.getFun()>100){
            c.setFun(100);
        }

        if (c.getFun()<0){
            c.setFun(0);
        }

        c.setKnowledge(c.getKnowledge()+know);

        if (c.getKnowledge()>100){
            c.setKnowledge(100);
        }

        if (c.getKnowledge()<0){
            c.setKnowledge(0);
        }
        
        cout << "Name: " << c.getName() << endl;
        cout << "Concentration: " << c.getConcentration() << endl;
        cout << "Knowledge: " << c.getKnowledge() << endl;
        cout << "Tiredness: " << c.getTiredness() << endl;
        cout << "Fun:" << c.getFun() << endl;

        cout << "" << endl;
}

void recap(Character &c, Friends &f, int conc, int know, int tired, int funny){
        
        f.setIntensity(f.getIntensity()+10);

        c.setConcentration(c.getConcentration()+conc + f.getIntensity()*0.1);

        if (c.getConcentration()>100){
            c.setConcentration(100);
        }

        if (c.getConcentration()<0){
            c.setConcentration(0);
        }

        c.setTiredness(c.getTiredness()+tired + f.getIntensity()*0.1);

        if (c.getTiredness()>100){
            c.setTiredness(100);
        }

        if (c.getTiredness()<0){
            c.setTiredness(0);
        }
        c.setFun(c.getFun()+funny + f.getIntensity()*0.1);

        if (c.getFun()>100){
            c.setFun(100);
        }

        if (c.getFun()<0){
            c.setFun(0);
        }

        c.setKnowledge(c.getKnowledge()+know+f.getIntensity()*0.1);

        if (c.getKnowledge()>100){
            c.setKnowledge(100);
        }

        if (c.getKnowledge()<0){
            c.setKnowledge(0);
        }

        cout << "Name: " << c.getName() << endl;
        cout << "Concentration: " << c.getConcentration() << endl;
        cout << "Knowledge: " << c.getKnowledge() << endl;
        cout << "Tiredness: " << c.getTiredness() << endl;
        cout << "Fun:" << c.getFun() << endl;

        cout << "" << endl;

        cout << "Your friends helps your parameters" << endl;

}


