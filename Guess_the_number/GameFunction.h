#pragma once
#include<math.h>
#include<time.h>
void PrintIntro()
{
std::cout<<"Hello and welcome to guess the number.\n There will be 10 rounds where you have to guess a single number.\n There will be a hint each round\n";

}
bool PlayGame(int difficulty)
{
    // vars
    srand (time(NULL));
    int numToGuess= rand()%30 +difficulty*difficulty;
    int hintProduct=numToGuess*2;
    int playerGuess;
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
        return false;
    }
    
}
void PrintOutro()
{
    std::cout<<"You have guessed all of the numbers!\n";
}