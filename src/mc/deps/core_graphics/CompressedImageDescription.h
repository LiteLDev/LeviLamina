#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/ColorSpace.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"

namespace cg {

struct CompressedImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                 mWidth;
    ::ll::TypedStorage<4, 4, uint>                 mHeight;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat> mTextureFormat;
    ::ll::TypedStorage<1, 1, ::cg::ColorSpace>     mColorSpace;
    // NOLINTEND
};

} // namespace cg
