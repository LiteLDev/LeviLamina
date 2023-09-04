#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SquidDiveGoal : public ::Goal {
public:
    // prevent constructor by default
    SquidDiveGoal& operator=(SquidDiveGoal const&) = delete;
    SquidDiveGoal(SquidDiveGoal const&)            = delete;
    SquidDiveGoal()                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@SquidDiveGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SquidDiveGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SquidDiveGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SquidDiveGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SquidDiveGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SquidDiveGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // NOLINTEND
};
