#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityComponentFactoryCereal.h"

class VolumeComponentFactory : public ::EntityComponentFactoryCereal {

public:
    // prevent constructor by default
    VolumeComponentFactory& operator=(VolumeComponentFactory const&) = delete;
    VolumeComponentFactory(VolumeComponentFactory const&)            = delete;
    VolumeComponentFactory()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?registerVolumeComponentDefinitions\@VolumeComponentFactory\@\@QEAAX_N\@Z
     */
    MCAPI void registerVolumeComponentDefinitions(bool);
    // NOLINTEND
};
