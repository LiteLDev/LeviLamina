#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class RandomSwimmingGoal : public ::RandomStrollGoal {
public:
    // prevent constructor by default
    RandomSwimmingGoal& operator=(RandomSwimmingGoal const&);
    RandomSwimmingGoal(RandomSwimmingGoal const&);
    RandomSwimmingGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RandomSwimmingGoal@@UEAA@XZ
    virtual ~RandomSwimmingGoal() = default;

    // vIndex: 1, symbol: ?canUse@RandomSwimmingGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RandomSwimmingGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RandomSwimmingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 10, symbol: ?_setWantedPosition@RandomSwimmingGoal@@MEAA_NXZ
    virtual bool _setWantedPosition();

    // symbol: ??0RandomSwimmingGoal@@QEAA@AEAVMob@@MHHH_N@Z
    MCAPI RandomSwimmingGoal(class Mob& mob, float speed, int xzDist, int yDist, int interval, bool);

    // NOLINTEND
};
