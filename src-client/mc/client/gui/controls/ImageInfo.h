#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ImageInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2> mPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec2> mSize;
    ::ll::TypedStorage<4, 8, ::glm::vec2> mUV;
    ::ll::TypedStorage<4, 8, ::glm::vec2> mUVSize;
    // NOLINTEND
};
