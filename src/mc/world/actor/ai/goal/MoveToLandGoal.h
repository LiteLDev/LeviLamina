#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
// clang-format on

class MoveToLandGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    MoveToLandGoal& operator=(MoveToLandGoal const&);
    MoveToLandGoal(MoveToLandGoal const&);
    MoveToLandGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 11
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 14
    virtual void _moveToBlock() /*override*/;

    // vIndex: 0
    virtual ~MoveToLandGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveToLandGoal(
        ::Mob& mob,
        float  speedModifier,
        int    searchRange,
        int    searchHeight,
        int    searchCount,
        float  goalRadius
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Mob& mob, float speedModifier, int searchRange, int searchHeight, int searchCount, float goalRadius);
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

    MCAPI bool $canContinueToUse();

    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI void $_moveToBlock();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
