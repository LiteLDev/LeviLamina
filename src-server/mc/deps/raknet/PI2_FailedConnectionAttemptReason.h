#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class PI2_FailedConnectionAttemptReason : int {
    ConnectionAttemptFailed = 0,
    AlreadyConnected = 1,
    NoFreeIncomingConnections = 2,
    SecurityPublicKeyMismatch = 3,
    ConnectionBanned = 4,
    InvalidPassword = 5,
    IncompatibleProtocol = 6,
    IpRecentlyConnected = 7,
    RemoteSystemRequiresPublicKey = 8,
    OurSystemRequiresSecurity = 9,
    PublicKeyMismatch = 10,
};

}
