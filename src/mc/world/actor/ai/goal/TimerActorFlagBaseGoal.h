#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class TimerActorFlagBaseGoal : public ::Goal {
public:
    // prevent constructor by default
    TimerActorFlagBaseGoal& operator=(TimerActorFlagBaseGoal const&);
    TimerActorFlagBaseGoal(TimerActorFlagBaseGoal const&);
    TimerActorFlagBaseGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TimerActorFlagBaseGoal@@UEAA@XZ
    virtual ~TimerActorFlagBaseGoal() = default;

    // vIndex: 1, symbol: ?canUse@TimerActorFlagBaseGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@TimerActorFlagBaseGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@TimerActorFlagBaseGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@TimerActorFlagBaseGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@TimerActorFlagBaseGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@TimerActorFlagBaseGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0TimerActorFlagBaseGoal@@QEAA@AEAVMob@@W4ActorFlags@@@Z
    MCAPI TimerActorFlagBaseGoal(class Mob&, ::ActorFlags);

    // NOLINTEND
};
