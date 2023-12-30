#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SwoopAttackGoal : public ::Goal {
public:
    // prevent constructor by default
    SwoopAttackGoal& operator=(SwoopAttackGoal const&);
    SwoopAttackGoal(SwoopAttackGoal const&);
    SwoopAttackGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SwoopAttackGoal@@UEAA@XZ
    virtual ~SwoopAttackGoal() = default;

    // vIndex: 1, symbol: ?canUse@SwoopAttackGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SwoopAttackGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SwoopAttackGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SwoopAttackGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SwoopAttackGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SwoopAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // NOLINTEND
};
