#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class LayDownGoal : public ::Goal {
public:
    // prevent constructor by default
    LayDownGoal& operator=(LayDownGoal const&);
    LayDownGoal(LayDownGoal const&);
    LayDownGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LayDownGoal@@UEAA@XZ
    virtual ~LayDownGoal() = default;

    // vIndex: 1, symbol: ?canUse@LayDownGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@LayDownGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@LayDownGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@LayDownGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@LayDownGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@LayDownGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0LayDownGoal@@QEAA@AEAVMob@@HH@Z
    MCAPI LayDownGoal(class Mob& mob, int, int);

    // NOLINTEND
};
