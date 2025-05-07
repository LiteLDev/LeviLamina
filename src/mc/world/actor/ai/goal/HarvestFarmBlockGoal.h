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
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 11
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 0
    virtual ~HarvestFarmBlockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool trySowCrop(::BlockSource& region, ::BlockPos const& farmlandPos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
