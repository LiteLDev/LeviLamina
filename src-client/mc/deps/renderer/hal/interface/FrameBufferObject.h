#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/deprecated/ResourceBase.h"
#include "mc/deps/renderer/hal/null/FrameBufferObjectNull.h"

namespace mce {

class FrameBufferObject : public ::mce::FrameBufferObjectNull,
                          public ::mce::deprecated::ResourceBase<::mce::FrameBufferObjectNull> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void bindFrameBuffer();

    MCNAPI ~FrameBufferObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
