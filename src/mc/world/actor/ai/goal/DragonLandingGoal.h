#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class DragonLandingGoal : public ::Goal {
public:
    // prevent constructor by default
    DragonLandingGoal& operator=(DragonLandingGoal const&) = delete;
    DragonLandingGoal(DragonLandingGoal const&)            = delete;
    DragonLandingGoal()                                    = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

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
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0DragonLandingGoal@@QEAA@AEAVEnderDragon@@@Z
    MCAPI DragonLandingGoal(class EnderDragon&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?findNewTarget@DragonLandingGoal@@AEAAXXZ
    MCAPI void findNewTarget();

    // NOLINTEND
};
