#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class LookAtActorGoal : public ::Goal {
public:
    // prevent constructor by default
    LookAtActorGoal& operator=(LookAtActorGoal const&) = delete;
    LookAtActorGoal(LookAtActorGoal const&)            = delete;
    LookAtActorGoal()                                  = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@LookAtActorGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@LookAtActorGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@LookAtActorGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@LookAtActorGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@LookAtActorGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@LookAtActorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??1LookAtActorGoal@@UEAA@XZ
    MCVAPI ~LookAtActorGoal();

    // symbol: ??0LookAtActorGoal@@QEAA@AEAVMob@@MMHHHH@Z
    MCAPI LookAtActorGoal(class Mob&, float, float, int, int, int, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_withinFieldOfView@LookAtActorGoal@@AEAA_NAEAVActor@@@Z
    MCAPI bool _withinFieldOfView(class Actor&);

    // NOLINTEND
};
