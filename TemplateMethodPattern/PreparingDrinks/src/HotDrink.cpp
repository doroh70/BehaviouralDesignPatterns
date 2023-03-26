#include "HotDrink.h"
#include <iostream>

void HotDrink::boilDrink(){
    std::cout<<"Boiling your drink." << std::endl;
}

void HotDrink::pour(){
    std::cout<<"Pouring your drink." << std::endl;
}

void HotDrink::makeDrink(){
    this->boilDrink();
    this->brew();
    this->pour();
    this->addCondiments();
}

void Tea::brew(){
    std::cout<<"Brewing tea in pot"<<std::endl;
}

void Tea::addCondiments(){
    std::cout<<"A lemon slice has been added to your tea"<<std::endl;
}

void Coffee::brew(){
    std::cout<<"Brewing coffee in coffee maker"<<std::endl;
}

void Coffee::addCondiments(){
    std::cout<<"Adding sugar and peak milk"<<std::endl;
}

void HotChocolate::brew(){
    std::cout<<"Adding chocolate mix and milk to boiled water"<<std::endl;
}

void HotChocolate::addCondiments(){
    std::cout<<"Adding sugar and peak milk"<<std::endl;
}