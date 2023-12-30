#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RandomStrollGoal : public ::Goal {
public:
    // prevent constructor by default
    RandomStrollGoal& operator=(RandomStrollGoal const&);
    RandomStrollGoal(RandomStrollGoal const&);
    RandomStrollGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RandomStrollGoal@@UEAA@XZ
    virtual ~RandomStrollGoal();

    // vIndex: 1, symbol: ?canUse@RandomStrollGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RandomStrollGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RandomStrollGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RandomStrollGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@RandomStrollGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RandomStrollGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 10, symbol: ?_setWantedPosition@RandomStrollGoal@@MEAA_NXZ
    virtual bool _setWantedPosition();

    // symbol: ??0RandomStrollGoal@@QEAA@AEAVMob@@MHHH@Z
    MCAPI RandomStrollGoal(class Mob& mob, float speed, int xzDist, int yDist, int interval);

    // NOLINTEND
};
