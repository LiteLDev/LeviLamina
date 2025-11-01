#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class ReceiveStreamInterface {
public:
    // ReceiveStreamInterface inner types declare
    // clang-format off
    struct ReceiveStreamRtpConfig;
    // clang-format on

    // ReceiveStreamInterface inner types define
    struct ReceiveStreamRtpConfig {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk1a727b;
        ::ll::UntypedStorage<4, 4> mUnk9febdf;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReceiveStreamRtpConfig& operator=(ReceiveStreamRtpConfig const&);
        ReceiveStreamRtpConfig(ReceiveStreamRtpConfig const&);
        ReceiveStreamRtpConfig();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReceiveStreamInterface() = default;
    // NOLINTEND
};

} // namespace webrtc
