#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

struct PaperDollSetBodyRotationPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mRotationDegrees;
    // NOLINTEND
};

} // namespace GeometryAtlas
