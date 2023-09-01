#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"

class BaseMoveToBlockGoal : public ::BaseMoveToGoal {
public:
    // prevent constructor by default
    BaseMoveToBlockGoal& operator=(BaseMoveToBlockGoal const&) = delete;
    BaseMoveToBlockGoal(BaseMoveToBlockGoal const&)            = delete;
    BaseMoveToBlockGoal()                                      = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@BaseMoveToBlockGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@BaseMoveToBlockGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 14, symbol: ?_moveToBlock@BaseMoveToBlockGoal@@MEAAXXZ
    virtual void _moveToBlock();

    // vIndex: 17, symbol: ?findTargetBlock@BaseMoveToBlockGoal@@UEAA_NXZ
    virtual bool findTargetBlock();

    // symbol: ??1BaseMoveToBlockGoal@@UEAA@XZ
    MCVAPI ~BaseMoveToBlockGoal();

    // symbol: ??0BaseMoveToBlockGoal@@QEAA@AEAVMob@@MHHHMM@Z
    MCAPI BaseMoveToBlockGoal(class Mob&, float, int, int, int, float, float);

    // NOLINTEND
};
