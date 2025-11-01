#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct SSLIdentityParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdcd91b;
    ::ll::UntypedStorage<8, 8>  mUnkafedb9;
    ::ll::UntypedStorage<8, 8>  mUnkc7c44d;
    ::ll::UntypedStorage<4, 12> mUnkf1c828;
    // NOLINTEND

public:
    // prevent constructor by default
    SSLIdentityParams& operator=(SSLIdentityParams const&);
    SSLIdentityParams(SSLIdentityParams const&);
    SSLIdentityParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SSLIdentityParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
