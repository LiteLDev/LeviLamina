#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class LeapAtTargetGoal : public ::Goal {

public:
    // prevent constructor by default
    LeapAtTargetGoal& operator=(LeapAtTargetGoal const&) = delete;
    LeapAtTargetGoal(LeapAtTargetGoal const&)            = delete;
    LeapAtTargetGoal()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@LeapAtTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@LeapAtTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@LeapAtTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@LeapAtTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0LeapAtTargetGoal\@\@QEAA\@AEAVMob\@\@M_N1\@Z
     */
    MCAPI LeapAtTargetGoal(class Mob&, float, bool, bool);
    // NOLINTEND
};
