#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_100 {

struct CameraAvoidanceRay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7eb3fc;
    ::ll::UntypedStorage<4, 4> mUnkb3074a;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAvoidanceRay& operator=(CameraAvoidanceRay const&);
    CameraAvoidanceRay(CameraAvoidanceRay const&);
    CameraAvoidanceRay();

};

}
