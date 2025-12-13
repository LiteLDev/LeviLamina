#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class ChargeAttackGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<4, 4, float>                                  mMinDistance;
    ::ll::TypedStorage<4, 4, float>                                  mMaxDistance;
    ::ll::TypedStorage<4, 4, float>                                  mSuccessRate;
    ::ll::TypedStorage<4, 4, float>                                  mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSound;
    // NOLINTEND

public:
    // prevent constructor by default
    ChargeAttackGoal& operator=(ChargeAttackGoal const&);
    ChargeAttackGoal(ChargeAttackGoal const&);
    ChargeAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~ChargeAttackGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
