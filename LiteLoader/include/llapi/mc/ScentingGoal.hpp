/**
 * @file  ScentingGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseTimedActorFlagGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ScentingGoal : public BaseTimedActorFlagGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCENTINGGOAL
public:
    class ScentingGoal& operator=(class ScentingGoal const &) = delete;
    ScentingGoal(class ScentingGoal const &) = delete;
    ScentingGoal() = delete;
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
     * @symbol ??0ScentingGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI ScentingGoal(class Mob &);

};
