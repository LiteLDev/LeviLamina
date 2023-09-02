#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SwimWanderGoal : public ::Goal {
public:
    // prevent constructor by default
    SwimWanderGoal& operator=(SwimWanderGoal const&) = delete;
    SwimWanderGoal(SwimWanderGoal const&)            = delete;
    SwimWanderGoal()                                 = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@SwimWanderGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SwimWanderGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SwimWanderGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 6, symbol: ?tick@SwimWanderGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SwimWanderGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_setWantedPosition@SwimWanderGoal@@IEAA_NXZ
    MCAPI bool _setWantedPosition();

    // NOLINTEND
};
