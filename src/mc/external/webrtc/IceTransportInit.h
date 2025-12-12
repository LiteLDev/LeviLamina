#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct IceTransportInit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2d8736;
    ::ll::UntypedStorage<8, 8> mUnk7733f3;
    ::ll::UntypedStorage<8, 8> mUnk479f17;
    ::ll::UntypedStorage<8, 8> mUnkf6bcd5;
    ::ll::UntypedStorage<8, 8> mUnk2a04d0;
    ::ll::UntypedStorage<8, 8> mUnkf0d3f9;
    // NOLINTEND

public:
    // prevent constructor by default
    IceTransportInit& operator=(IceTransportInit const&);
    IceTransportInit(IceTransportInit const&);
    IceTransportInit();
};

} // namespace webrtc
