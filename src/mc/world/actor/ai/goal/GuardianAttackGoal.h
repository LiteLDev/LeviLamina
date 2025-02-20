#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Guardian;
// clang-format on

class GuardianAttackGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Guardian&> mGuardian;
    ::ll::TypedStorage<4, 4, int>         mAttackTicks;
    ::ll::TypedStorage<4, 4, int>         mSoundDelayTicks;
    ::ll::TypedStorage<4, 4, int>         mMagicDamage;
    ::ll::TypedStorage<4, 4, int>         mHardModeExtraMagicDamage;
    ::ll::TypedStorage<4, 4, int>         mElderExtraMagicDamage;
    ::ll::TypedStorage<4, 4, float>       mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>       mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>       mMinDistance;
    ::ll::TypedStorage<1, 1, bool>        mLastCanSinkState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~GuardianAttackGoal() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $tick();

    MCAPI void $stop();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
