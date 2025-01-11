#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
class Vec3;
// clang-format on

class BaseMoveToGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk22aab0;
    ::ll::UntypedStorage<4, 4>  mUnk3f610f;
    ::ll::UntypedStorage<4, 4>  mUnked6cc2;
    ::ll::UntypedStorage<4, 4>  mUnk809df1;
    ::ll::UntypedStorage<4, 4>  mUnk385056;
    ::ll::UntypedStorage<1, 1>  mUnk7cfcba;
    ::ll::UntypedStorage<4, 4>  mUnk54abaa;
    ::ll::UntypedStorage<4, 4>  mUnk2c80b9;
    ::ll::UntypedStorage<8, 8>  mUnkc9bdba;
    ::ll::UntypedStorage<8, 8>  mUnk752a86;
    ::ll::UntypedStorage<4, 12> mUnkc0a59d;
    ::ll::UntypedStorage<4, 12> mUnk7c9c12;
    ::ll::UntypedStorage<4, 12> mUnkae3413;
    ::ll::UntypedStorage<4, 4>  mUnk9f7b23;
    ::ll::UntypedStorage<8, 8>  mUnk35c636;
    ::ll::UntypedStorage<4, 4>  mUnka006c6;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseMoveToGoal& operator=(BaseMoveToGoal const&);
    BaseMoveToGoal(BaseMoveToGoal const&);
    BaseMoveToGoal();

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

    // vIndex: 10
    virtual bool hasReachedTarget() const;

    // vIndex: 11
    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&) = 0;

    // vIndex: 12
    virtual int _nextStartTick();

    // vIndex: 13
    virtual bool _canReach(::BlockPos const& pos);

    // vIndex: 14
    virtual void _moveToBlock() = 0;

    // vIndex: 15
    virtual ::Vec3 _getTargetPosition() const;

    // vIndex: 16
    virtual uint64 _getRepathTime() const;

    // vIndex: 0
    virtual ~BaseMoveToGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseMoveToGoal(
        ::Mob& mob,
        float  speedModifier,
        float  cooldownTimeout,
        float  goalRadius,
        int    maxStayTicks,
        int    giveUpTicks
    );

    MCAPI ::BlockPos _blockAboveTarget() const;

    MCAPI void _checkIfStuck();

    MCAPI bool _isCooldownActive() const;

    MCAPI void setInterval(int interval);

    MCAPI void setTargetPositionOffset(::Vec3 const& offset);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Mob& mob, float speedModifier, float cooldownTimeout, float goalRadius, int maxStayTicks, int giveUpTicks);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCFOLD bool $hasReachedTarget() const;

    MCAPI int $_nextStartTick();

    MCAPI bool $_canReach(::BlockPos const& pos);

    MCAPI ::Vec3 $_getTargetPosition() const;

    MCFOLD uint64 $_getRepathTime() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
