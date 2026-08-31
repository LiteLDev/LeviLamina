#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class CroakGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mIntervalRange;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mDurationRange;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>       mFilters;
    ::ll::TypedStorage<8, 8, ::Tick>                    mTickOfNextCroak;
    ::ll::TypedStorage<8, 8, ::Tick>                    mTickOfEndCroak;
    // NOLINTEND

public:
    // prevent constructor by default
    CroakGoal& operator=(CroakGoal const&);
    CroakGoal(CroakGoal const&);
    CroakGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
