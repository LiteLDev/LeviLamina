#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionBrightnessRamp {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONBRIGHTNESSRAMP
public:
    DimensionBrightnessRamp& operator=(DimensionBrightnessRamp const&) = delete;
    DimensionBrightnessRamp(DimensionBrightnessRamp const&)            = delete;
    DimensionBrightnessRamp()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?buildBrightnessRamp\@DimensionBrightnessRamp\@\@UEAAXXZ
     */
    virtual void buildBrightnessRamp();
    /**
     * @vftbl 2
     * @symbol ?getBaseAmbientValue\@DimensionBrightnessRamp\@\@UEBAMXZ
     */
    virtual float getBaseAmbientValue() const;
    /**
     * @symbol ?getBrightnessRampValue\@DimensionBrightnessRamp\@\@QEBAMH\@Z
     */
    MCAPI float getBrightnessRampValue(int) const;
};
