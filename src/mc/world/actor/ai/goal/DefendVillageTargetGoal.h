#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class DefendVillageTargetGoal : public ::TargetGoal {
public:
    // prevent constructor by default
    DefendVillageTargetGoal& operator=(DefendVillageTargetGoal const&) = delete;
    DefendVillageTargetGoal(DefendVillageTargetGoal const&)            = delete;
    DefendVillageTargetGoal()                                          = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@DefendVillageTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DefendVillageTargetGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DefendVillageTargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@DefendVillageTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol: ??0DefendVillageTargetGoal@@QEAA@AEAVMob@@@Z
    MCAPI DefendVillageTargetGoal(class Mob&);

    // NOLINTEND
};
