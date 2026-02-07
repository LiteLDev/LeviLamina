#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct DynamicVertexBufferHandle; }
namespace bgfx { struct TextureHandle; }
namespace bgfx { struct VertexDeclHandle; }
// clang-format on

namespace bgfx {

struct Encoder {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void blit(
        ushort                _id,
        ::bgfx::TextureHandle _dst,
        uchar                 _dstMip,
        ushort                _dstX,
        ushort                _dstY,
        ushort                _dstZ,
        ::bgfx::TextureHandle _src,
        uchar                 _srcMip,
        ushort                _srcX,
        ushort                _srcY,
        ushort                _srcZ,
        ushort                _width,
        ushort                _height,
        ushort                _depth
    );

    MCAPI ushort setScissor(ushort _x, ushort _y, ushort _width, ushort _height);

    MCAPI void setVertexBuffer(
        uchar                             _stream,
        ::bgfx::DynamicVertexBufferHandle _handle,
        uint                              _bytesOffset,
        uint                              _numVertices,
        ::bgfx::VertexDeclHandle          _decl,
        uint                              _declStride
    );
    // NOLINTEND
};

} // namespace bgfx
