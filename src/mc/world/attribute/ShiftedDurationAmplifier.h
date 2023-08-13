#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/Amplifier.h"

class ShiftedDurationAmplifier : public ::Amplifier {

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
