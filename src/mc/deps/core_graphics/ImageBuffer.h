#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { struct ImageDescription; }
namespace mce { class Blob; }
namespace mce { struct Image; }
// clang-format on

namespace cg {

class ImageBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfc71b4;
    ::ll::UntypedStorage<4, 20> mUnk1d3b9e;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ImageBuffer();

    MCNAPI_C ImageBuffer(::cg::ImageBuffer&& other);

    MCNAPI_C explicit ImageBuffer(::mce::Image&& rhs);

    MCNAPI_C explicit ImageBuffer(::mce::Image const& rhs);

    MCNAPI_C ImageBuffer(::cg::ImageBuffer const& rhs);

    MCNAPI_C void allocateStorage(::cg::ImageDescription const& imageDesc);

    MCNAPI_C ::cg::ImageBuffer clone() const;

    MCNAPI_C uchar const* get(uint arrayIndex) const;

    MCNAPI_C ::cg::ImageBuffer& operator=(::cg::ImageBuffer&& other);

    MCNAPI_C ::cg::ImageBuffer& operator=(::cg::ImageBuffer const& other);

    MCNAPI_C ~ImageBuffer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::cg::ImageBuffer&& other);

    MCNAPI_C void* $ctor(::mce::Image&& rhs);

    MCNAPI_C void* $ctor(::mce::Image const& rhs);

    MCNAPI_C void* $ctor(::cg::ImageBuffer const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace cg
