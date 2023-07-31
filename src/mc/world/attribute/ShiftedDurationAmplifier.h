#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShiftedDurationAmplifier {

public:
    // prevent constructor by default
    ShiftedDurationAmplifier& operator=(ShiftedDurationAmplifier const&) = delete;
    ShiftedDurationAmplifier(ShiftedDurationAmplifier const&)            = delete;
    ShiftedDurationAmplifier()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?shouldBuff\@ShiftedDurationAmplifier\@\@UEBA_NHH\@Z
     */
    virtual bool shouldBuff(int, int) const;
    /**
     * @vftbl 3
     * @symbol ?getTickInterval\@ShiftedDurationAmplifier\@\@UEBAHH\@Z
     */
    virtual int getTickInterval(int) const;
    /**
     * @symbol ??0ShiftedDurationAmplifier\@\@QEAA\@H\@Z
     */
    MCAPI ShiftedDurationAmplifier(int);
    // NOLINTEND
};
