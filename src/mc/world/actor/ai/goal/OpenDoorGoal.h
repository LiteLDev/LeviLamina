#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/DoorInteractGoal.h"

class OpenDoorGoal : public ::DoorInteractGoal {
public:
    // prevent constructor by default
    OpenDoorGoal& operator=(OpenDoorGoal const&);
    OpenDoorGoal(OpenDoorGoal const&);
    OpenDoorGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OpenDoorGoal@@UEAA@XZ
    virtual ~OpenDoorGoal() = default;

    // vIndex: 1, symbol: ?canUse@OpenDoorGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@OpenDoorGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@OpenDoorGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@OpenDoorGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@OpenDoorGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@OpenDoorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0OpenDoorGoal@@QEAA@AEAVMob@@_N@Z
    MCAPI OpenDoorGoal(class Mob& mob, bool closeDoorAfter);

    // NOLINTEND
};
