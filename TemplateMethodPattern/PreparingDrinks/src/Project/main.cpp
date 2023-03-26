#include "Barista.h"
#include "HotDrink.h"

int main(){
    HotDrink* coffee = new Coffee();
    Barista starBucksBarista;
    starBucksBarista.makeDrink(coffee);
}