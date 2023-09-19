#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class NapGoal : public ::Goal {
public:
    // prevent constructor by default
    NapGoal& operator=(NapGoal const&);
    NapGoal(NapGoal const&);
    NapGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@NapGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@NapGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@NapGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@NapGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@NapGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0NapGoal@@QEAA@AEAVMob@@MMMMAEBVActorFilterGroup@@1@Z
    MCAPI NapGoal(class Mob&, float, float, float, float, class ActorFilterGroup const&, class ActorFilterGroup const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canSleep@NapGoal@@AEBA_NAEBUTick@@@Z
    MCAPI bool _canSleep(struct Tick const&) const;

    // symbol: ?_detectsMobs@NapGoal@@AEBA_NXZ
    MCAPI bool _detectsMobs() const;

    // symbol: ?_setCooldown@NapGoal@@AEAAXXZ
    MCAPI void _setCooldown();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?MOB_DETECT_TIME@NapGoal@@0MB
    MCAPI static float const MOB_DETECT_TIME;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $MOB_DETECT_TIME() { return MOB_DETECT_TIME; }

    // NOLINTEND
};
