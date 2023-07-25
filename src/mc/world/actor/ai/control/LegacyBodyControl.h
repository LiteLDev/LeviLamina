#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyBodyControl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYBODYCONTROL
public:
    LegacyBodyControl& operator=(LegacyBodyControl const&) = delete;
    LegacyBodyControl(LegacyBodyControl const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?clientTick\@LegacyBodyControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void clientTick(class Mob&);
    /**
     * @symbol ??0LegacyBodyControl\@\@QEAA\@XZ
     */
    MCAPI LegacyBodyControl();
};
