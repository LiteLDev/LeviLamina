#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpCapabilities {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk69ca65;
    ::ll::UntypedStorage<8, 24> mUnkc3837d;
    ::ll::UntypedStorage<8, 24> mUnkd3c68c;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpCapabilities& operator=(RtpCapabilities const&);
    RtpCapabilities(RtpCapabilities const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RtpCapabilities();

    MCAPI ~RtpCapabilities();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
