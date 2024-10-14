#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

class StompBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // prevent constructor by default
    StompBlockGoal& operator=(StompBlockGoal const&);
    StompBlockGoal(StompBlockGoal const&);
    StompBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StompBlockGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 13
    virtual bool _canReach(class BlockPos const& pos);

    // vIndex: 14
    virtual void _moveToBlock();

    // vIndex: 17
    virtual bool findTargetBlock();

    // vIndex: 18
    virtual void _createBreakProgressParticles(class Level& level, class BlockSource& region, class BlockPos pos);

    // vIndex: 19
    virtual void _createDestroyParticles(class Level& level, class BlockSource& region, class BlockPos pos);

    // vIndex: 20
    virtual void _playBreakProgressSound(class Level& level, class BlockSource& region, class BlockPos pos);

    // vIndex: 21
    virtual void _playDestroySound(class Level& level, class BlockSource& region, class BlockPos pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool _canReach$(class BlockPos const& pos);

    MCAPI void _createBreakProgressParticles$(class Level& level, class BlockSource& region, class BlockPos pos);

    MCAPI void _createDestroyParticles$(class Level& level, class BlockSource& region, class BlockPos pos);

    MCAPI void _moveToBlock$();

    MCAPI void _playBreakProgressSound$(class Level& level, class BlockSource& region, class BlockPos pos);

    MCAPI void _playDestroySound$(class Level& level, class BlockSource& region, class BlockPos pos);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI bool findTargetBlock$();

    MCAPI bool isValidTarget$(class BlockSource& region, class BlockPos const& pos);

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
