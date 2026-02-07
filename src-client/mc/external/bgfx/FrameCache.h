#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/MatrixCache.h"
#include "mc/external/bgfx/RectCache.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Rect; }
// clang-format on

namespace bgfx {

struct FrameCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 4194320, ::bgfx::MatrixCache> m_matrixCache;
    ::ll::TypedStorage<4, 524292, ::bgfx::RectCache>    m_rectCache;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool isZeroArea(::bgfx::Rect const& _rect, ushort _scissor) const;
    // NOLINTEND
};

} // namespace bgfx
