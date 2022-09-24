/**
 * @file  BodyControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BodyControl.
 *
 */
class BodyControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BODYCONTROL
public:
    class BodyControl& operator=(class BodyControl const &) = delete;
    BodyControl(class BodyControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BodyControl();
    /**
     * @hash   -1112512648
     * @vftbl  1
     * @symbol ?clientTick@BodyControl@@UEAAXAEAVMob@@@Z
     */
    virtual void clientTick(class Mob &);
    /**
     * @hash   -1879707049
     * @symbol ??0BodyControl@@QEAA@XZ
     */
    MCAPI BodyControl();

//private:

private:
    /**
     * @hash   1535724716
     * @symbol ?MAX_CLAMP_ANGLE@BodyControl@@0MB
     */
    MCAPI static float const MAX_CLAMP_ANGLE;

};