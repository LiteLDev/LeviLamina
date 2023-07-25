#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveTowardsTargetGoal {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSTARGETGOAL
public:
    MoveTowardsTargetGoal& operator=(MoveTowardsTargetGoal const&) = delete;
    MoveTowardsTargetGoal(MoveTowardsTargetGoal const&)            = delete;
    MoveTowardsTargetGoal()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveTowardsTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@MoveTowardsTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@MoveTowardsTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@MoveTowardsTargetGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveTowardsTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0MoveTowardsTargetGoal\@\@QEAA\@AEAVMob\@\@MM\@Z
     */
    MCAPI MoveTowardsTargetGoal(class Mob&, float, float);
};
