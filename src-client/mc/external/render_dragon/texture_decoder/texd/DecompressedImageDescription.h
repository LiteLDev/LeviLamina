#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/texture_decoder/texd/PixelFormat.h"

namespace texd {

struct DecompressedImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::texd::PixelFormat> pixelFormat;
    ::ll::TypedStorage<1, 1, bool>                isLinear;
    ::ll::TypedStorage<4, 4, uint>                width;
    ::ll::TypedStorage<4, 4, uint>                height;
    // NOLINTEND
};

} // namespace texd
