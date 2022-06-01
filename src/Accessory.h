#pragma once

#include "Wearable.h"

// represents a clothing accessory
class Accessory : public Wearable {
public:
    // EFFECTS: constructs an accessory item with name
    Accessory(string name);
};
