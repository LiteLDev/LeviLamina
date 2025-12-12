#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class HarvestFarmBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // HarvestFarmBlockGoal inner types define
    enum class Task : int {
        None = -1,
        Reap = 0,
        Sow  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mMaximumTicksUntilSearch;
    ::ll::TypedStorage<4, 4, int>                          mSearchCooldownMaximumTicks;
    ::ll::TypedStorage<4, 4, int>                          mTaskCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                          mInventorySeedsIndex;
    ::ll::TypedStorage<4, 4, ::HarvestFarmBlockGoal::Task> mCurrentTask;
    // NOLINTEND

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

    virtual ~HarvestFarmBlockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool trySowCrop(::BlockSource& region, ::BlockPos const& farmlandPos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCFOLD void $start();

    MCFOLD void $stop();

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
