#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct PooledFileHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk456ed1;
    ::ll::UntypedStorage<8, 80> mUnkc69ce2;
    // NOLINTEND

public:
    // prevent constructor by default
    PooledFileHandle& operator=(PooledFileHandle const&);
    PooledFileHandle(PooledFileHandle const&);
    PooledFileHandle();
};

} // namespace Core
