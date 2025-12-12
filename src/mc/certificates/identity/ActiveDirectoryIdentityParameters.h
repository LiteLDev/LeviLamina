#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct ActiveDirectoryIdentityParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc89eb0;
    ::ll::UntypedStorage<8, 8> mUnk3e7c17;
    ::ll::UntypedStorage<8, 8> mUnk378b7c;
    ::ll::UntypedStorage<4, 8> mUnk182bab;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryIdentityParameters& operator=(ActiveDirectoryIdentityParameters const&);
    ActiveDirectoryIdentityParameters(ActiveDirectoryIdentityParameters const&);
    ActiveDirectoryIdentityParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~ActiveDirectoryIdentityParameters();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Identity
