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
    MCNAPI RtcpFeedback(::webrtc::RtcpFeedback const&);

    MCNAPI explicit RtcpFeedback(::webrtc::RtcpFeedbackType type);

    MCNAPI RtcpFeedback(::webrtc::RtcpFeedbackType type, ::webrtc::RtcpFeedbackMessageType message_type);

    MCNAPI ~RtcpFeedback();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtcpFeedback const&);

    MCNAPI void* $ctor(::webrtc::RtcpFeedbackType type);

    MCNAPI void* $ctor(::webrtc::RtcpFeedbackType type, ::webrtc::RtcpFeedbackMessageType message_type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
