/**
 * @file  MC/IdleState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PetSleepWithOwnerState.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IdleState.
 *
 */
class IdleState : public PetSleepWithOwnerState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDLESTATE
public:
    class IdleState& operator=(class IdleState const &) = delete;
    IdleState(class IdleState const &) = delete;
    IdleState() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~IdleState();
    /**
     * @hash   1950966183
     * @vftbl  1
     * @symbol ?tick@IdleState@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -426058116
     * @vftbl  2
     * @symbol ?start@IdleState@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1830665188
     * @vftbl  3
     * @symbol ?stop@PetSleepWithOwnerState@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1077772079
     * @symbol ?create@IdleState@@SA?AV?$unique_ptr@VIdleState@@U?$default_delete@VIdleState@@@std@@@std@@AEAVPetSleepWithOwnerGoal@@@Z
     */
    MCAPI static std::unique_ptr<class IdleState> create(class PetSleepWithOwnerGoal &);

};