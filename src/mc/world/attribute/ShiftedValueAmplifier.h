#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShiftedValueAmplifier {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIFTEDVALUEAMPLIFIER
public:
    ShiftedValueAmplifier& operator=(ShiftedValueAmplifier const&) = delete;
    ShiftedValueAmplifier(ShiftedValueAmplifier const&)            = delete;
    ShiftedValueAmplifier()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getAmount\@ShiftedValueAmplifier\@\@UEBAMHM\@Z
     */
    virtual float getAmount(int, float) const;
    /**
     * @symbol ??0ShiftedValueAmplifier\@\@QEAA\@HM\@Z
     */
    MCAPI ShiftedValueAmplifier(int, float);
};
