#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/VertexBufferHandle.h"
#include "mc/external/bgfx/VertexDeclHandle.h"

namespace bgfx {

struct TransientVertexBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar*>                     data;
    ::ll::TypedStorage<4, 4, uint>                       size;
    ::ll::TypedStorage<4, 4, uint>                       startVertex;
    ::ll::TypedStorage<2, 2, ushort>                     stride;
    ::ll::TypedStorage<2, 2, ::bgfx::VertexBufferHandle> handle;
    ::ll::TypedStorage<2, 2, ::bgfx::VertexDeclHandle>   decl;
    // NOLINTEND
};

} // namespace bgfx
