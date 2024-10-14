#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeCreationDataComponent {
public:
    // prevent constructor by default
    VolumeCreationDataComponent& operator=(VolumeCreationDataComponent const&);
    VolumeCreationDataComponent(VolumeCreationDataComponent const&);
    VolumeCreationDataComponent();

public:
    // NOLINTBEGIN
    MCAPI ~VolumeCreationDataComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
