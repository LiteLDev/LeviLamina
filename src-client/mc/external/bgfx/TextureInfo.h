#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/texture_format/Enum.h"

namespace bgfx {

struct TextureInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::bgfx::TextureFormat::Enum> format;
    ::ll::TypedStorage<4, 4, uint>                        storageSize;
    ::ll::TypedStorage<2, 2, ushort>                      width;
    ::ll::TypedStorage<2, 2, ushort>                      height;
    ::ll::TypedStorage<2, 2, ushort>                      depth;
    ::ll::TypedStorage<2, 2, ushort>                      numLayers;
    ::ll::TypedStorage<1, 1, uchar>                       numMips;
    ::ll::TypedStorage<1, 1, uchar>                       bitsPerPixel;
    ::ll::TypedStorage<1, 1, bool>                        cubeMap;
    // NOLINTEND
};

} // namespace bgfx
