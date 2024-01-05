#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class LeapAtTargetGoal : public ::Goal {
public:
    // prevent constructor by default
    LeapAtTargetGoal& operator=(LeapAtTargetGoal const&);
    LeapAtTargetGoal(LeapAtTargetGoal const&);
    LeapAtTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LeapAtTargetGoal@@UEAA@XZ
    virtual ~LeapAtTargetGoal() = default;

    // vIndex: 1, symbol: ?canUse@LeapAtTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@LeapAtTargetGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@LeapAtTargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@LeapAtTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0LeapAtTargetGoal@@QEAA@AEAVMob@@M_N1@Z
    MCAPI LeapAtTargetGoal(class Mob& mob, float yd, bool mustBeOnGround, bool);

    // NOLINTEND
};
