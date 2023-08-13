#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

class BodyControl : public ::Control {

public:
    // prevent constructor by default
    BodyControl& operator=(BodyControl const&) = delete;
    BodyControl(BodyControl const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?clientTick\@BodyControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void clientTick(class Mob&);
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_allowUpdateBodyRotation\@BodyControl\@\@AEBA_NAEBVMob\@\@\@Z
     */
    MCAPI bool _allowUpdateBodyRotation(class Mob const&) const;
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?MAX_CLAMP_ANGLE\@BodyControl\@\@0MB
     */
    MCAPI static float const MAX_CLAMP_ANGLE;
    // NOLINTEND
};
