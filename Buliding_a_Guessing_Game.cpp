#include <iostream>

using namespace std;

int main()
{
    int secretNum = 21;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    
    /*Homework for you try and make that while loop in a do*/
    
    while(secretNum != guess && !outOfGuesses)
    {
        if(guessCount < guessLimit) {
            cout << "Enter Guess: ";
            cin >> guess;
            guessCount++;
        
        } else {
          outOfGuesses = true;  
        }
    } 
    
    if (outOfGuesses) {
        cout << "you Lose";
    } else {
        cout << "you win";
    }

    return 0;
}