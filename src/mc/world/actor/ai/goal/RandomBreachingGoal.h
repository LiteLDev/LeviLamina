#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class RandomBreachingGoal : public ::RandomStrollGoal {

public:
    // prevent constructor by default
    RandomBreachingGoal& operator=(RandomBreachingGoal const&) = delete;
    RandomBreachingGoal(RandomBreachingGoal const&)            = delete;
    RandomBreachingGoal()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomBreachingGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomBreachingGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol ?canBeInterrupted\@RandomBreachingGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl 4
     * @symbol ?start\@RandomBreachingGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RandomBreachingGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@RandomBreachingGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @vftbl 10
     * @symbol ?_setWantedPosition\@RandomBreachingGoal\@\@MEAA_NXZ
     */
    virtual bool _setWantedPosition();
    /**
     * @symbol ??0RandomBreachingGoal\@\@QEAA\@AEAVMob\@\@MHHHM\@Z
     */
    MCAPI RandomBreachingGoal(class Mob&, float, int, int, int, float);
    // NOLINTEND
};
