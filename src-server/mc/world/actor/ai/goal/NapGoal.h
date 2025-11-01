#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class NapGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<8, 8, ::Tick> mCooldown;
    ::ll::TypedStorage<8, 8, ::Tick> mDetectMobsTimer;
    ::ll::TypedStorage<1, 1, bool> mInvalidCooldown;
    ::ll::TypedStorage<4, 4, int const> mNapCooldownMin;
    ::ll::TypedStorage<4, 4, int const> mNapCooldownMax;
    ::ll::TypedStorage<4, 12, ::Vec3 const> mDetectRange;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mCanNapFilters;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mWakeMobExceptions;
    // NOLINTEND

public:
    // prevent constructor by default
    NapGoal& operator=(NapGoal const&);
    NapGoal(NapGoal const&);
    NapGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~NapGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NapGoal(::Mob& mob, float cooldownTimeMin, float cooldownTimeMax, float detectMobDistXZ, float detectMobDistY, ::ActorFilterGroup const& canNapFilters, ::ActorFilterGroup const& wakeMobExceptions);

    MCAPI bool _canSleep(::Tick const& currentTick) const;

    MCAPI bool _detectsMobs() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, float cooldownTimeMin, float cooldownTimeMax, float detectMobDistXZ, float detectMobDistY, ::ActorFilterGroup const& canNapFilters, ::ActorFilterGroup const& wakeMobExceptions);
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
