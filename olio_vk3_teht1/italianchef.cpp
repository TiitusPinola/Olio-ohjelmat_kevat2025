#include "italianchef.h"

ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout<<"ItalianChef Mario konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<chefName<<" destruktori"<<endl;
}

bool ItalianChef::askSecret(string pword, int f, int w)
{


    if (password.compare(pword)==0){
        cout<<"Password correct!"<<endl;
        makepizza(f,w);
        return true;
    }
    else{
        cout<<"Password incorrect!"<<endl;
        return false;
    }



}

int ItalianChef::makepizza(int flour, int water)
{
    int pizzaPortions = flour/5 & water/5;
    /*int pizzaPortions1 = flour/5;
    int pizzaPortions2 = water/5;
    int pizzaPortions = pizzaPortions1+pizzaPortions2;*/
    cout<<chefName<<" makes "<<pizzaPortions<<" pizza from "<<flour<<" flour "<<water<<" water! "<<endl;

    return pizzaPortions;
}
