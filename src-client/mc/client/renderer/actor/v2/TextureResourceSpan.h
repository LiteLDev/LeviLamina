#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextureResourceSpan {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mTextureOffset;
    ::ll::TypedStorage<4, 4, uint> mTextureCount;
    // NOLINTEND
};
