#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class MutexLock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2bd85b;
    // NOLINTEND

public:
    // prevent constructor by default
    MutexLock& operator=(MutexLock const&);
    MutexLock(MutexLock const&);
    MutexLock();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MutexLock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
