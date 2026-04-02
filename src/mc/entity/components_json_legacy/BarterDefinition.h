#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BarterDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mBarterItemsTable;
    ::ll::TypedStorage<4, 4, int>            mCooldown;
    // NOLINTEND
};
