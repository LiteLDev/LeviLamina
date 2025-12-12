#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class BlockPos;
class BlockSource;
// clang-format on

class RaidGardenGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                               mMaxToEat;
    ::ll::TypedStorage<4, 4, int>                               mEaten;
    ::ll::TypedStorage<4, 4, int>                               mEatDelay;
    ::ll::TypedStorage<4, 4, int>                               mHasEatenFillDelay;
    ::ll::TypedStorage<4, 4, int>                               mInitialEatDelay;
    ::ll::TypedStorage<4, 4, int>                               mEatTimer;
    ::ll::TypedStorage<4, 4, int>                               mHasEatenFillTimer;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mEatBlocks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void tick() /*override*/;

    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~RaidGardenGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $tick();

    MCNAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
