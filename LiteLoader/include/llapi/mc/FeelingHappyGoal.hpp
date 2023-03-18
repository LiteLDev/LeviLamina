/**
 * @file  FeelingHappyGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseTimedActorFlagGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class FeelingHappyGoal : public BaseTimedActorFlagGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEELINGHAPPYGOAL
public:
    class FeelingHappyGoal& operator=(class FeelingHappyGoal const &) = delete;
    FeelingHappyGoal(class FeelingHappyGoal const &) = delete;
    FeelingHappyGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @symbol ??0FeelingHappyGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI FeelingHappyGoal(class Mob &);

};
