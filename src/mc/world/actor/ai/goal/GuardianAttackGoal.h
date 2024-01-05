#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class GuardianAttackGoal : public ::Goal {
public:
    // prevent constructor by default
    GuardianAttackGoal& operator=(GuardianAttackGoal const&);
    GuardianAttackGoal(GuardianAttackGoal const&);
    GuardianAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GuardianAttackGoal@@UEAA@XZ
    virtual ~GuardianAttackGoal() = default;

    // vIndex: 1, symbol: ?canUse@GuardianAttackGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@GuardianAttackGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@GuardianAttackGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@GuardianAttackGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@GuardianAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@GuardianAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0GuardianAttackGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit GuardianAttackGoal(class Mob& mob);

    // NOLINTEND
};
