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
    ::ll::TypedStorage<8, 8, ::Mob&>              mMob;
    ::ll::TypedStorage<8, 8, ::Tick>              mCooldown;
    ::ll::TypedStorage<8, 8, ::Tick>              mDetectMobsTimer;
    ::ll::TypedStorage<1, 1, bool>                mInvalidCooldown;
    ::ll::TypedStorage<4, 4, int const>           mNapCooldownMin;
    ::ll::TypedStorage<4, 4, int const>           mNapCooldownMax;
    ::ll::TypedStorage<4, 12, ::Vec3 const>       mDetectRange;
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
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~NapGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NapGoal(
        ::Mob&                    mob,
        float                     cooldownTimeMin,
        float                     cooldownTimeMax,
        float                     detectMobDistXZ,
        float                     detectMobDistY,
        ::ActorFilterGroup const& canNapFilters,
        ::ActorFilterGroup const& wakeMobExceptions
    );

    MCNAPI bool _canSleep(::Tick const& currentTick) const;

    MCNAPI bool _detectsMobs() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Mob&                    mob,
        float                     cooldownTimeMin,
        float                     cooldownTimeMax,
        float                     detectMobDistXZ,
        float                     detectMobDistY,
        ::ActorFilterGroup const& canNapFilters,
        ::ActorFilterGroup const& wakeMobExceptions
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
