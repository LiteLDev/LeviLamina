#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/DoorInteractGoal.h"

class BreakDoorGoal : public ::DoorInteractGoal {
public:
    // prevent constructor by default
    BreakDoorGoal& operator=(BreakDoorGoal const&);
    BreakDoorGoal(BreakDoorGoal const&);
    BreakDoorGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BreakDoorGoal@@UEAA@XZ
    virtual ~BreakDoorGoal() = default;

    // vIndex: 1, symbol: ?canUse@BreakDoorGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@BreakDoorGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@BreakDoorGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@BreakDoorGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@BreakDoorGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@BreakDoorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0BreakDoorGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit BreakDoorGoal(class Mob& mob);

    // NOLINTEND
};
