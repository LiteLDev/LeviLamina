#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AnimationComponentID {
public:
    // member variables
    // NOLINTBEGIN
    union {
        uint64                           mActorUniqueId : 54;
        ::ll::TypedStorage<8, 8, uint64> mAllBits;
        uint64                           mAttachableIndex : 6;
        uint64                           mSubClientId     : 4;
    } mData;
    // NOLINTEND
};
