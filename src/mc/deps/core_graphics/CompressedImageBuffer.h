#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/Blob.h"
#include "mc/deps/core_graphics/CompressedImageDescription.h"

namespace cg {

class CompressedImageBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::mce::Blob>                      mStorage;
    ::ll::TypedStorage<4, 16, ::cg::CompressedImageDescription> mImageDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    CompressedImageBuffer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C CompressedImageBuffer(uchar const* data, uint64 size, ::cg::CompressedImageDescription const& desc);

    MCAPI_C ~CompressedImageBuffer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(uchar const* data, uint64 size, ::cg::CompressedImageDescription const& desc);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace cg
