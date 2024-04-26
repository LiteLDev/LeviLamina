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
    // vIndex: 0, symbol: __gen_??1VolumeComponentFactory@@UEAA@XZ
    virtual ~VolumeComponentFactory() = default;

    // symbol: ?registerVolumeComponentDefinitions@VolumeComponentFactory@@QEAAX_N@Z
    MCAPI void registerVolumeComponentDefinitions(bool);

    // NOLINTEND
};
