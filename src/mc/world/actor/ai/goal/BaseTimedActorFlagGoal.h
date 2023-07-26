#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseTimedActorFlagGoal {

public:
    // prevent constructor by default
    BaseTimedActorFlagGoal& operator=(BaseTimedActorFlagGoal const&) = delete;
    BaseTimedActorFlagGoal(BaseTimedActorFlagGoal const&)            = delete;
    BaseTimedActorFlagGoal()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@BaseTimedActorFlagGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@BaseTimedActorFlagGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@BaseTimedActorFlagGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@BaseTimedActorFlagGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@BaseTimedActorFlagGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@BaseTimedActorFlagGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASETIMEDACTORFLAGGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseTimedActorFlagGoal(); // NOLINT
#endif
    /**
     * @symbol ??0BaseTimedActorFlagGoal\@\@QEAA\@AEAVMob\@\@W4ActorFlags\@\@\@Z
     */
    MCAPI BaseTimedActorFlagGoal(class Mob&, enum class ActorFlags); // NOLINT
};
