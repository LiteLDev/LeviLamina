#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PhotoStorageContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk64bb8f;
    ::ll::UntypedStorage<8, 8> mUnk4ffc6e;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoStorageContainer& operator=(PhotoStorageContainer const&);
    PhotoStorageContainer(PhotoStorageContainer const&);
    PhotoStorageContainer();
};
