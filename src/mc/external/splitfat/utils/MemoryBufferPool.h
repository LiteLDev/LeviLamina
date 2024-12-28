#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class MemoryBufferPool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcc3dac;
    ::ll::UntypedStorage<8, 8>  mUnkbaf13c;
    ::ll::UntypedStorage<8, 88> mUnk8d5674;
    ::ll::UntypedStorage<8, 8>  mUnkb42816;
    ::ll::UntypedStorage<4, 4>  mUnk7c130d;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryBufferPool& operator=(MemoryBufferPool const&);
    MemoryBufferPool(MemoryBufferPool const&);
    MemoryBufferPool();
};

} // namespace SFAT
