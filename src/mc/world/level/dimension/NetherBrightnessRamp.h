#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionBrightnessRamp.h"

class NetherBrightnessRamp : public ::DimensionBrightnessRamp {

public:
    // prevent constructor by default
    NetherBrightnessRamp& operator=(NetherBrightnessRamp const&) = delete;
    NetherBrightnessRamp(NetherBrightnessRamp const&)            = delete;
    NetherBrightnessRamp()                                       = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
