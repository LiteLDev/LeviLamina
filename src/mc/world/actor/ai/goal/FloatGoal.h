#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class FloatGoal : public ::Goal {
public:
    // prevent constructor by default
    FloatGoal& operator=(FloatGoal const&);
    FloatGoal(FloatGoal const&);
    FloatGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FloatGoal@@UEAA@XZ
    virtual ~FloatGoal() = default;

    // vIndex: 1, symbol: ?canUse@FloatGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 6, symbol: ?tick@FloatGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FloatGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0FloatGoal@@QEAA@AEAVMob@@_N@Z
    MCAPI FloatGoal(class Mob& mob, bool);

    // NOLINTEND
};
