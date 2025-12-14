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
// clang-format on

class StompBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mBlockToRemove;
    ::ll::TypedStorage<4, 4, int>            mTicksSinceReachedGoal;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool findTargetBlock() /*override*/;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string&) const /*override*/;

    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual void _moveToBlock() /*override*/;

    virtual bool _canReach(::BlockPos const& pos) /*override*/;

    virtual void _createBreakProgressParticles(::Level&, ::BlockSource&, ::BlockPos);

    virtual void _createDestroyParticles(::Level&, ::BlockSource&, ::BlockPos);

    virtual void _playBreakProgressSound(::Level&, ::BlockSource&, ::BlockPos);

    virtual void _playDestroySound(::Level&, ::BlockSource&, ::BlockPos);

    virtual ~StompBlockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $findTargetBlock();

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCFOLD void $stop();

    MCAPI void $tick();

    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void $_moveToBlock();

    MCAPI bool $_canReach(::BlockPos const& pos);


    // NOLINTEND
};
