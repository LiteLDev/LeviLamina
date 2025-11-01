#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpSenderFrameEncryptionConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk187121;
    ::ll::UntypedStorage<1, 5> mUnk1f3892;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpSenderFrameEncryptionConfig& operator=(RtpSenderFrameEncryptionConfig const&);
    RtpSenderFrameEncryptionConfig(RtpSenderFrameEncryptionConfig const&);
    RtpSenderFrameEncryptionConfig();

};

}
