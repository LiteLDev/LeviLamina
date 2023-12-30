#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class OwnerHurtByTargetGoal : public ::TargetGoal {
public:
    // prevent constructor by default
    OwnerHurtByTargetGoal& operator=(OwnerHurtByTargetGoal const&);
    OwnerHurtByTargetGoal(OwnerHurtByTargetGoal const&);
    OwnerHurtByTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OwnerHurtByTargetGoal@@UEAA@XZ
    virtual ~OwnerHurtByTargetGoal() = default;

    // vIndex: 1, symbol: ?canUse@OwnerHurtByTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@OwnerHurtByTargetGoal@@UEAAXXZ
    virtual void start();

    // symbol:
    // ??0OwnerHurtByTargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@@Z
    MCAPI OwnerHurtByTargetGoal(class Mob& mob, std::vector<struct MobDescriptor> const& targetTypes);

    // NOLINTEND
};
