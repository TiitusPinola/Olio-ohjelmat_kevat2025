#include "chef.h"

Chef::Chef(string name) {
    cout<<"Chef Gordon konstruktori"<<endl;
    chefName=name;
    cout<<"Chef name = "<<chefName<<endl;
}

Chef::~Chef()
{
    cout<<"Chef "<<chefName<<" destruktori"<<endl;
}

string Chef::getName()
{
    return"";
}

int Chef::makeSalad(int ingredients)
{
    int saladPortions = ingredients/5;
    cout<<chefName<<" makes "<<saladPortions<<" salad portions from "<<ingredients<<" ingredients! "<<endl;

    return saladPortions;
}

int Chef::makeSoup(int ingredients)
{
    int soupPortions = ingredients/3;
    cout<<chefName<<" makes "<<soupPortions<<" soup portions from "<<ingredients<<" ingredients! "<<endl;

    return 0;
}
