#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class DragonLandingGoal : public ::Goal {
public:
    // prevent constructor by default
    DragonLandingGoal& operator=(DragonLandingGoal const&);
    DragonLandingGoal(DragonLandingGoal const&);
    DragonLandingGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DragonLandingGoal@@UEAA@XZ
    virtual ~DragonLandingGoal() = default;

    // vIndex: 1, symbol: ?canUse@DragonLandingGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DragonLandingGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DragonLandingGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DragonLandingGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DragonLandingGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@DragonLandingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0DragonLandingGoal@@QEAA@AEAVEnderDragon@@@Z
    MCAPI explicit DragonLandingGoal(class EnderDragon& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?findNewTarget@DragonLandingGoal@@AEAAXXZ
    MCAPI void findNewTarget();

    // NOLINTEND
};
