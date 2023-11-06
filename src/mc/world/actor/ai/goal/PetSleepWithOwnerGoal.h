#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class PetSleepWithOwnerGoal : public ::Goal {
public:
    // prevent constructor by default
    PetSleepWithOwnerGoal& operator=(PetSleepWithOwnerGoal const&);
    PetSleepWithOwnerGoal(PetSleepWithOwnerGoal const&);
    PetSleepWithOwnerGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~PetSleepWithOwnerGoal();

    // vIndex: 1, symbol: ?canUse@PetSleepWithOwnerGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@PetSleepWithOwnerGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@PetSleepWithOwnerGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@PetSleepWithOwnerGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@PetSleepWithOwnerGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@PetSleepWithOwnerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0PetSleepWithOwnerGoal@@QEAA@AEAVMob@@MHHM@Z
    MCAPI PetSleepWithOwnerGoal(class Mob&, float, int, int, float);

    // symbol:
    // ?setState@PetSleepWithOwnerGoal@@QEAAXV?$unique_ptr@VPetSleepWithOwnerState@@U?$default_delete@VPetSleepWithOwnerState@@@std@@@std@@@Z
    MCAPI void setState(std::unique_ptr<class PetSleepWithOwnerState>);

    // NOLINTEND
};
