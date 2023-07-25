#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MultiplyValueAmplifier {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIPLYVALUEAMPLIFIER
public:
    MultiplyValueAmplifier& operator=(MultiplyValueAmplifier const&) = delete;
    MultiplyValueAmplifier(MultiplyValueAmplifier const&)            = delete;
    MultiplyValueAmplifier()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getAmount\@MultiplyValueAmplifier\@\@UEBAMHM\@Z
     */
    virtual float getAmount(int, float) const;
    /**
     * @symbol ??0MultiplyValueAmplifier\@\@QEAA\@M\@Z
     */
    MCAPI MultiplyValueAmplifier(float);
};
