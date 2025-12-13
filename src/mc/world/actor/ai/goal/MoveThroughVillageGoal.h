#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Path;
// clang-format on

class MoveThroughVillageGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mSpeedModifier;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mPath;
    ::ll::TypedStorage<8, 8, ::Mob&>                    mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveThroughVillageGoal& operator=(MoveThroughVillageGoal const&);
    MoveThroughVillageGoal(MoveThroughVillageGoal const&);
    MoveThroughVillageGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~MoveThroughVillageGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
