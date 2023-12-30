#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ControlledByPlayerGoal : public ::Goal {
public:
    // prevent constructor by default
    ControlledByPlayerGoal& operator=(ControlledByPlayerGoal const&);
    ControlledByPlayerGoal(ControlledByPlayerGoal const&);
    ControlledByPlayerGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ControlledByPlayerGoal@@UEAA@XZ
    virtual ~ControlledByPlayerGoal() = default;

    // vIndex: 1, symbol: ?canUse@ControlledByPlayerGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@ControlledByPlayerGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@ControlledByPlayerGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@ControlledByPlayerGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@ControlledByPlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0ControlledByPlayerGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit ControlledByPlayerGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canBeControlledByPassenger@ControlledByPlayerGoal@@AEAA_NXZ
    MCAPI bool _canBeControlledByPassenger();

    // NOLINTEND
};
