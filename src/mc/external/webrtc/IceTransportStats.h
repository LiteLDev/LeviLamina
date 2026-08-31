#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct IceTransportStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk295439;
    ::ll::UntypedStorage<8, 24> mUnkd2b83b;
    ::ll::UntypedStorage<4, 4>  mUnk522577;
    ::ll::UntypedStorage<8, 8>  mUnk52ceb1;
    ::ll::UntypedStorage<8, 8>  mUnk60625e;
    ::ll::UntypedStorage<8, 8>  mUnkd72600;
    ::ll::UntypedStorage<8, 8>  mUnk7f980c;
    ::ll::UntypedStorage<4, 4>  mUnkb99c20;
    ::ll::UntypedStorage<8, 32> mUnk37e092;
    ::ll::UntypedStorage<4, 4>  mUnkd803e1;
    // NOLINTEND

public:
    // prevent constructor by default
    IceTransportStats& operator=(IceTransportStats const&);
    IceTransportStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IceTransportStats(::webrtc::IceTransportStats const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::IceTransportStats const&);
    // NOLINTEND
};

} // namespace webrtc
