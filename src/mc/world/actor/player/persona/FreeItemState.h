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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    FreeItemState();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI FreeItemState(bool isFree, bool isAchievement, bool isRedeemable);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(bool isFree, bool isAchievement, bool isRedeemable);
#endif
    // NOLINTEND
};

} // namespace persona
