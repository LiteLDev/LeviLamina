#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeComponentFactory {
public:
    // prevent constructor by default
    VolumeComponentFactory& operator=(VolumeComponentFactory const&);
    VolumeComponentFactory(VolumeComponentFactory const&);
    VolumeComponentFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VolumeComponentFactory() = default;

    MCAPI void registerVolumeComponentDefinitions(bool);

    // NOLINTEND
};
