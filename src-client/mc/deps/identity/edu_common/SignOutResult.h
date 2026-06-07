#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct SignOutResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk846bfc;
    ::ll::UntypedStorage<8, 32> mUnkbbf80d;
    // NOLINTEND

public:
    // prevent constructor by default
    SignOutResult& operator=(SignOutResult const&);
    SignOutResult(SignOutResult const&);
    SignOutResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SignOutResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Identity
