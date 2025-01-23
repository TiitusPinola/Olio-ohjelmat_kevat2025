#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;


int main()
{
    Chef kokki1("Gordon Ramsay");
    kokki1.makeSalad(11);
    kokki1.makeSoup(11);

    ItalianChef kokki2("Mario Balotelli");
    kokki2.makeSalad(9);
    kokki2.askSecret("pizza",20,20);

    return 0;
}
