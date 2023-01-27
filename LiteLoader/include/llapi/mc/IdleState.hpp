/**
 * @file  IdleState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../PetSleepWithOwnerState.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~IdleState();
    /**
     * @hash   2042853159
     * @vftbl  1
     * @symbol  ?tick\@IdleState\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -175275556
     * @vftbl  2
     * @symbol  ?start\@IdleState\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1579867252
     * @vftbl  3
     * @symbol  ?stop\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -826989519
     * @symbol  ?create\@IdleState\@\@SA?AV?$unique_ptr\@VIdleState\@\@U?$default_delete\@VIdleState\@\@\@std\@\@\@std\@\@AEAVPetSleepWithOwnerGoal\@\@\@Z
     */
    MCAPI static std::unique_ptr<class IdleState> create(class PetSleepWithOwnerGoal &);

};