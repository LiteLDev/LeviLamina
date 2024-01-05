#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SwimWithEntityGoal : public ::Goal {
public:
    // prevent constructor by default
    SwimWithEntityGoal& operator=(SwimWithEntityGoal const&);
    SwimWithEntityGoal(SwimWithEntityGoal const&);
    SwimWithEntityGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SwimWithEntityGoal@@UEAA@XZ
    virtual ~SwimWithEntityGoal() = default;

    // vIndex: 1, symbol: ?canUse@SwimWithEntityGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SwimWithEntityGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 3, symbol: ?canBeInterrupted@SwimWithEntityGoal@@UEAA_NXZ
    virtual bool canBeInterrupted();

    // vIndex: 4, symbol: ?start@SwimWithEntityGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SwimWithEntityGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SwimWithEntityGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SwimWithEntityGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_setWantedMob@SwimWithEntityGoal@@AEAA_NXZ
    MCAPI bool _setWantedMob();

    // NOLINTEND
};
