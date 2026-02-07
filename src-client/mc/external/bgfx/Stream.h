#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/VertexBufferHandle.h"
#include "mc/external/bgfx/VertexDeclHandle.h"

namespace bgfx {

struct Stream {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                       m_startVertex;
    ::ll::TypedStorage<2, 2, ::bgfx::VertexBufferHandle> m_handle;
    ::ll::TypedStorage<2, 2, ::bgfx::VertexDeclHandle>   m_decl;
    // NOLINTEND
};

} // namespace bgfx
