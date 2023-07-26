#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RandomStrollGoal {

public:
    // prevent constructor by default
    RandomStrollGoal& operator=(RandomStrollGoal const&) = delete;
    RandomStrollGoal(RandomStrollGoal const&)            = delete;
    RandomStrollGoal()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomStrollGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomStrollGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@RandomBreachingGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@RandomStrollGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@RandomStrollGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@RandomStrollGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomStrollGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?_setWantedPosition\@RandomStrollGoal\@\@MEAA_NXZ
     */
    virtual bool _setWantedPosition(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMSTROLLGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RandomStrollGoal(); // NOLINT
#endif
    /**
     * @symbol ??0RandomStrollGoal\@\@QEAA\@AEAVMob\@\@MHHH\@Z
     */
    MCAPI RandomStrollGoal(class Mob&, float, int, int, int); // NOLINT
};
