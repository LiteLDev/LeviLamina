#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"

struct MobDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mTargetFilter;
    ::ll::TypedStorage<4, 4, float> mMaxDistance;
    ::ll::TypedStorage<4, 4, float> mMaxHeight;
    ::ll::TypedStorage<4, 4, float> mMaxFlee;
    ::ll::TypedStorage<4, 4, float> mWalkSpeedModifier;
    ::ll::TypedStorage<4, 4, float> mSprintSpeedModifier;
    ::ll::TypedStorage<1, 1, bool> mOverrideMustSee;
    ::ll::TypedStorage<1, 1, bool> mMustSee;
    ::ll::TypedStorage<1, 1, bool> mCheckIfOutnumbered;
    ::ll::TypedStorage<1, 1, bool> mReevaluateDescription;
    ::ll::TypedStorage<4, 4, int> mMustSeeForgetTicks;
    ::ll::TypedStorage<4, 4, int> mPriority;
    ::ll::TypedStorage<4, 4, int> mCooldownInTicks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MobDescriptor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
