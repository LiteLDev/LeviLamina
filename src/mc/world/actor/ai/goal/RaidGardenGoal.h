#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class BlockPos;
class BlockSource;
class Mob;
// clang-format on

class RaidGardenGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk671e39;
    ::ll::UntypedStorage<4, 4>  mUnk3ca3f4;
    ::ll::UntypedStorage<4, 4>  mUnkaddda6;
    ::ll::UntypedStorage<4, 4>  mUnk5cebe8;
    ::ll::UntypedStorage<4, 4>  mUnk87ca8d;
    ::ll::UntypedStorage<4, 4>  mUnk69a726;
    ::ll::UntypedStorage<4, 4>  mUnk80a9db;
    ::ll::UntypedStorage<8, 24> mUnk60300c;
    // NOLINTEND

public:
    // prevent constructor by default
    RaidGardenGoal& operator=(RaidGardenGoal const&);
    RaidGardenGoal(RaidGardenGoal const&);
    RaidGardenGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 11
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~RaidGardenGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RaidGardenGoal(
        ::Mob&                                  mob,
        float                                   speedModifier,
        int                                     searchRange,
        int                                     searchHeight,
        int                                     searchCount,
        float                                   goalRadius,
        int                                     maxToEat,
        int                                     hasEatenFillDelay,
        int                                     eatDelay,
        int                                     initialEatDelay,
        ::std::vector<::BlockDescriptor> const& eatBlocks
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                  mob,
        float                                   speedModifier,
        int                                     searchRange,
        int                                     searchHeight,
        int                                     searchCount,
        float                                   goalRadius,
        int                                     maxToEat,
        int                                     hasEatenFillDelay,
        int                                     eatDelay,
        int                                     initialEatDelay,
        ::std::vector<::BlockDescriptor> const& eatBlocks
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $tick();

    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
