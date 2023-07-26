#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyBodyControl {

public:
    // prevent constructor by default
    LegacyBodyControl& operator=(LegacyBodyControl const&) = delete;
    LegacyBodyControl(LegacyBodyControl const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?clientTick\@LegacyBodyControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void clientTick(class Mob&); // NOLINT
    /**
     * @symbol ??0LegacyBodyControl\@\@QEAA\@XZ
     */
    MCAPI LegacyBodyControl(); // NOLINT
};
