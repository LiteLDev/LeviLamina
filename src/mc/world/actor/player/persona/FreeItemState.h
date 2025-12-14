#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct FreeItemState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsFreeItem;
    ::ll::TypedStorage<1, 1, bool> mIsAchievementItem;
    ::ll::TypedStorage<1, 1, bool> mIsRedeemable;
    // NOLINTEND
};

} // namespace persona
