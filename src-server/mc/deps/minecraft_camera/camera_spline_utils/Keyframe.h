#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraSplineUtils {

struct Keyframe {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkcd48b3;
    ::ll::UntypedStorage<4, 4>  mUnkdc2dbc;
    // NOLINTEND

public:
    // prevent constructor by default
    Keyframe& operator=(Keyframe const&);
    Keyframe(Keyframe const&);
    Keyframe();
};

} // namespace CameraSplineUtils
