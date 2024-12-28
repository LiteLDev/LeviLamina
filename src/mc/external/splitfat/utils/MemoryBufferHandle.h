#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class MemoryBufferHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk467576;
    ::ll::UntypedStorage<8, 8> mUnkdfd9fc;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryBufferHandle& operator=(MemoryBufferHandle const&);
    MemoryBufferHandle(MemoryBufferHandle const&);
    MemoryBufferHandle();
};

} // namespace SFAT
