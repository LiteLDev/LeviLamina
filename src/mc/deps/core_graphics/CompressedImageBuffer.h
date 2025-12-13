#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { struct CompressedImageDescription; }
// clang-format on

namespace cg {

class CompressedImageBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk19e841;
    ::ll::UntypedStorage<4, 16> mUnkb02cbf;
    // NOLINTEND

public:
    // prevent constructor by default
    CompressedImageBuffer& operator=(CompressedImageBuffer const&);
    CompressedImageBuffer(CompressedImageBuffer const&);
    CompressedImageBuffer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C CompressedImageBuffer(uchar const* data, uint64 size, ::cg::CompressedImageDescription const& desc);

    MCNAPI_C ~CompressedImageBuffer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(uchar const* data, uint64 size, ::cg::CompressedImageDescription const& desc);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace cg
