#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUniformBits {
public:
    // member variables
    // NOLINTBEGIN
    bool mIsHurt                     : 1;
    bool mIsOnFire                   : 1;
    bool mIsHighlighted              : 1;
    bool mHasChangeColor             : 1;
    bool mHasMultiplicitiveTintColor : 1;
    // NOLINTEND
};
