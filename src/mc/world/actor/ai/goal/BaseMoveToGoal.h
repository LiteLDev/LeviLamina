#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class BaseMoveToGoal : public ::Goal {
public:
    // prevent constructor by default
    BaseMoveToGoal& operator=(BaseMoveToGoal const&);
    BaseMoveToGoal(BaseMoveToGoal const&);
    BaseMoveToGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BaseMoveToGoal@@UEAA@XZ
    virtual ~BaseMoveToGoal();

    // vIndex: 1, symbol: ?canUse@BaseMoveToGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@BaseMoveToGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@BaseMoveToGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@BaseMoveToGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@BaseMoveToGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 10, symbol: ?hasReachedTarget@BaseMoveToGoal@@UEBA_NXZ
    virtual bool hasReachedTarget() const;

    // vIndex: 11, symbol: ?isValidTarget@DropItemForGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos) = 0;

    // vIndex: 12, symbol: ?_nextStartTick@BaseMoveToGoal@@MEAAHXZ
    virtual int _nextStartTick();

    // vIndex: 13, symbol: ?_canReach@BaseMoveToGoal@@MEAA_NAEBVBlockPos@@@Z
    virtual bool _canReach(class BlockPos const& pos);

    // vIndex: 14, symbol: ?_moveToBlock@BaseMoveToBlockGoal@@MEAAXXZ
    virtual void _moveToBlock() = 0;

    // vIndex: 15, symbol: ?_getTargetPosition@BaseMoveToGoal@@MEBA?AVVec3@@XZ
    virtual class Vec3 _getTargetPosition() const;

    // vIndex: 16, symbol: ?_getRepathTime@BaseMoveToGoal@@MEBA_KXZ
    virtual uint64 _getRepathTime() const;

    // symbol: ??0BaseMoveToGoal@@QEAA@AEAVMob@@MMMHH@Z
    MCAPI BaseMoveToGoal(
        class Mob& mob,
        float      speedModifier,
        float      cooldownTimeout,
        float      goalRadius,
        int        maxStayTicks,
        int        giveUpTicks
    );

    // symbol: ?setTargetPositionOffset@BaseMoveToGoal@@QEAAXAEBVVec3@@@Z
    MCAPI void setTargetPositionOffset(class Vec3 const& offset);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_blockAboveTarget@BaseMoveToGoal@@IEBA?AVBlockPos@@XZ
    MCAPI class BlockPos _blockAboveTarget() const;

    // symbol: ?_checkIfStuck@BaseMoveToGoal@@IEAAXXZ
    MCAPI void _checkIfStuck();

    // symbol: ?_isCooldownActive@BaseMoveToGoal@@IEBA_NXZ
    MCAPI bool _isCooldownActive() const;

    // symbol: ?setInterval@BaseMoveToGoal@@IEAAXH@Z
    MCAPI void setInterval(int interval);

    // NOLINTEND
};
