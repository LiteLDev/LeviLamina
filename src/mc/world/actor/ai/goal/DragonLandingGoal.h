#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class EnderDragon;
class Path;
// clang-format on

class DragonLandingGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EnderDragon&>            mDragon;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mCurrentPath;
    ::ll::TypedStorage<1, 1, bool>                      mDone;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonLandingGoal& operator=(DragonLandingGoal const&);
    DragonLandingGoal(DragonLandingGoal const&);
    DragonLandingGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~DragonLandingGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void findNewTarget();
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
