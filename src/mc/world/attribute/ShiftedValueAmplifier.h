#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShiftedValueAmplifier {

public:
    // prevent constructor by default
    ShiftedValueAmplifier& operator=(ShiftedValueAmplifier const&) = delete;
    ShiftedValueAmplifier(ShiftedValueAmplifier const&)            = delete;
    ShiftedValueAmplifier()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getAmount\@ShiftedValueAmplifier\@\@UEBAMHM\@Z
     */
    virtual float getAmount(int, float) const; // NOLINT
    /**
     * @symbol ??0ShiftedValueAmplifier\@\@QEAA\@HM\@Z
     */
    MCAPI ShiftedValueAmplifier(int, float); // NOLINT
};
