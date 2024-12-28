#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct IntRange;
// clang-format on

class RandomHoverGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc22331;
    ::ll::UntypedStorage<4, 4> mUnke9896a;
    ::ll::UntypedStorage<4, 4> mUnkf95a95;
    ::ll::UntypedStorage<4, 4> mUnkfb84e8;
    ::ll::UntypedStorage<4, 4> mUnk66a436;
    ::ll::UntypedStorage<4, 4> mUnk64f233;
    ::ll::UntypedStorage<4, 8> mUnk670192;
    ::ll::UntypedStorage<8, 8> mUnkb4f45e;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomHoverGoal& operator=(RandomHoverGoal const&);
    RandomHoverGoal(RandomHoverGoal const&);
    RandomHoverGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~RandomHoverGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RandomHoverGoal(
        ::Mob&     mob,
        float      speedMultiplier,
        int        interval,
        float      xzDist,
        float      yDist,
        float      yOffset,
        ::IntRange hoverHeight
    );

    MCAPI bool _computeNewTarget();

    MCAPI bool _mobMeetsPreconditions() const;

    MCAPI void _moveToTarget();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&     mob,
        float      speedMultiplier,
        int        interval,
        float      xzDist,
        float      yDist,
        float      yOffset,
        ::IntRange hoverHeight
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $tick();

    MCAPI bool $canContinueToUse();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
