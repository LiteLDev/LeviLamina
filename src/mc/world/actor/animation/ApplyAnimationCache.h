#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ApplyAnimationCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mHasActor;
    ::ll::TypedStorage<1, 1, bool> mHasLevel;
    ::ll::TypedStorage<1, 1, bool> mIsAnimationPaused;
    ::ll::TypedStorage<1, 1, bool> mIsSimPaused;
    ::ll::TypedStorage<1, 1, bool> mIsClientSide;
    ::ll::TypedStorage<1, 1, bool> mClientBonesNeedInit;
    ::ll::TypedStorage<1, 1, bool> mShouldActorUpdateEffects;
    ::ll::TypedStorage<1, 1, bool> mShouldActorUpdateBonesAndEffects;
    // NOLINTEND
};
