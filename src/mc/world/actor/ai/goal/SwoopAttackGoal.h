#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class SwoopAttackGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<1, 1, bool>                      mHurtTarget;
    ::ll::TypedStorage<4, 4, int>                       mAttackTicks;
    ::ll::TypedStorage<4, 4, float>                     mDamageReach;
    ::ll::TypedStorage<4, 4, float>                     mSpeedMultiplier;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mCooldownTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    SwoopAttackGoal& operator=(SwoopAttackGoal const&);
    SwoopAttackGoal(SwoopAttackGoal const&);
    SwoopAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~SwoopAttackGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $start();

    MCFOLD void $stop();

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
