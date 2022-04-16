#pragma once
#include<math.h>
#include<time.h>
void PrintIntro()
{
std::cout<<"Hello and welcome to guess the number.\n There will be 10 rounds where you have to guess a single number.\n There will be a hint each round\n";

}


bool PlayGame(int difficulty,int lifecount)
{
    // vars
    srand (time(NULL));
    int lifeCount=3;
    int numToGuess= rand()%30 +difficulty*difficulty;
    int hintProduct=numToGuess*2;
    int playerGuess;
    do{
    // prompt and hint
    std::cout<<"Hint the number *2 = "<<hintProduct<<std::endl;
    std::cout<<"Guess the number\n";
    std::cin>>playerGuess;
    //std::cout<<"number has been guessed.";
    if(playerGuess==numToGuess)
    {
        std::cout<<"Congrats you guessed the number!"<<std::endl;
        difficulty++;
        return true;

    }
    else
    {
        std::cout<<"Nope not the correct number\n";
        lifeCount-=1;
        lifecount-=1;
       // lifecount=lifeCount;
       // std::cout<<"Guesses Remaining "<<lifeCount;
        return false;
    }
    if(lifeCount==0)
    {
        std::cout<<"You have guessed 3 wrong answers. Game over.\n You made it to level "<<difficulty<<std::endl;
        return 0;
    }
    } while (lifeCount>0);
    
}
void PrintOutro()
{
    std::cout<<"You have guessed all of the numbers!\n";
}
