#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

class SetSessionDescriptionObserver : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnSuccess() = 0;

    virtual void OnFailure(::webrtc::RTCError) = 0;

    virtual ~SetSessionDescriptionObserver() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
