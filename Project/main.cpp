#include "Character.hpp"
#include "Friends.hpp"

void opening(Character &c);
void closing(Character &c);
void recap(Character &c, int conc, int know, int tired, int funny);
void recap(Character &c, People *f, int conc, int know, int tired, int funny);

int main(){

    string answer;
    int ans;

    Character c;
    Friends *p= new Friends(0,10,10);
    People *f=p;

    opening(c);

    recap(c,0,0,0,0);

    // START STORY

    // WEEK 1

    cout << "First week" << endl;
    cout << "You're just arrived in Krakow. What do you want to do now?" << endl;

    do{
    cout << "Spend all the week visiting the city / Relax untill the begin of the lessons [1/2]" << endl;
    cin >> answer;
    ans=stoi(answer);
    
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
    cout << "Go to sleep and arrive at class refreshed / Go to the party and meet new friends [1/2]" << endl;
    cin >> answer;
    ans=stoi(answer);
    
    } while( (ans != 1) && (ans != 2) ); 

    if(ans==1){
        recap(c,20,10,(-20),(-20));
    }

    else{
        recap(c,f,(-20),0,20,20);
    }

    // WEEK 3

    cout << "Third week" << endl;
    cout << "You studied all the week and now it's Saturday. What do you want to do?" << endl;

    do{
    cout << "Solo-trip in Wroklaw / Go to ice rink with your friends [1/2]" << endl;
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

    cout << "Fourth week" << endl;
    cout << "You're behind in your studies. What do you want to do?" << endl;;

    do{
    cout << "Study hard all the week without stop / Study hard all the week and spend some chill night with your friend [1/2]" << endl;
    cin >> answer;
    ans=stoi(answer);
    
    } while( (ans != 1) && (ans != 2) ); 

        if(ans==1){
        recap(c,10,10,-20,-20);
    }

    else{
        recap(c,f,20,15,-10,10);
    }

    // WEEK 5

    cout << "Fifth week" << endl;
    cout << "Your friends are organizing a trip in Gdanz. What do you want to do?" << endl;

    do{
    cout << "Visit some city near Krakow (one-day trip) / Let's go !! (four-days trip) [1/2]" << endl;
    cin >> answer;
    ans=stoi(answer);
    
    } while( (ans != 1) && (ans != 2) ); 

        if(ans==1){
        recap(c,10,5,10,10);
    }

    else{
        recap(c,f,-10,0,10,40);
        cout << "WOW! You slept in the most dangerous neighorhood of Gdanz. You are strong." << endl;
        cout << "" << endl;
    }

    // WEEK 6

    cout << "Sixth week" << endl;
    cout << "Holidays are coming. What do you want to do?" << endl;

    do{
    cout << "Return to your country / Spend the New Year's celebration in the Stare Miastro [1/2]" << endl;
    cin >> answer;
    ans=stoi(answer);
    
    } while( (ans != 1) && (ans != 2) ); 

        if(ans==1){
        recap(c,0,0,10,10);
    }

    else{
        recap(c,10,10,10,10);
    }

    // WEEK 7

    cout << "Seventh week" << endl;
    cout << "All the Erasmus students came back to Krakow and ESN PK is organizing a week full of parties. What do you want to do?" << endl;

    do{
    cout << "I don't miss a single one / Alternate a day of party with a day of rest [1/2]" << endl;
    cin >> answer;
    ans=stoi(answer);
    
    } while( (ans != 1) && (ans != 2) ); 

        if(ans==1){
        recap(c,f,-30,-10,30,30);
    }

    else{
        recap(c,f,-20,-5,20,20);
    }

    // WEEK 8

    cout << "Eighth week" << endl;
    cout << "The professor says that the students need to start working on them project. What do you want to do?" << endl;

    do{
    cout << "Start now / There are still two weeks, I'll starts in a few days [1/2]" << endl;
    cin >> answer;
    ans=stoi(answer);
    
    } while( (ans != 1) && (ans != 2) ); 

        if(ans==1){
        recap(c,f,10,10,0,0);
    }

    else{
        recap(c,f,-10,-10,10,0);
        cout << "Let's hope that few days don't become a week" << endl;
    }



    // WEEK 9

    cout << "Ninth week" << endl;
    cout << "It's the week before the exam. What do you want to do?" << endl;;

    do{
    cout << "Spend the whole week studying, I'll have fun later / Study during the day and spend the evenings at BaniaLuka with friends [1/2]" << endl;
    cin >> answer;
    ans=stoi(answer);
    
    } while( (ans != 1) && (ans != 2) ); 

        if(ans==1){
        recap(c,10,10,-10,-10);
    }

    else{
        recap(c,f,-10,5,10,10);
    }

    // WEEK 10

    closing(c);

    delete f,p;

    return 0;
}

// FUNCTIONS

void opening(Character &c){

    cout << "" << endl;
    cout << "----------------------------" << endl;
    cout << "ERASMUS IN KRAKOW - THE GAME" << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;


    cout << "Welcome, insert your name: " << endl;

    string name;
    cin >> name;

    c.setName(name);
}


void closing(Character &c){

    cout << "It's the week of the exams" << endl;

    double mark=0;

    if (c.getConcentration()>=50) mark += 1;
    if (c.getKnowledge()>=80) mark += 3;
    if (c.getTiredness()<=50) mark +=1;

    cout << "The mark for your OOP exam is: " << mark << endl;

    if (mark>=3){
        cout << "YOU WIN!" << endl;
        cout << "Your score is: " << mark*c.getFun() << endl;
    }
    else{
        cout << "YOU LOSE!" << endl;
    }
}


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

        cout << "" << endl;
        
        cout << "Name: " << c.getName() << endl;
        cout << "Concentration: " << c.getConcentration() << endl;
        cout << "Knowledge: " << c.getKnowledge() << endl;
        cout << "Tiredness: " << c.getTiredness() << endl;
        cout << "Fun:" << c.getFun() << endl;

        cout << "" << endl;
}

void recap(Character &c, People *f, int conc, int know, int tired, int funny){
        
        f->setIntensity(f->getIntensity()+10);

        c.setConcentration(c.getConcentration()+conc + f->getIntensity());

        if (c.getConcentration()>100){
            c.setConcentration(100);
        }

        if (c.getConcentration()<0){
            c.setConcentration(0);
        }

        c.setTiredness(c.getTiredness()+tired + f->getIntensity());

        if (c.getTiredness()>100){
            c.setTiredness(100);
        }

        if (c.getTiredness()<0){
            c.setTiredness(0);
        }
        c.setFun(c.getFun()+funny + f->getIntensity());

        if (c.getFun()>100){
            c.setFun(100);
        }

        if (c.getFun()<0){
            c.setFun(0);
        }

        c.setKnowledge(c.getKnowledge()+know+f->getIntensity());

        if (c.getKnowledge()>100){
            c.setKnowledge(100);
        }

        if (c.getKnowledge()<0){
            c.setKnowledge(0);
        }

        cout << "" << endl;

        cout << "Name: " << c.getName() << endl;
        cout << "Concentration: " << c.getConcentration() << endl;
        cout << "Knowledge: " << c.getKnowledge() << endl;
        cout << "Tiredness: " << c.getTiredness() << endl;
        cout << "Fun:" << c.getFun() << endl;

        cout << "" << endl;

        cout << "Your friends helps your parameters" << endl;
        cout << "" << endl;

}


