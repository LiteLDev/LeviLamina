#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RestrictSunGoal : public ::Goal {
public:
    // prevent constructor by default
    RestrictSunGoal& operator=(RestrictSunGoal const&);
    RestrictSunGoal(RestrictSunGoal const&);
    RestrictSunGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~RestrictSunGoal();

    // vIndex: 1, symbol: ?canUse@RestrictSunGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@RestrictSunGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RestrictSunGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RestrictSunGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0RestrictSunGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit RestrictSunGoal(class Mob&);

    // NOLINTEND
};
