#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct WebRtcSessionDescriptionFactory {
public:
    // WebRtcSessionDescriptionFactory inner types declare
    // clang-format off
    struct CreateSessionDescriptionRequest;
    // clang-format on

    // WebRtcSessionDescriptionFactory inner types define
    enum class CertificateRequestState : uint {};

    struct CreateSessionDescriptionRequest {
    public:
        // CreateSessionDescriptionRequest inner types define
        enum class Type : uint {};
    };
};

} // namespace webrtc
