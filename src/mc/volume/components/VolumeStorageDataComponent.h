#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeStorageDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6d4ef4;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeStorageDataComponent& operator=(VolumeStorageDataComponent const&);
    VolumeStorageDataComponent(VolumeStorageDataComponent const&);
    VolumeStorageDataComponent();
};
