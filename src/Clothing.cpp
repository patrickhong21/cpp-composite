#include "Clothing.h"

Clothing::Clothing(const string& name) : Wearable(name) {}

void Clothing::add(Wearable* w) {
    wearables.push_back(w);
}

void Clothing::display(const string& on_top_of) const {
    Wearable::display(on_top_of);
    for (Wearable* wearable : wearables) {
        wearable->display(name);
    }
}
