#include<iostream>
#include"GameFunction.h"
#include<time.h>


int main ()
{
    int difficulty=1;
    int maxDifficulty=10;
    
    // run the game until difficulty equals max difficulty
     PrintIntro();
    while(difficulty<=maxDifficulty)
    {

        std::cout<<"Round "<<difficulty<<std::endl;
        PlayGame(difficulty);
        difficulty++;

        std::cin.ignore();
        std::cin.clear();
        std::cout.clear();
    }
    return 0;
}