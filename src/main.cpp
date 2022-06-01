#include "Clothing.h"
#include "Accessory.h"

int main() {
    Clothing* uniform = new Clothing("uniform");
    Clothing* apron = new Clothing("apron");
    Wearable* belt = new Wearable("belt");
    Clothing* jacket = new Clothing("jacket");
    Accessory* nametag = new Accessory("name tag");
    Accessory* scarf = new Accessory("scarf");

    uniform->add(belt);
    uniform->add(jacket);
    jacket->add(nametag);
    jacket->add(scarf);
    uniform->add(apron);
    uniform->display("Barista");

    delete uniform;
    delete apron;
    delete belt;
    delete jacket;
    delete nametag;
    delete scarf;

    return 0;
}
