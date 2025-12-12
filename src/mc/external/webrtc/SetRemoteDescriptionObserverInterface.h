#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

class SetRemoteDescriptionObserverInterface : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnSetRemoteDescriptionComplete(::webrtc::RTCError) = 0;

    virtual ~SetRemoteDescriptionObserverInterface() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
