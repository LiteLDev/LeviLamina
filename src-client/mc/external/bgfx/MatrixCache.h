#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Matrix4.h"

namespace bgfx {

struct MatrixCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 4194304, ::bgfx::Matrix4[65536]> m_cache;
    ::ll::TypedStorage<4, 4, uint>                         m_num;
    // NOLINTEND
};

} // namespace bgfx
