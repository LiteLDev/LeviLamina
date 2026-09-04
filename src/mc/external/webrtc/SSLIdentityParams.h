#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SSLIdentityParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbc19d8;
    ::ll::UntypedStorage<8, 8>  mUnk55c790;
    ::ll::UntypedStorage<8, 8>  mUnk6a08d2;
    ::ll::UntypedStorage<4, 12> mUnk11b803;
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

} // namespace webrtc
