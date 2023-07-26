#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MultiplyValueAmplifier {

public:
    // prevent constructor by default
    MultiplyValueAmplifier& operator=(MultiplyValueAmplifier const&) = delete;
    MultiplyValueAmplifier(MultiplyValueAmplifier const&)            = delete;
    MultiplyValueAmplifier()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getAmount\@MultiplyValueAmplifier\@\@UEBAMHM\@Z
     */
    virtual float getAmount(int, float) const; // NOLINT
    /**
     * @symbol ??0MultiplyValueAmplifier\@\@QEAA\@M\@Z
     */
    MCAPI MultiplyValueAmplifier(float); // NOLINT
};
