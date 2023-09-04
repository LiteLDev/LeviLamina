#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class LayDownGoal : public ::Goal {
public:
    // prevent constructor by default
    LayDownGoal& operator=(LayDownGoal const&) = delete;
    LayDownGoal(LayDownGoal const&)            = delete;
    LayDownGoal()                              = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

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
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0LayDownGoal@@QEAA@AEAVMob@@HH@Z
    MCAPI LayDownGoal(class Mob&, int, int);

    // NOLINTEND
};
