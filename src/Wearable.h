#pragma once

#include <string>

using std::string;

// Represents a wearable item
class Wearable {
protected:
    string name;
public:
    // EFFECTS: constructs a wearable item with the given name
    explicit Wearable(const string& name);

    // EFFECTS: displays the result of placing this wearable on top of an item named onTopOf
    virtual void display(const string& on_top_of) const;
};
