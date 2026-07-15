#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class MutexLock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk294303;
    // NOLINTEND

public:
    // prevent constructor by default
    MutexLock& operator=(MutexLock const&);
    MutexLock(MutexLock const&);
    MutexLock();
};

} // namespace absl
