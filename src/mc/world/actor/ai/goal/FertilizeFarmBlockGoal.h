#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Item;
class Mob;
// clang-format on

class FertilizeFarmBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mNextFertilizeStartTick;
    ::ll::TypedStorage<4, 4, int>    mMaxFertilizerUsage;
    ::ll::TypedStorage<4, 4, int>    mSearchCooldownMaximumTicks;
    ::ll::TypedStorage<4, 4, int>    mInventoryFertilizerIndex;
    ::ll::TypedStorage<4, 4, int>    mTimesFertilized;
    // NOLINTEND

public:
    // prevent constructor by default
    FertilizeFarmBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FertilizeFarmBlockGoal(::Mob& mob);

    MCAPI int findInventorySlotForItem(::std::function<bool(::Item const&)> itemCallback) const;

    MCAPI bool tryFertilizeCrop(::BlockSource& region, ::BlockPos const& farmlandPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
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

    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
