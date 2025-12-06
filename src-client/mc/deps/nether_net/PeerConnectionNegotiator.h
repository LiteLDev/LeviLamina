#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct PeerConnectionNegotiator {
public:
    // PeerConnectionNegotiator inner types declare
    // clang-format off
    struct CreateSessionObserver;
    struct SetLocalDescriptionObserver;
    struct SetRemoteDescriptionObserver;
    // clang-format on

    // PeerConnectionNegotiator inner types define
    struct CreateSessionObserver {};

    struct SetLocalDescriptionObserver {};

    struct SetRemoteDescriptionObserver {};
};

} // namespace NetherNet
