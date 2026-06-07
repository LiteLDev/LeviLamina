#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class EnderDragon;
class Path;
// clang-format on

class DragonTakeoffGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      mFirstTick;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mCurrentPath;
    ::ll::TypedStorage<8, 8, ::EnderDragon&>            mDragon;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonTakeoffGoal& operator=(DragonTakeoffGoal const&);
    DragonTakeoffGoal(DragonTakeoffGoal const&);
    DragonTakeoffGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DragonTakeoffGoal(::EnderDragon& mob);

    MCAPI void _findNewTarget();

    MCAPI void _navigateToNextPathNode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::EnderDragon& mob);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
