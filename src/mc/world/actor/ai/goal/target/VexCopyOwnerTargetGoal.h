#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class VexCopyOwnerTargetGoal : public ::TargetGoal {
public:
    // prevent constructor by default
    VexCopyOwnerTargetGoal& operator=(VexCopyOwnerTargetGoal const&);
    VexCopyOwnerTargetGoal(VexCopyOwnerTargetGoal const&);
    VexCopyOwnerTargetGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~VexCopyOwnerTargetGoal() = default;

    // vIndex: 1, symbol: ?canUse@VexCopyOwnerTargetGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 4, symbol: ?start@VexCopyOwnerTargetGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@VexCopyOwnerTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string&) const;

    // symbol:
    // ??0VexCopyOwnerTargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@@Z
    MCAPI VexCopyOwnerTargetGoal(class Mob&, std::vector<struct MobDescriptor> const&);

    // NOLINTEND
};
