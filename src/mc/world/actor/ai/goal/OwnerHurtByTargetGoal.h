#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class OwnerHurtByTargetGoal : public ::TargetGoal {

public:
    // prevent constructor by default
    OwnerHurtByTargetGoal& operator=(OwnerHurtByTargetGoal const&) = delete;
    OwnerHurtByTargetGoal(OwnerHurtByTargetGoal const&)            = delete;
    OwnerHurtByTargetGoal()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@OwnerHurtByTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 4
     * @symbol ?start\@OwnerHurtByTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @symbol
     * ??0OwnerHurtByTargetGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI OwnerHurtByTargetGoal(class Mob&, std::vector<struct MobDescriptor> const&);
    // NOLINTEND
};
