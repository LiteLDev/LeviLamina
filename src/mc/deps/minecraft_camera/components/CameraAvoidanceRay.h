#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraAvoidanceRay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdf34ce;
    ::ll::UntypedStorage<4, 4> mUnk865197;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAvoidanceRay& operator=(CameraAvoidanceRay const&);
    CameraAvoidanceRay(CameraAvoidanceRay const&);
    CameraAvoidanceRay();
};
