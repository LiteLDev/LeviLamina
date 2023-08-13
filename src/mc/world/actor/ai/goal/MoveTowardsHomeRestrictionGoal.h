#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveTowardsRestrictionGoal.h"

class MoveTowardsHomeRestrictionGoal : public ::MoveTowardsRestrictionGoal {

public:
    // prevent constructor by default
    MoveTowardsHomeRestrictionGoal& operator=(MoveTowardsHomeRestrictionGoal const&) = delete;
    MoveTowardsHomeRestrictionGoal(MoveTowardsHomeRestrictionGoal const&)            = delete;
    MoveTowardsHomeRestrictionGoal()                                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@MoveTowardsHomeRestrictionGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@MoveTowardsHomeRestrictionGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0MoveTowardsHomeRestrictionGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI MoveTowardsHomeRestrictionGoal(class Mob&);
    // NOLINTEND
};
