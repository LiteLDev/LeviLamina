#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/util/IntRange.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class PlayDeadGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                   mDuration;
    ::ll::TypedStorage<4, 4, float>                                                   mRandomStartChance;
    ::ll::TypedStorage<4, 4, int>                                                     mForceUseBelowHealth;
    ::ll::TypedStorage<1, 1, bool>                                                    mApplyRegeneration;
    ::ll::TypedStorage<4, 8, ::IntRange>                                              mActivationDamageRange;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ActorDamageCause>> mDamageCauses;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                                     mFilters;
    ::ll::TypedStorage<8, 8, ::Mob&>                                                  mMob;
    ::ll::TypedStorage<8, 8, uint64>                                                  mPlayDeadDuration;
    ::ll::TypedStorage<8, 8, uint64>                                                  mStopPlayingDeadTime;
    ::ll::TypedStorage<8, 8, uint64>                                                  mLastDamagedTimestamp;
    ::ll::TypedStorage<1, 1, bool>                                                    mPlayDeadOnAllCauses;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayDeadGoal& operator=(PlayDeadGoal const&);
    PlayDeadGoal(PlayDeadGoal const&);
    PlayDeadGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~PlayDeadGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI bool $canContinueToUse();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
