/**
 * @file  RisingGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseTimedActorFlagGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RisingGoal : public BaseTimedActorFlagGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RISINGGOAL
public:
    class RisingGoal& operator=(class RisingGoal const &) = delete;
    RisingGoal(class RisingGoal const &) = delete;
    RisingGoal() = delete;
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
     * @symbol ??0RisingGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RisingGoal(class Mob &);

};
