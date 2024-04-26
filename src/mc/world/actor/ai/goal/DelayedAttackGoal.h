#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MeleeAttackGoal.h"

class DelayedAttackGoal : public ::MeleeAttackGoal {
public:
    // prevent constructor by default
    DelayedAttackGoal& operator=(DelayedAttackGoal const&);
    DelayedAttackGoal(DelayedAttackGoal const&);
    DelayedAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DelayedAttackGoal@@UEAA@XZ
    virtual ~DelayedAttackGoal() = default;

    // vIndex: 1, symbol: ?canUse@DelayedAttackGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DelayedAttackGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DelayedAttackGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DelayedAttackGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DelayedAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@DelayedAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0DelayedAttackGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit DelayedAttackGoal(class Mob& mob);

    // symbol: ?_isTargetInLineOfSightLegacy@DelayedAttackGoal@@SA_NAEBVMob@@AEBVActor@@@Z
    MCAPI static bool _isTargetInLineOfSightLegacy(class Mob const&, class Actor const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_attemptStartAttacking@DelayedAttackGoal@@AEBAXPEAVActor@@@Z
    MCAPI void _attemptStartAttacking(class Actor* target) const;

    // symbol: ?_manageAttackTime@DelayedAttackGoal@@AEAAXXZ
    MCAPI void _manageAttackTime();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mMinLineOfSightFixVersion@DelayedAttackGoal@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const mMinLineOfSightFixVersion;

    // NOLINTEND
};
