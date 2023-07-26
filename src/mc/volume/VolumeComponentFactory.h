#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeComponentFactory {

public:
    // prevent constructor by default
    VolumeComponentFactory& operator=(VolumeComponentFactory const&) = delete;
    VolumeComponentFactory(VolumeComponentFactory const&)            = delete;
    VolumeComponentFactory()                                         = delete;

public:
    /**
     * @symbol ?registerVolumeComponentDefinitions\@VolumeComponentFactory\@\@QEAAX_N\@Z
     */
    MCAPI void registerVolumeComponentDefinitions(bool); // NOLINT
};
