#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExhaustionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHeal;
    ::ll::TypedStorage<4, 4, float> mJump;
    ::ll::TypedStorage<4, 4, float> mSprintJump;
    ::ll::TypedStorage<4, 4, float> mMine;
    ::ll::TypedStorage<4, 4, float> mAttack;
    ::ll::TypedStorage<4, 4, float> mDamage;
    ::ll::TypedStorage<4, 4, float> mWalk;
    ::ll::TypedStorage<4, 4, float> mSprint;
    ::ll::TypedStorage<4, 4, float> mSwim;
    // NOLINTEND

};
