#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class AvoidMobTypeGoal : public ::Goal {
public:
    // prevent constructor by default
    AvoidMobTypeGoal& operator=(AvoidMobTypeGoal const&);
    AvoidMobTypeGoal(AvoidMobTypeGoal const&);
    AvoidMobTypeGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AvoidMobTypeGoal@@UEAA@XZ
    virtual ~AvoidMobTypeGoal() = default;

    // vIndex: 1, symbol: ?canUse@AvoidMobTypeGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@AvoidMobTypeGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@AvoidMobTypeGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@AvoidMobTypeGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@AvoidMobTypeGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@AvoidMobTypeGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0AvoidMobTypeGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit AvoidMobTypeGoal(class Mob& mob);

    // symbol: ?canFindAvoidPath@AvoidMobTypeGoal@@QEAA_NPEAVActor@@@Z
    MCAPI bool canFindAvoidPath(class Actor* actor);

    // symbol: ?findNearestEntityToAvoid@AvoidMobTypeGoal@@QEAAPEAVActor@@M@Z
    MCAPI class Actor* findNearestEntityToAvoid(float dist);

    // NOLINTEND
};
