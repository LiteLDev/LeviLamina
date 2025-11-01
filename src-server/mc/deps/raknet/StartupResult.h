#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class StartupResult : int {
    RaknetStarted               = 0,
    RaknetAlreadyStarted        = 1,
    InvalidSocketDescriptors    = 2,
    InvalidMaxConnections       = 3,
    SocketFamilyNotSupported    = 4,
    SocketPortAlreadyInUse      = 5,
    SocketFailedToBind          = 6,
    SocketFailedTestSend        = 7,
    PortCannotBeZero            = 8,
    FailedToCreateNetworkThread = 9,
    CouldNotGenerateGuid        = 10,
    StartupOtherFailure         = 11,
};

}
