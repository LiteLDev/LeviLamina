#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemRegistrationState : uchar {
    Uninitialized    = 0,
    RegisteringItems = 1,
    ItemsRegistered  = 2,
    Initialized      = 3,
};
