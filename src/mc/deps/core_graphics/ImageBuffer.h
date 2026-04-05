#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/Blob.h"
#include "mc/deps/core_graphics/ImageDescription.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

namespace cg {

class ImageBuffer {
public:
    // ImageBuffer inner types define
    using Storage = ::mce::Blob;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::mce::Blob>            mStorage;
    ::ll::TypedStorage<4, 20, ::cg::ImageDescription> mImageDescription;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ImageBuffer();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit ImageBuffer(::cg::ImageDescription const& imageDesc);

    MCAPI ImageBuffer(::cg::ImageBuffer&& other);

    MCAPI explicit ImageBuffer(::mce::Image&& rhs);

    MCAPI explicit ImageBuffer(::mce::Image const& rhs);

    MCAPI ImageBuffer(::cg::ImageBuffer const& rhs);

    MCAPI void allocateStorage(::cg::ImageDescription const& imageDesc);

    MCAPI uchar const* get(uint arrayIndex) const;

    MCAPI ::cg::ImageBuffer& operator=(::cg::ImageBuffer&& other);

    MCAPI ::cg::ImageBuffer& operator=(::cg::ImageBuffer const& other);

    MCAPI ~ImageBuffer();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::cg::ImageDescription const& imageDesc);

    MCAPI void* $ctor(::cg::ImageBuffer&& other);

    MCAPI void* $ctor(::mce::Image&& rhs);

    MCAPI void* $ctor(::mce::Image const& rhs);

    MCAPI void* $ctor(::cg::ImageBuffer const& rhs);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};

} // namespace cg
