#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class MoveTowardsTargetGoal : public ::Goal {
public:
    // prevent constructor by default
    MoveTowardsTargetGoal& operator=(MoveTowardsTargetGoal const&);
    MoveTowardsTargetGoal(MoveTowardsTargetGoal const&);
    MoveTowardsTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveTowardsTargetGoal@@UEAA@XZ
    virtual ~MoveTowardsTargetGoal() = default;

    // vIndex: 1, symbol: ?canUse@MoveTowardsTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@MoveTowardsTargetGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@MoveTowardsTargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@MoveTowardsTargetGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@MoveTowardsTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0MoveTowardsTargetGoal@@QEAA@AEAVMob@@MM@Z
    MCAPI MoveTowardsTargetGoal(class Mob& pathMob, float speedModifier, float within);

    // NOLINTEND
};
