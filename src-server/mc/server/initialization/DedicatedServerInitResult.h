#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DedicatedServerInitialization {

struct DedicatedServerInitResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkaf2b47;
    ::ll::UntypedStorage<8, 32> mUnk421dcb;
    ::ll::UntypedStorage<8, 8>  mUnk67a935;
    ::ll::UntypedStorage<8, 8>  mUnk59e110;
    // NOLINTEND

public:
    // prevent constructor by default
    DedicatedServerInitResult& operator=(DedicatedServerInitResult const&);
    DedicatedServerInitResult(DedicatedServerInitResult const&);
    DedicatedServerInitResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DedicatedServerInitResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace DedicatedServerInitialization
