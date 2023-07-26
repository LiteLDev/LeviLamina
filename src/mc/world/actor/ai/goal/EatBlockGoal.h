#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EatBlockGoal {

public:
    // prevent constructor by default
    EatBlockGoal& operator=(EatBlockGoal const&) = delete;
    EatBlockGoal(EatBlockGoal const&)            = delete;
    EatBlockGoal()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@EatBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@EatBlockGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@EatBlockGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@EatBlockGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@EatBlockGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@EatBlockGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0EatBlockGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI EatBlockGoal(class Mob&); // NOLINT
    /**
     * @symbol ?getEatSuccessChance\@EatBlockGoal\@\@QEBAMAEAVActor\@\@\@Z
     */
    MCAPI float getEatSuccessChance(class Actor&) const; // NOLINT
};
