#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BodyControl {

public:
    // prevent constructor by default
    BodyControl& operator=(BodyControl const&) = delete;
    BodyControl(BodyControl const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?clientTick\@BodyControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void clientTick(class Mob&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BODYCONTROL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BodyControl(); // NOLINT
#endif
    /**
     * @symbol ??0BodyControl\@\@QEAA\@XZ
     */
    MCAPI BodyControl(); // NOLINT

    // private:
    /**
     * @symbol ?_allowUpdateBodyRotation\@BodyControl\@\@AEBA_NAEBVMob\@\@\@Z
     */
    MCAPI bool _allowUpdateBodyRotation(class Mob const&) const; // NOLINT

private:
    /**
     * @symbol ?MAX_CLAMP_ANGLE\@BodyControl\@\@0MB
     */
    MCAPI static float const MAX_CLAMP_ANGLE; // NOLINT
};
