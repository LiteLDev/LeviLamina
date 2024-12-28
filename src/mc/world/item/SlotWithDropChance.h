#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SlotWithDropChance : int {
    None     = 4294967295,
    Begin    = 0,
    Mainhand = 0,
    Offhand  = 1,
    Head     = 2,
    Chest    = 3,
    Legs     = 4,
    Feet     = 5,
    Count    = 6,
};
