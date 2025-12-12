#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class CreateSessionDescriptionObserver : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnSuccess(::webrtc::SessionDescriptionInterface*) = 0;

    virtual void OnFailure(::webrtc::RTCError) = 0;

    virtual ~CreateSessionDescriptionObserver() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
