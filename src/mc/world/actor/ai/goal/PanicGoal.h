#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PanicGoal {

public:
    // prevent constructor by default
    PanicGoal& operator=(PanicGoal const&) = delete;
    PanicGoal(PanicGoal const&)            = delete;
    PanicGoal()                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@PanicGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@PanicGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@PanicGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@PanicGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@PanicGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@PanicGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PANICGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PanicGoal(); // NOLINT
#endif
    /**
     * @symbol
     * ??0PanicGoal\@\@QEAA\@AEAVMob\@\@M_NW4LevelSoundEvent\@\@UFloatRange\@\@11V?$vector\@W4ActorDamageCause\@\@V?$allocator\@W4ActorDamageCause\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI
    PanicGoal(class Mob&, float, bool, enum class LevelSoundEvent, struct FloatRange, bool, bool, std::vector<enum class ActorDamageCause>); // NOLINT

    // private:
    /**
     * @symbol ?_tryGeneratePathEnd\@PanicGoal\@\@AEAA_NXZ
     */
    MCAPI bool _tryGeneratePathEnd(); // NOLINT

private:
};
