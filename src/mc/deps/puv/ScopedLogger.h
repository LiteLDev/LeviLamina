#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

struct ScopedLogger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5d9f89;
    ::ll::UntypedStorage<8, 80> mUnk45a0a2;
    ::ll::UntypedStorage<1, 1>  mUnk1f5128;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedLogger& operator=(ScopedLogger const&);
    ScopedLogger(ScopedLogger const&);
    ScopedLogger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void commit();

    MCNAPI ~ScopedLogger();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
