#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpCapabilities {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf25ad3;
    ::ll::UntypedStorage<8, 24> mUnk1f97eb;
    ::ll::UntypedStorage<8, 24> mUnk2ae35f;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpCapabilities& operator=(RtpCapabilities const&);
    RtpCapabilities(RtpCapabilities const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpCapabilities();

    MCNAPI ~RtpCapabilities();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
