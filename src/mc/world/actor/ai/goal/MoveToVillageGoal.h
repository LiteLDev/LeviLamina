#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
class Village;
// clang-format on

class MoveToVillageGoal : public ::BaseMoveToGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkaf3684;
    ::ll::UntypedStorage<1, 1> mUnkf8c676;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToVillageGoal& operator=(MoveToVillageGoal const&);
    MoveToVillageGoal(MoveToVillageGoal const&);
    MoveToVillageGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 11
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 14
    virtual void _moveToBlock() /*override*/;

    // vIndex: 17
    virtual ::BlockPos _selectRandomPosInVillage();

    // vIndex: 0
    virtual ~MoveToVillageGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveToVillageGoal(::Mob& mob, float speedModifier, float goalRadius, float cooldown, int searchRange);

    MCAPI ::std::shared_ptr<::Village> _tryGetCurrentVillage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, float speedModifier, float goalRadius, float cooldown, int searchRange);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $start();

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI void $_moveToBlock();

    MCAPI ::BlockPos $_selectRandomPosInVillage();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
