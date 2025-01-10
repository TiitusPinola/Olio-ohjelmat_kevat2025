#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main() {

    int lkm;
    lkm=game(21);
    std::cout<< "Arvausten lukumaara: " <<lkm<< std::endl;

    return 0;
}

int game(int maxnum) {

    srand(time(NULL));
    int randomnum = rand() % 21;
    //cout << "Arvottu numemro:"<< randomnum << endl;//kommentoitu, koska nayttaa muuten vastauksen
    int guessnum;
    int calcguess;



    while (guessnum!=randomnum) {

        std::cout<< "Arvaa luku valilta 1-20!" << std::endl;
        std::cin >> guessnum;
        calcguess++;
        //std::cout<< "Arvausten lukumaara: "<< calcguess <<std::endl; //ylimaarainen, koska paaohjelma tulostaa arvausten lukumaaran

        if (guessnum<randomnum) {
            std::cout<< "Luku on suurempi" <<std::endl;
        }
        else if (guessnum>randomnum) {
            std::cout<< "Luku on pienempi" <<std::endl;
        }
        else if (guessnum==randomnum) {
            std::cout<< "Arvasit oikein!" <<std::endl;
        }
    }


    return calcguess;

}


