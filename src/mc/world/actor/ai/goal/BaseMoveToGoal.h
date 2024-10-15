#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class BaseMoveToGoal : public ::Goal {
public:
    // prevent constructor by default
    BaseMoveToGoal& operator=(BaseMoveToGoal const&);
    BaseMoveToGoal(BaseMoveToGoal const&);
    BaseMoveToGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseMoveToGoal();

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

    // vIndex: 10
    virtual bool hasReachedTarget() const;

    // vIndex: 11
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos) = 0;

    // vIndex: 12
    virtual int _nextStartTick();

    // vIndex: 13
    virtual bool _canReach(class BlockPos const& pos);

    // vIndex: 14
    virtual void _moveToBlock() = 0;

    // vIndex: 15
    virtual class Vec3 _getTargetPosition() const;

    // vIndex: 16
    virtual uint64 _getRepathTime() const;

    MCAPI BaseMoveToGoal(
        class Mob& mob,
        float      speedModifier,
        float      cooldownTimeout,
        float      goalRadius,
        int        maxStayTicks,
        int        giveUpTicks
    );

    MCAPI void setTargetPositionOffset(class Vec3 const& offset);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class BlockPos _blockAboveTarget() const;

    MCAPI void _checkIfStuck();

    MCAPI bool _isCooldownActive() const;

    MCAPI void setInterval(int interval);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class Mob& mob,
        float      speedModifier,
        float      cooldownTimeout,
        float      goalRadius,
        int        maxStayTicks,
        int        giveUpTicks
    );

    MCAPI void dtor$();

    MCAPI bool _canReach$(class BlockPos const& pos);

    MCAPI uint64 _getRepathTime$() const;

    MCAPI class Vec3 _getTargetPosition$() const;

    MCAPI int _nextStartTick$();

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI bool hasReachedTarget$() const;

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
