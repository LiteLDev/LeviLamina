#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class HurtByTargetGoal : public ::TargetGoal {

public:
    // prevent constructor by default
    HurtByTargetGoal& operator=(HurtByTargetGoal const&) = delete;
    HurtByTargetGoal(HurtByTargetGoal const&)            = delete;
    HurtByTargetGoal()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@HurtByTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 4
     * @symbol ?start\@HurtByTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@HurtByTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 11
     * @symbol ?alertOther\@HurtByTargetGoal\@\@MEAAXPEAVMob\@\@0\@Z
     */
    virtual void alertOther(class Mob*, class Mob*);
    /**
     * @symbol
     * ??0HurtByTargetGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI HurtByTargetGoal(class Mob&, std::vector<struct MobDescriptor> const&, bool);
    // NOLINTEND
};
