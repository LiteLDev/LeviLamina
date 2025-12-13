#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PotionMixDataEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> fromItemId;
    ::ll::TypedStorage<4, 4, int> fromItemAux;
    ::ll::TypedStorage<4, 4, int> reagentItemId;
    ::ll::TypedStorage<4, 4, int> reagentItemAux;
    ::ll::TypedStorage<4, 4, int> toItemId;
    ::ll::TypedStorage<4, 4, int> toItemAux;
    // NOLINTEND
};
