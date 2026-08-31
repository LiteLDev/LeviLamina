#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes {

enum class CreativeItemCategory : uchar {
    All             = 0,
    Construction    = 1,
    Nature          = 2,
    Equipment       = 3,
    Items           = 4,
    ItemCommandOnly = 5,
    Undefined       = 6,
    NumCategories   = 7,
};

}
