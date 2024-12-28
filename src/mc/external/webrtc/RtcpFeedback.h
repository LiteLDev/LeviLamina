#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtcpFeedbackMessageType.h"
#include "mc/external/webrtc/RtcpFeedbackType.h"

namespace webrtc {

struct RtcpFeedback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd6f38a;
    ::ll::UntypedStorage<4, 8> mUnk2bca73;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcpFeedback& operator=(RtcpFeedback const&);
    RtcpFeedback();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RtcpFeedback(::webrtc::RtcpFeedback const&);

    MCAPI explicit RtcpFeedback(::webrtc::RtcpFeedbackType);

    MCAPI RtcpFeedback(::webrtc::RtcpFeedbackType, ::webrtc::RtcpFeedbackMessageType);

    MCAPI ~RtcpFeedback();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RtcpFeedback const&);

    MCAPI void* $ctor(::webrtc::RtcpFeedbackType);

    MCAPI void* $ctor(::webrtc::RtcpFeedbackType, ::webrtc::RtcpFeedbackMessageType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
