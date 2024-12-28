#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpTransceiverInit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd2a1da;
    ::ll::UntypedStorage<8, 24> mUnk5a3948;
    ::ll::UntypedStorage<8, 24> mUnk33d1c9;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpTransceiverInit& operator=(RtpTransceiverInit const&);
    RtpTransceiverInit(RtpTransceiverInit const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RtpTransceiverInit();

    MCAPI ~RtpTransceiverInit();
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
