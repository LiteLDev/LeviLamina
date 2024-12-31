#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Level;
// clang-format on

class StompBlockGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk159c8f;
    ::ll::UntypedStorage<4, 4> mUnkb9d2d7;
    // NOLINTEND

public:
    // prevent constructor by default
    StompBlockGoal& operator=(StompBlockGoal const&);
    StompBlockGoal(StompBlockGoal const&);
    StompBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 17
    virtual bool findTargetBlock() /*override*/;

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

    // vIndex: 14
    virtual void _moveToBlock() /*override*/;

    // vIndex: 13
    virtual bool _canReach(::BlockPos const& pos) /*override*/;

    // vIndex: 18
    virtual void _createBreakProgressParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);

    // vIndex: 19
    virtual void _createDestroyParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);

    // vIndex: 20
    virtual void _playBreakProgressSound(::Level& level, ::BlockSource& region, ::BlockPos pos);

    // vIndex: 21
    virtual void _playDestroySound(::Level& level, ::BlockSource& region, ::BlockPos pos);

    // vIndex: 0
    virtual ~StompBlockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $findTargetBlock();

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void $_moveToBlock();

    MCAPI bool $_canReach(::BlockPos const& pos);

    MCAPI void $_createBreakProgressParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);

    MCAPI void $_createDestroyParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);

    MCAPI void $_playBreakProgressSound(::Level& level, ::BlockSource& region, ::BlockPos pos);

    MCAPI void $_playDestroySound(::Level& level, ::BlockSource& region, ::BlockPos pos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
