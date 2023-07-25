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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNET_IWEBRTCSIGNALINGINTERFACE_SIGNALINGCONFIGURATION
    public:
        SignalingConfiguration& operator=(SignalingConfiguration const&) = delete;
        SignalingConfiguration(SignalingConfiguration const&)            = delete;
        SignalingConfiguration()                                         = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERNET_IWEBRTCSIGNALINGINTERFACE
public:
    IWebRTCSignalingInterface& operator=(IWebRTCSignalingInterface const&) = delete;
    IWebRTCSignalingInterface(IWebRTCSignalingInterface const&)            = delete;
    IWebRTCSignalingInterface()                                            = delete;
#endif

public:
};

}; // namespace NetherNet
