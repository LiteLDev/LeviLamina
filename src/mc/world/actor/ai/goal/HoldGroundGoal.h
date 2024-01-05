#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class HoldGroundGoal : public ::Goal {
public:
    // prevent constructor by default
    HoldGroundGoal& operator=(HoldGroundGoal const&);
    HoldGroundGoal(HoldGroundGoal const&);
    HoldGroundGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HoldGroundGoal@@UEAA@XZ
    virtual ~HoldGroundGoal() = default;

    // vIndex: 1, symbol: ?canUse@HoldGroundGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@HoldGroundGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@HoldGroundGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@HoldGroundGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@HoldGroundGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@HoldGroundGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0HoldGroundGoal@@QEAA@AEAVMob@@M_NMAEBVActorDefinitionTrigger@@@Z
    MCAPI HoldGroundGoal(
        class Mob&                          mob,
        float                               hostileRadius,
        bool                                broadcast,
        float                               broadcastRange,
        class ActorDefinitionTrigger const& withinRange
    );

    // NOLINTEND
};
