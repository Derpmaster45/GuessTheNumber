#pragma once
#include<math.h>

void PrintIntro()
{
std::cout<<"Hello and welcome to guess the number.\n There will be 10 rounds where you have to guess a single number.\n There will be a hint each round\n";

}
bool PlayGame(int difficulty)
{
    // print intro 
    PrintIntro();
    // vars
    int numToGuess= rand()%difficulty+difficulty;
    int hintProduct=numToGuess*2;
    int playerGuess;
    // prompt and hint
    std::cout<<"Hint the number *2 = "<<hintProduct<<std::endl;
    std::cout<<"Guess the number\n";
    std::cin>>playerGuess;
    //std::cout<<"number has been guessed.";
    if(playerGuess==numToGuess)
    {
        std::cout<<"Congrats you guessed the number! Can you do it again?";
        difficulty++;
        return true;

    }
    else
    {
        std::cout<<"Nope not the correct number";
        return false;
    }
    
}