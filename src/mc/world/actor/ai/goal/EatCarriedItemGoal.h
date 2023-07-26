#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EatCarriedItemGoal {

public:
    // prevent constructor by default
    EatCarriedItemGoal& operator=(EatCarriedItemGoal const&) = delete;
    EatCarriedItemGoal(EatCarriedItemGoal const&)            = delete;
    EatCarriedItemGoal()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@EatCarriedItemGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@EatCarriedItemGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@EatCarriedItemGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@EatCarriedItemGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@EatCarriedItemGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@EatCarriedItemGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0EatCarriedItemGoal\@\@QEAA\@AEAVMob\@\@H\@Z
     */
    MCAPI EatCarriedItemGoal(class Mob&, int); // NOLINT

    // private:

private:
    /**
     * @symbol ?CHEW_CHANCE\@EatCarriedItemGoal\@\@0HB
     */
    MCAPI static int const CHEW_CHANCE; // NOLINT
    /**
     * @symbol ?EATING_TIME\@EatCarriedItemGoal\@\@0HB
     */
    MCAPI static int const EATING_TIME; // NOLINT
};
