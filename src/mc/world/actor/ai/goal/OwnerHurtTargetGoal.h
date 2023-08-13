#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class OwnerHurtTargetGoal : public ::TargetGoal {

public:
    // prevent constructor by default
    OwnerHurtTargetGoal& operator=(OwnerHurtTargetGoal const&) = delete;
    OwnerHurtTargetGoal(OwnerHurtTargetGoal const&)            = delete;
    OwnerHurtTargetGoal()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@OwnerHurtTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 4
     * @symbol ?start\@OwnerHurtTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @symbol
     * ??0OwnerHurtTargetGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI OwnerHurtTargetGoal(class Mob&, std::vector<struct MobDescriptor> const&);
    // NOLINTEND
};
