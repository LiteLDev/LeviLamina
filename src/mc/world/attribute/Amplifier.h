#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Amplifier {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMPLIFIER
public:
    Amplifier& operator=(Amplifier const&) = delete;
    Amplifier(Amplifier const&)            = delete;
    Amplifier()                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getAmount\@Amplifier\@\@UEBAMHM\@Z
     */
    virtual float getAmount(int, float) const;
    /**
     * @vftbl 2
     * @symbol ?shouldBuff\@Amplifier\@\@UEBA_NHH\@Z
     */
    virtual bool shouldBuff(int, int) const;
    /**
     * @vftbl 3
     * @symbol ?getTickInterval\@Amplifier\@\@UEBAHH\@Z
     */
    virtual int getTickInterval(int) const;
};
