#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CompletedUsingItemPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mItemId;
    ::ll::TypedStorage<4, 4, int> mItemUseMethod;
    // NOLINTEND

};
