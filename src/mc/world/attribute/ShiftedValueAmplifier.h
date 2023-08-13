#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/Amplifier.h"

class ShiftedValueAmplifier : public ::Amplifier {

public:
    // prevent constructor by default
    ShiftedValueAmplifier& operator=(ShiftedValueAmplifier const&) = delete;
    ShiftedValueAmplifier(ShiftedValueAmplifier const&)            = delete;
    ShiftedValueAmplifier()                                        = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
