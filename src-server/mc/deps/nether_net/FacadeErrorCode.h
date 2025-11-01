#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

enum class FacadeErrorCode : int {
    Ok                                   = 0,
    SignalingServiceSignInNoInterface    = 1,
    SignalingServiceSignInUnknownFailure = 2,
    EmptyURL                             = 3,
    EmptyAuthToken                       = 4,
    WebSocketAllocationFail              = 5,
    WebSocketDuplicateFail               = 6,
    WebSocketLost                        = 7,
    WebSocketNotConnected                = 8,
    LanSocketNotInitialized              = 9,
    LanSocketUnknownPeer                 = 10,
};

}
