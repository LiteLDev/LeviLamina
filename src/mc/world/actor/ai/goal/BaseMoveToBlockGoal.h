#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class BaseMoveToBlockGoal : public ::BaseMoveToGoal {
public:
    // prevent constructor by default
    BaseMoveToBlockGoal& operator=(BaseMoveToBlockGoal const&);
    BaseMoveToBlockGoal(BaseMoveToBlockGoal const&);
    BaseMoveToBlockGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BaseMoveToBlockGoal@@UEAA@XZ
    virtual ~BaseMoveToBlockGoal();

    // vIndex: 1, symbol: ?canUse@BaseMoveToBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@BaseMoveToBlockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 14, symbol: ?_moveToBlock@BaseMoveToBlockGoal@@MEAAXXZ
    virtual void _moveToBlock();

    // vIndex: 17, symbol: ?findTargetBlock@BaseMoveToBlockGoal@@UEAA_NXZ
    virtual bool findTargetBlock();

    // symbol: ??0BaseMoveToBlockGoal@@QEAA@AEAVMob@@MHHHMM@Z
    MCAPI BaseMoveToBlockGoal(
        class Mob& mob,
        float      speedModifier,
        int        searchRange,
        int        searchHeight,
        int        searchCount,
        float      goalRadius,
        float      cooldownTime
    );

    // NOLINTEND
};
