#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class VexCopyOwnerTargetGoal : public ::TargetGoal {

public:
    // prevent constructor by default
    VexCopyOwnerTargetGoal& operator=(VexCopyOwnerTargetGoal const&) = delete;
    VexCopyOwnerTargetGoal(VexCopyOwnerTargetGoal const&)            = delete;
    VexCopyOwnerTargetGoal()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@VexCopyOwnerTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 4
     * @symbol ?start\@VexCopyOwnerTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@VexCopyOwnerTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol
     * ??0VexCopyOwnerTargetGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI VexCopyOwnerTargetGoal(class Mob&, std::vector<struct MobDescriptor> const&);
    // NOLINTEND
};
