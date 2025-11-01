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
    ::ll::TypedStorage<4, 4, int> mNextRandomizeTicks;
    ::ll::TypedStorage<4, 4, int> mMinChangeDirectionTicks;
    ::ll::TypedStorage<4, 4, int> mAddRandomTicks;
    ::ll::TypedStorage<4, 4, int> mTurnRange;
    ::ll::TypedStorage<4, 4, float> mChosenDegrees;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimeRandomDirectionGoal& operator=(SlimeRandomDirectionGoal const&);
    SlimeRandomDirectionGoal(SlimeRandomDirectionGoal const&);
    SlimeRandomDirectionGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
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
