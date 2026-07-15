#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/access/Enum.h"
#include "mc/external/bgfx/texture_format/Enum.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct TextureHandle; }
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

    MCAPI void setImagesAsRanged(
        uchar                              _stage,
        ::bgfx::TextureHandle const*       _textureHandles,
        uint64                             _textureHandleStride,
        uchar const*                       _mips,
        uint64                             _mipsStride,
        ::bgfx::Access::Enum const*        _access,
        uint64                             _accessStride,
        ::bgfx::TextureFormat::Enum const* _format,
        uint64                             _formatStride,
        uint64                             _count,
        uint                               _offset
    );
    // NOLINTEND
};

} // namespace bgfx
