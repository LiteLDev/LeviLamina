#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class IWebRTCSignalingInterface {
public:
    // IWebRTCSignalingInterface inner types declare
    // clang-format off
    struct SignalingConfiguration;
    // clang-format on

    // IWebRTCSignalingInterface inner types define
    struct SignalingConfiguration {

    public:
        // prevent constructor by default
        SignalingConfiguration& operator=(SignalingConfiguration const&) = delete;
        SignalingConfiguration(SignalingConfiguration const&)            = delete;
        SignalingConfiguration()                                         = delete;
    };

public:
    // prevent constructor by default
    IWebRTCSignalingInterface& operator=(IWebRTCSignalingInterface const&) = delete;
    IWebRTCSignalingInterface(IWebRTCSignalingInterface const&)            = delete;
    IWebRTCSignalingInterface()                                            = delete;
};

}; // namespace NetherNet
