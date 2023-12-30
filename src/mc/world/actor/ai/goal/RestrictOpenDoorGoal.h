#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class RestrictOpenDoorGoal : public ::Goal {
public:
    // prevent constructor by default
    RestrictOpenDoorGoal& operator=(RestrictOpenDoorGoal const&);
    RestrictOpenDoorGoal(RestrictOpenDoorGoal const&);
    RestrictOpenDoorGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RestrictOpenDoorGoal@@UEAA@XZ
    virtual ~RestrictOpenDoorGoal() = default;

    // vIndex: 1, symbol: ?canUse@RestrictOpenDoorGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@RestrictOpenDoorGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@RestrictOpenDoorGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@RestrictOpenDoorGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@RestrictOpenDoorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0RestrictOpenDoorGoal@@QEAA@AEAVMob@@@Z
    MCAPI explicit RestrictOpenDoorGoal(class Mob& mob);

    // NOLINTEND
};
