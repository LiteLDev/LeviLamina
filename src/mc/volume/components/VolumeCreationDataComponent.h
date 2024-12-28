#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeCreationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb8d4b0;
    ::ll::UntypedStorage<8, 32> mUnke52964;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeCreationDataComponent& operator=(VolumeCreationDataComponent const&);
    VolumeCreationDataComponent(VolumeCreationDataComponent const&);
    VolumeCreationDataComponent();
};
