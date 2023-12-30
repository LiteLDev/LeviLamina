#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomLookAroundGoal.h"

class RandomLookAroundAndSitGoal : public ::RandomLookAroundGoal {
public:
    // prevent constructor by default
    RandomLookAroundAndSitGoal& operator=(RandomLookAroundAndSitGoal const&);
    RandomLookAroundAndSitGoal(RandomLookAroundAndSitGoal const&);
    RandomLookAroundAndSitGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RandomLookAroundAndSitGoal@@UEAA@XZ
    virtual ~RandomLookAroundAndSitGoal() = default;

    // vIndex: 1, symbol: ?canUse@RandomLookAroundAndSitGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RandomLookAroundAndSitGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RandomLookAroundAndSitGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RandomLookAroundAndSitGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@RandomLookAroundAndSitGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RandomLookAroundAndSitGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0RandomLookAroundAndSitGoal@@QEAA@AEAVMob@@_N1HHMMHHMH@Z
    MCAPI RandomLookAroundAndSitGoal(class Mob&, bool, bool, int, int, float, float, int, int, float, int);

    // NOLINTEND
};
