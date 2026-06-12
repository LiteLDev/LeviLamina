#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/MatrixCache.h"
#include "mc/external/bgfx/RectCache.h"

namespace bgfx {

struct FrameCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4194320, ::bgfx::MatrixCache> m_matrixCache;
    ::ll::TypedStorage<4, 524304, ::bgfx::RectCache>    m_rectCache;
    // NOLINTEND
};

} // namespace bgfx
