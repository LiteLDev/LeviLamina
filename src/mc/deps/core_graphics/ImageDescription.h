#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageType.h"
#include "mc/deps/core_graphics/enums/ColorSpace.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ImageDescription();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit ImageDescription(::mce::Image const& image);

    MCAPI ImageDescription(
        uint                 width,
        uint                 height,
        ::mce::TextureFormat format,
        ::cg::ColorSpace     colorSpace,
        ::cg::ImageType      imageType,
        uint                 arraySizeOrDepth
    );

    MCAPI uint getArraySize() const;

    MCFOLD uint getDepth() const;

    MCAPI uint getStorageSize() const;

    MCAPI uint getSubimageSize() const;

    MCAPI bool operator!=(::cg::ImageDescription const& rhs) const;

    MCAPI bool operator==(::cg::ImageDescription const&) const;

    MCFOLD void setArraySize(uint size);

    MCFOLD void setDepth(uint depth);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static uint getStrideFromFormat(::mce::TextureFormat textureFormat);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::mce::Image const& image);

    MCAPI void* $ctor(
        uint                 width,
        uint                 height,
        ::mce::TextureFormat format,
        ::cg::ColorSpace     colorSpace,
        ::cg::ImageType      imageType,
        uint                 arraySizeOrDepth
    );
#endif
    // NOLINTEND
};

} // namespace cg
