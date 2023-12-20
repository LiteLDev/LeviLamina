#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpSenderFrameEncryptionConfig {
public:
    // prevent constructor by default
    RtpSenderFrameEncryptionConfig& operator=(RtpSenderFrameEncryptionConfig const&);
    RtpSenderFrameEncryptionConfig(RtpSenderFrameEncryptionConfig const&);
    RtpSenderFrameEncryptionConfig();
};

}; // namespace webrtc
