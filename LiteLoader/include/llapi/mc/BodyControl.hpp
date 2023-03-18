/**
 * @file  BodyControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?clientTick\@BodyControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void clientTick(class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BODYCONTROL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BodyControl();
#endif
    /**
     * @symbol ??0BodyControl\@\@QEAA\@XZ
     */
    MCAPI BodyControl();

//private:
    /**
     * @symbol ?_allowUpdateBodyRotation\@BodyControl\@\@AEBA_NAEBVMob\@\@\@Z
     */
    MCAPI bool _allowUpdateBodyRotation(class Mob const &) const;

private:
    /**
     * @symbol ?MAX_CLAMP_ANGLE\@BodyControl\@\@0MB
     */
    MCAPI static float const MAX_CLAMP_ANGLE;

};
