#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityComponentFactoryCereal.h"

class VolumeComponentFactory : public ::EntityComponentFactoryCereal<::VolumeComponentFactory> {
public:
    // prevent constructor by default
    VolumeComponentFactory& operator=(VolumeComponentFactory const&);
    VolumeComponentFactory(VolumeComponentFactory const&);
    VolumeComponentFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VolumeComponentFactory() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
