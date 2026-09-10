#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

struct PaperdollCaptureFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>       rotation;
    ::ll::TypedStorage<4, 8, ::glm::vec2> translation;
    // NOLINTEND
};

} // namespace GeometryAtlas
