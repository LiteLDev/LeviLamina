#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ShulkerPeekGoal : public ::Goal {
public:
    // prevent constructor by default
    ShulkerPeekGoal& operator=(ShulkerPeekGoal const&);
    ShulkerPeekGoal(ShulkerPeekGoal const&);
    ShulkerPeekGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShulkerPeekGoal@@UEAA@XZ
    virtual ~ShulkerPeekGoal() = default;

    // vIndex: 1, symbol: ?canUse@ShulkerPeekGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@ShulkerPeekGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@ShulkerPeekGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@ShulkerPeekGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@ShulkerPeekGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@ShulkerPeekGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0ShulkerPeekGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit ShulkerPeekGoal(class Mob& Mob);

    // NOLINTEND
};
