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
        SignalingConfiguration& operator=(SignalingConfiguration const&);
        SignalingConfiguration(SignalingConfiguration const&);
        SignalingConfiguration();
    };

public:
    // prevent constructor by default
    IWebRTCSignalingInterface& operator=(IWebRTCSignalingInterface const&);
    IWebRTCSignalingInterface(IWebRTCSignalingInterface const&);
    IWebRTCSignalingInterface();
};

}; // namespace NetherNet
