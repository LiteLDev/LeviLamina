#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class HoverGoal : public ::Goal {
public:
    // prevent constructor by default
    HoverGoal& operator=(HoverGoal const&);
    HoverGoal(HoverGoal const&);
    HoverGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HoverGoal@@UEAA@XZ
    virtual ~HoverGoal() = default;

    // vIndex: 1, symbol: ?canUse@HoverGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@HoverGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@HoverGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@HoverGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@HoverGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0HoverGoal@@QEAA@AEAVMob@@M@Z
    MCAPI HoverGoal(class Mob& mob, float speedMultiplier);

    // NOLINTEND
};
