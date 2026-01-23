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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ImageBuffer();

    MCAPI_C ImageBuffer(::cg::ImageBuffer&& other);

    MCAPI_C explicit ImageBuffer(::mce::Image&& rhs);

    MCAPI_C explicit ImageBuffer(::mce::Image const& rhs);

    MCAPI_C ImageBuffer(::cg::ImageBuffer const& rhs);

    MCAPI_C void allocateStorage(::cg::ImageDescription const& imageDesc);

    MCAPI_C uchar const* get(uint arrayIndex) const;

    MCAPI_C ::cg::ImageBuffer& operator=(::cg::ImageBuffer&& other);

    MCAPI_C ::cg::ImageBuffer& operator=(::cg::ImageBuffer const& other);

    MCAPI_C ~ImageBuffer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();

    MCAPI_C void* $ctor(::cg::ImageBuffer&& other);

    MCAPI_C void* $ctor(::mce::Image&& rhs);

    MCAPI_C void* $ctor(::mce::Image const& rhs);

    MCAPI_C void* $ctor(::cg::ImageBuffer const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace cg
