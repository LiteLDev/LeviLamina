#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PaperDollFitting {

struct Bounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2> mMin;
    ::ll::TypedStorage<4, 8, ::glm::vec2> mMax;
    // NOLINTEND
};

} // namespace PaperDollFitting
