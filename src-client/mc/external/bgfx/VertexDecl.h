#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct VertexDecl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>        m_hash;
    ::ll::TypedStorage<2, 2, ushort>      m_stride;
    ::ll::TypedStorage<2, 38, ushort[19]> m_offset;
    ::ll::TypedStorage<2, 38, ushort[19]> m_attributes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void end();
    // NOLINTEND
};

} // namespace bgfx
