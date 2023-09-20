/**
 * @file  SleepState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "PetSleepWithOwnerState.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SleepState.
 *
 */
class SleepState : public PetSleepWithOwnerState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLEEPSTATE
public:
    class SleepState& operator=(class SleepState const &) = delete;
    SleepState(class SleepState const &) = delete;
    SleepState() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?stop\@SleepState\@\@UEAAXXZ
     */
    virtual void stop();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLEEPSTATE
    /**
     * @symbol ?tick\@SleepState\@\@UEAAXXZ
     */
    MCVAPI void tick();
#endif

};
