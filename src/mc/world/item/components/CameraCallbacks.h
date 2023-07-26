#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraCallbacks {

public:
    // prevent constructor by default
    CameraCallbacks& operator=(CameraCallbacks const&) = delete;
    CameraCallbacks(CameraCallbacks const&)            = delete;
    CameraCallbacks()                                  = delete;
};
