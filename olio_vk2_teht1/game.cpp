#include "game.h"

Game::Game(int maxNum) {
    cout<<"gameconstructor"<<endl;
    maxNumber = maxNum;

}


Game::~Game()
{
     cout<<"gamedestructor"<<endl;
}

void Game::play()
{
    srand(time(NULL));
    randomNumber = rand() % 21;

    while (playerGuess!=randomNumber) {

        cout<< "Arvaa luku valilta 1-20!" << endl;
        cin >> playerGuess;
        numOfGuesses++;


        if (playerGuess<randomNumber) {
            cout<< "Luku on suurempi" <<endl;
        }
        else if (playerGuess>randomNumber) {
            cout<< "Luku on pienempi" <<endl;
        }
        else if (playerGuess==randomNumber) {
            cout<< "Arvasit oikein!" <<endl;
        }
    }

printGameResult();

}

void Game::printGameResult()
{

    cout<< "Arvausten lukumaara: " <<numOfGuesses<< endl;

}
