#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class SwellGoal : public ::Goal {
public:
    // prevent constructor by default
    SwellGoal& operator=(SwellGoal const&);
    SwellGoal(SwellGoal const&);
    SwellGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SwellGoal@@UEAA@XZ
    virtual ~SwellGoal() = default;

    // vIndex: 1, symbol: ?canUse@SwellGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@SwellGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@SwellGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@SwellGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@SwellGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0SwellGoal@@QEAA@PEAVCreeper@@MM@Z
    MCAPI SwellGoal(class Creeper* creeper, float startSwellDist, float stopSwellDist);

    // NOLINTEND
};
