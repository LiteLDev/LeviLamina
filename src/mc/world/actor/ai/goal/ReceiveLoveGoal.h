#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ReceiveLoveGoal : public ::Goal {

public:
    // prevent constructor by default
    ReceiveLoveGoal& operator=(ReceiveLoveGoal const&) = delete;
    ReceiveLoveGoal(ReceiveLoveGoal const&)            = delete;
    ReceiveLoveGoal()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@ReceiveLoveGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@ReceiveLoveGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 6
     * @symbol ?tick\@ReceiveLoveGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@ReceiveLoveGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0ReceiveLoveGoal\@\@QEAA\@AEAVVillagerBase\@\@\@Z
     */
    MCAPI ReceiveLoveGoal(class VillagerBase&);
    // NOLINTEND
};
