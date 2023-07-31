#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/LookAtActorGoal.h"

class LookAtTradingPlayerGoal : public ::LookAtActorGoal {

public:
    // prevent constructor by default
    LookAtTradingPlayerGoal& operator=(LookAtTradingPlayerGoal const&) = delete;
    LookAtTradingPlayerGoal(LookAtTradingPlayerGoal const&)            = delete;
    LookAtTradingPlayerGoal()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@LookAtTradingPlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@LookAtTradingPlayerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@LookAtTradingPlayerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0LookAtTradingPlayerGoal\@\@QEAA\@AEAVMob\@\@MMHHHH\@Z
     */
    MCAPI LookAtTradingPlayerGoal(class Mob&, float, float, int, int, int, int);
    // NOLINTEND
};
