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
    ::ll::TypedStorage<4, 4, int>  mVillageSearchRangeBlocks;
    ::ll::TypedStorage<1, 1, bool> mReachedVillage;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToVillageGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void start() /*override*/;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual void _moveToBlock() /*override*/;

    virtual ::BlockPos _selectRandomPosInVillage();

    virtual ~MoveToVillageGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MoveToVillageGoal(::Mob& mob, float speedModifier, float goalRadius, float cooldown, int searchRange);

    MCNAPI ::std::shared_ptr<::Village> _tryGetCurrentVillage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob& mob, float speedModifier, float goalRadius, float cooldown, int searchRange);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $start();

    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI void $_moveToBlock();

    MCNAPI ::BlockPos $_selectRandomPosInVillage();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
