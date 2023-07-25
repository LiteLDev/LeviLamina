#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeComponentFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMECOMPONENTFACTORY
public:
    VolumeComponentFactory& operator=(VolumeComponentFactory const&) = delete;
    VolumeComponentFactory(VolumeComponentFactory const&)            = delete;
    VolumeComponentFactory()                                         = delete;
#endif

public:
    /**
     * @symbol ?registerVolumeComponentDefinitions\@VolumeComponentFactory\@\@QEAAX_N\@Z
     */
    MCAPI void registerVolumeComponentDefinitions(bool);
};
