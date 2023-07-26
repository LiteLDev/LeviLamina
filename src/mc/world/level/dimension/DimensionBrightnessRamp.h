#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionBrightnessRamp {

public:
    // prevent constructor by default
    DimensionBrightnessRamp& operator=(DimensionBrightnessRamp const&) = delete;
    DimensionBrightnessRamp(DimensionBrightnessRamp const&)            = delete;
    DimensionBrightnessRamp()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?buildBrightnessRamp\@DimensionBrightnessRamp\@\@UEAAXXZ
     */
    virtual void buildBrightnessRamp(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getBaseAmbientValue\@DimensionBrightnessRamp\@\@UEBAMXZ
     */
    virtual float getBaseAmbientValue() const; // NOLINT
    /**
     * @symbol ?getBrightnessRampValue\@DimensionBrightnessRamp\@\@QEBAMH\@Z
     */
    MCAPI float getBrightnessRampValue(int) const; // NOLINT
};
