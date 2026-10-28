#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_50 {

struct ExhaustionComponentDefinition {
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
    ::ll::TypedStorage<4, 4, float> mLunge;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
