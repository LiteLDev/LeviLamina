#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class RNS2BindResult : int {
    Success = 0,
    RequiresRaknetSupportIpv6Define = 1,
    FailedToBindSocket = 2,
    FailedSendTest = 3,
};

}
