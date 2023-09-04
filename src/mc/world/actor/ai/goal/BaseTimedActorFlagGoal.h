#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class BaseTimedActorFlagGoal : public ::Goal {
public:
    // prevent constructor by default
    BaseTimedActorFlagGoal& operator=(BaseTimedActorFlagGoal const&) = delete;
    BaseTimedActorFlagGoal(BaseTimedActorFlagGoal const&)            = delete;
    BaseTimedActorFlagGoal()                                         = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@BaseTimedActorFlagGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@BaseTimedActorFlagGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@BaseTimedActorFlagGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@BaseTimedActorFlagGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@BaseTimedActorFlagGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@BaseTimedActorFlagGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??1BaseTimedActorFlagGoal@@UEAA@XZ
    MCVAPI ~BaseTimedActorFlagGoal();

    // symbol: ??0BaseTimedActorFlagGoal@@QEAA@AEAVMob@@W4ActorFlags@@@Z
    MCAPI BaseTimedActorFlagGoal(class Mob&, ::ActorFlags);

    // NOLINTEND
};
