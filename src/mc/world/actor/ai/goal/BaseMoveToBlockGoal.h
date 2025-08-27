#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class BaseMoveToBlockGoal : public ::BaseMoveToGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSearchRange;
    ::ll::TypedStorage<4, 4, int> mSearchHeight;
    ::ll::TypedStorage<4, 4, int> mSearchCount;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseMoveToBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 17
    virtual bool findTargetBlock();

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 14
    virtual void _moveToBlock() /*override*/;

    // vIndex: 0
    virtual ~BaseMoveToBlockGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseMoveToBlockGoal(
        ::Mob& mob,
        float  speedModifier,
        int    searchRange,
        int    searchHeight,
        int    searchCount,
        float  goalRadius,
        float  cooldownTime
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob& mob,
        float  speedModifier,
        int    searchRange,
        int    searchHeight,
        int    searchCount,
        float  goalRadius,
        float  cooldownTime
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $findTargetBlock();

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $_moveToBlock();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
