#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/target/TargetGoal.h"

class DefendVillageTargetGoal : public ::TargetGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFENDVILLAGETARGETGOAL
public:
    DefendVillageTargetGoal& operator=(DefendVillageTargetGoal const&) = delete;
    DefendVillageTargetGoal(DefendVillageTargetGoal const&)            = delete;
    DefendVillageTargetGoal()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@DefendVillageTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DefendVillageTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@DefendVillageTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DefendVillageTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @symbol ??0DefendVillageTargetGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI DefendVillageTargetGoal(class Mob&);
};
