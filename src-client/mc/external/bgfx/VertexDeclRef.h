#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/VertexDeclHandle.h"
#include "mc/external/bx/HandleHashMapT.h"

namespace bgfx {

struct VertexDeclRef {
public:
    // VertexDeclRef inner types define
    using VertexDeclMap = ::bx::HandleHashMapT<128, uint>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 776, ::bx::HandleHashMapT<128, uint>> m_vertexDeclMap;
    ::ll::TypedStorage<2, 128, ushort[64]>                      m_vertexDeclRef;
    ::ll::TypedStorage<2, 8192, ::bgfx::VertexDeclHandle[4096]> m_vertexBufferRef;
    ::ll::TypedStorage<2, 8192, ::bgfx::VertexDeclHandle[4096]> m_dynamicVertexBufferRef;
    // NOLINTEND
};

} // namespace bgfx
