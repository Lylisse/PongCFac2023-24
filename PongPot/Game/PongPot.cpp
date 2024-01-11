#include <iostream>
#include <tuple>
#include <chrono>
#include <thread>
using namespace std;

class Game{
private:
    int PotPosa;
    int PotPosb;

    void setPotPos(){
        Pot.getPot
    }
public:
Game(){
    /*TODO Game constructor*/

    }

};

class PongPot{
private:
    /* data */
    tuple<int, int> pot;
    tuple<int, int> prevPot;

    void checkPotChange(){
        /*TODO get serial info
        check for change in potPos
        if True then change pot*/
    }

    
public:
    PongPot(){
        int a = 275;
        int b = 550;
        pot, prevPot = make_tuple(a, b);
    }


    tuple<int, int> getPot(){
        checkPotChange();
        return pot;
    }
};

void runFPS(){
    this_thread::sleep_for()
    Pot.makeFrame()
}

int main(){
    PongPot Pot;

    while (true){
        DisplayGUI();
        this_thread::sleep_for(chrono::milliseconds(33));
    }
}
