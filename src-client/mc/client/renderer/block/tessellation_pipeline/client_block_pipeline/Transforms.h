#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"

namespace ClientBlockPipeline {

struct Transforms {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::Matrix> mPostTransform;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Transforms();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
