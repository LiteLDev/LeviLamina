#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class HurtByTargetGoal : public ::TargetGoal {
public:
    // prevent constructor by default
    HurtByTargetGoal& operator=(HurtByTargetGoal const&);
    HurtByTargetGoal(HurtByTargetGoal const&);
    HurtByTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HurtByTargetGoal@@UEAA@XZ
    virtual ~HurtByTargetGoal() = default;

    // vIndex: 1, symbol: ?canUse@HurtByTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@HurtByTargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@HurtByTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11, symbol: ?alertOther@HurtByTargetGoal@@MEAAXPEAVMob@@0@Z
    virtual void alertOther(class Mob* other, class Mob* hurtByMob);

    // symbol:
    // ??0HurtByTargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@_N@Z
    MCAPI HurtByTargetGoal(class Mob& mob, std::vector<struct MobDescriptor> const& targetTypes, bool hurtOwner);

    // NOLINTEND
};
