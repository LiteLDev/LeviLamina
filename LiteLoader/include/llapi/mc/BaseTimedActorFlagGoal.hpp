/**
 * @file  BaseTimedActorFlagGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BaseTimedActorFlagGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASETIMEDACTORFLAGGOAL
public:
    class BaseTimedActorFlagGoal& operator=(class BaseTimedActorFlagGoal const &) = delete;
    BaseTimedActorFlagGoal(class BaseTimedActorFlagGoal const &) = delete;
    BaseTimedActorFlagGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@BaseTimedActorFlagGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@BaseTimedActorFlagGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@BaseTimedActorFlagGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@BaseTimedActorFlagGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@BaseTimedActorFlagGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@BaseTimedActorFlagGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASETIMEDACTORFLAGGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseTimedActorFlagGoal();
#endif
    /**
     * @symbol ??0BaseTimedActorFlagGoal\@\@QEAA\@AEAVMob\@\@W4ActorFlags\@\@\@Z
     */
    MCAPI BaseTimedActorFlagGoal(class Mob &, enum class ActorFlags);

};
