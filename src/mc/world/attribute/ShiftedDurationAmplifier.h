#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShiftedDurationAmplifier {

public:
    // prevent constructor by default
    ShiftedDurationAmplifier& operator=(ShiftedDurationAmplifier const&) = delete;
    ShiftedDurationAmplifier(ShiftedDurationAmplifier const&)            = delete;
    ShiftedDurationAmplifier()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?shouldBuff\@ShiftedDurationAmplifier\@\@UEBA_NHH\@Z
     */
    virtual bool shouldBuff(int, int) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getTickInterval\@ShiftedDurationAmplifier\@\@UEBAHH\@Z
     */
    virtual int getTickInterval(int) const; // NOLINT
    /**
     * @symbol ??0ShiftedDurationAmplifier\@\@QEAA\@H\@Z
     */
    MCAPI ShiftedDurationAmplifier(int); // NOLINT
};
