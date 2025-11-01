#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

enum class FilterSubject : short {
    Self = 0,
    Other = 1,
    Player = 2,
    Target = 3,
    Parent = 4,
    Baby = 5,
    Block = 6,
    Damager = 7,
    Holder = 8,
    Item = 9,
    Count = 10,
};

}
