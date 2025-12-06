#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class ConnectionAttemptResult : int {
    ConnectionAttemptStarted           = 0,
    InvalidParameter                   = 1,
    CannotResolveDomainName            = 2,
    AlreadyConnectedToEndpoint         = 3,
    ConnectionAttemptAlreadyInProgress = 4,
    SecurityInitializationFailed       = 5,
};

}
