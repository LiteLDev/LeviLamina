#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/FindCoverGoal.h"

class FleeSunGoal : public ::FindCoverGoal {
public:
    // prevent constructor by default
    FleeSunGoal& operator=(FleeSunGoal const&);
    FleeSunGoal(FleeSunGoal const&);
    FleeSunGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FleeSunGoal@@UEAA@XZ
    virtual ~FleeSunGoal() = default;

    // vIndex: 1, symbol: ?canUse@FleeSunGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@FleeSunGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol: ??0FleeSunGoal@@QEAA@AEAVMob@@M@Z
    MCAPI FleeSunGoal(class Mob& mob, float speed);

    // NOLINTEND
};
