#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class IceTransportInit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk3475e8;
    ::ll::UntypedStorage<8, 8>  mUnkbad77b;
    ::ll::UntypedStorage<8, 8>  mUnk7733f3;
    ::ll::UntypedStorage<8, 8>  mUnk3328ae;
    ::ll::UntypedStorage<8, 8>  mUnkaec0ce;
    ::ll::UntypedStorage<8, 8>  mUnk270d7e;
    // NOLINTEND

public:
    // prevent constructor by default
    IceTransportInit& operator=(IceTransportInit const&);
    IceTransportInit(IceTransportInit const&);
    IceTransportInit();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~IceTransportInit();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
