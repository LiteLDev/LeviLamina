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
};

} // namespace cg
