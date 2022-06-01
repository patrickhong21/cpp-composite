#include "Wearable.h"
#include <iostream>

Wearable::Wearable(string name) {
    this->name = name;
}

void print(const string& on_top_of, const string& item_name) {
    string to_print = item_name + " on " + on_top_of;
    std::cout << to_print << std::endl;
}

void Wearable::display(const string& on_top_of) const {
    print(on_top_of, name);
}
