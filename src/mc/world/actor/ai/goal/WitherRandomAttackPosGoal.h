#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class WitherRandomAttackPosGoal : public ::RandomStrollGoal {
public:
    // prevent constructor by default
    WitherRandomAttackPosGoal& operator=(WitherRandomAttackPosGoal const&);
    WitherRandomAttackPosGoal(WitherRandomAttackPosGoal const&);
    WitherRandomAttackPosGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WitherRandomAttackPosGoal@@UEAA@XZ
    virtual ~WitherRandomAttackPosGoal() = default;

    // vIndex: 1, symbol: ?canUse@WitherRandomAttackPosGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@WitherRandomAttackPosGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@WitherRandomAttackPosGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@WitherRandomAttackPosGoal@@UEAAXXZ
    virtual void stop();

    // symbol: ??0WitherRandomAttackPosGoal@@QEAA@AEAVMob@@MHH@Z
    MCAPI WitherRandomAttackPosGoal(class Mob& mob, float speed, int xzDist, int yDist);

    // NOLINTEND
};
