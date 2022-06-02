#pragma once

#include <vector>
#include "Wearable.h"

using std::vector;

// represents a clothing item
class Clothing : public Wearable {
private:
    vector<Wearable*> wearables;
public:
    // EFFECTS: constructs a clothing item with name
    explicit Clothing(const string& name);

    // MODIFIES: this
    // EFFECTS: add wearables to the list
    void add(Wearable* w);

    // EFFECTS: displays wearables
    void display(const string& on_top_of) const override;
};
