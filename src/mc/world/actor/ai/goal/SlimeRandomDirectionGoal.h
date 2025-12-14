#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class SlimeRandomDirectionGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<4, 4, int>    mNextRandomizeTicks;
    ::ll::TypedStorage<4, 4, int>    mMinChangeDirectionTicks;
    ::ll::TypedStorage<4, 4, int>    mAddRandomTicks;
    ::ll::TypedStorage<4, 4, int>    mTurnRange;
    ::ll::TypedStorage<4, 4, float>  mChosenDegrees;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimeRandomDirectionGoal& operator=(SlimeRandomDirectionGoal const&);
    SlimeRandomDirectionGoal(SlimeRandomDirectionGoal const&);
    SlimeRandomDirectionGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~SlimeRandomDirectionGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
