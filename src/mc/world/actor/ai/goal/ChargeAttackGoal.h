#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ChargeAttackGoal : public ::Goal {
public:
    // prevent constructor by default
    ChargeAttackGoal& operator=(ChargeAttackGoal const&);
    ChargeAttackGoal(ChargeAttackGoal const&);
    ChargeAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ChargeAttackGoal@@UEAA@XZ
    virtual ~ChargeAttackGoal() = default;

    // vIndex: 1, symbol: ?canUse@ChargeAttackGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@ChargeAttackGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@ChargeAttackGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@ChargeAttackGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@ChargeAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@ChargeAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0ChargeAttackGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit ChargeAttackGoal(class Mob& pathMob);

    // NOLINTEND
};
