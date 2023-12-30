#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class TargetWhenPushedGoal : public ::Goal {
public:
    // prevent constructor by default
    TargetWhenPushedGoal& operator=(TargetWhenPushedGoal const&);
    TargetWhenPushedGoal(TargetWhenPushedGoal const&);
    TargetWhenPushedGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TargetWhenPushedGoal@@UEAA@XZ
    virtual ~TargetWhenPushedGoal() = default;

    // vIndex: 1, symbol: ?canUse@TargetWhenPushedGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@TargetWhenPushedGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 3, symbol: ?canBeInterrupted@TargetWhenPushedGoal@@UEAA_NXZ
    virtual bool canBeInterrupted();

    // vIndex: 4, symbol: ?start@TargetWhenPushedGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@TargetWhenPushedGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@TargetWhenPushedGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol:
    // ??0TargetWhenPushedGoal@@QEAA@AEAVMob@@V?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@M@Z
    MCAPI TargetWhenPushedGoal(class Mob& mob, std::vector<struct MobDescriptor> targetTypes, float percentChance);

    // NOLINTEND
};
