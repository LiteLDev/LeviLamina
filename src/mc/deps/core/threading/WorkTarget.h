#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst::Details {

class WorkTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb663cb;
    ::ll::UntypedStorage<8, 16> mUnkf7128d;
    ::ll::UntypedStorage<8, 24> mUnk4678c5;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkTarget& operator=(WorkTarget const&);
    WorkTarget(WorkTarget const&);
    WorkTarget();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(uint64 secondaryWorkersCount);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Threading::Burst::Details
