#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraRegistry {
public:
    // prevent constructor by default
    CameraRegistry& operator=(CameraRegistry const&);
    CameraRegistry(CameraRegistry const&);
    CameraRegistry();
};
