#include<iostream>
#include"GameFunction.h"


int main ()
{
    int difficulty=1;
    int maxDifficulty=10;

    // run the game until difficulty equals max difficulty
    while(difficulty<=maxDifficulty)
    {
        PlayGame(difficulty);
        difficulty++;
        std::cin.ignore();
        std::cin.clear();
        std::cout.clear();
    }
    return 0;
}