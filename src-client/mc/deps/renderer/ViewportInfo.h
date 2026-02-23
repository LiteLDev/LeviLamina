#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct ViewportInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2> size;
    ::ll::TypedStorage<4, 8, ::glm::vec2> offset;
    ::ll::TypedStorage<4, 4, float>       minDepth;
    ::ll::TypedStorage<4, 4, float>       maxDepth;
    // NOLINTEND
};

} // namespace mce
