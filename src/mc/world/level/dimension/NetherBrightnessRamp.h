#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionBrightnessRamp.h"

class NetherBrightnessRamp : public ::DimensionBrightnessRamp {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERBRIGHTNESSRAMP
public:
    NetherBrightnessRamp& operator=(NetherBrightnessRamp const&) = delete;
    NetherBrightnessRamp(NetherBrightnessRamp const&)            = delete;
    NetherBrightnessRamp()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getBaseAmbientValue\@NetherBrightnessRamp\@\@UEBAMXZ
     */
    virtual float getBaseAmbientValue() const;
};
