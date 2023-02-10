/**
 * @file  RotateState.hpp
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
 * @brief MC class RotateState.
 *
 */
class RotateState : public PetSleepWithOwnerState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROTATESTATE
public:
    class RotateState& operator=(class RotateState const &) = delete;
    RotateState(class RotateState const &) = delete;
    RotateState() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RotateState();
    /**
     * @hash   1271745198
     * @vftbl  1
     * @symbol  ?tick\@RotateState\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -408737741
     * @vftbl  2
     * @symbol  ?start\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   989215827
     * @vftbl  3
     * @symbol  ?stop\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    virtual void stop();

};