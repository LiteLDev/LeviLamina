#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class OutOfBandIdentifiers : int {
    NatEstablishUnidirectional  = 0,
    NatEstablishBidirectional   = 1,
    NatTypeDetect               = 2,
    Router2ReplyToSenderPort    = 3,
    Router2ReplyToSpecifiedPort = 4,
    Router2MiniPunchReply       = 5,
    Router2MiniPunchReplyBounce = 6,
    Xbox360Voice                = 7,
    Xbox360GetNetworkRoom       = 8,
    Xbox360ReturnNetworkRoom    = 9,
    NatPing                     = 10,
    NatPong                     = 11,
};
