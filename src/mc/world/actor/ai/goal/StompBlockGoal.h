#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Level;
class Mob;
struct GoalId;
// clang-format on

class StompBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mBlockToRemove;
    ::ll::TypedStorage<4, 4, int>            mTicksSinceReachedGoal;
    // NOLINTEND

public:
    // prevent constructor by default
    StompBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool findTargetBlock() /*override*/;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual void _moveToBlock() /*override*/;

    virtual bool _canReach(::BlockPos const& pos) /*override*/;

    virtual void _createBreakProgressParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);

    virtual void _createDestroyParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);

    virtual void _playBreakProgressSound(::Level& level, ::BlockSource& region, ::BlockPos pos);

    virtual void _playDestroySound(::Level& level, ::BlockSource& region, ::BlockPos pos);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StompBlockGoal(
        ::Block const*  block,
        ::Mob&          mob,
        ::std::string   name,
        ::GoalId const& goalId,
        float           speedModifier,
        int             horizontalSearchRange,
        int             verticalSearchRange,
        float           goalRadius,
        int             interval
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Block const*  block,
        ::Mob&          mob,
        ::std::string   name,
        ::GoalId const& goalId,
        float           speedModifier,
        int             horizontalSearchRange,
        int             verticalSearchRange,
        float           goalRadius,
        int             interval
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $findTargetBlock();

    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCNAPI void $_moveToBlock();

    MCNAPI bool $_canReach(::BlockPos const& pos);

    MCNAPI void $_createBreakProgressParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);

    MCNAPI void $_createDestroyParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);

    MCNAPI void $_playBreakProgressSound(::Level& level, ::BlockSource& region, ::BlockPos pos);

    MCNAPI void $_playDestroySound(::Level& level, ::BlockSource& region, ::BlockPos pos);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
