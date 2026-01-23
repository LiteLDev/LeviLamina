#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageType.h"
#include "mc/deps/core_graphics/enums/ColorSpace.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"

namespace cg {

struct ImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                 mWidth;
    ::ll::TypedStorage<4, 4, uint>                 mHeight;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat> mTextureFormat;
    ::ll::TypedStorage<1, 1, ::cg::ColorSpace>     mColorSpace;
    ::ll::TypedStorage<1, 1, ::cg::ImageType>      mImageType;
    ::ll::TypedStorage<4, 4, uint>                 mArraySizeOrDepth;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C uint getStorageSize() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static uint getStrideFromFormat(::mce::TextureFormat textureFormat);
    // NOLINTEND
};

} // namespace cg
