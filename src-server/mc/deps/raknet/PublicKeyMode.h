#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class PublicKeyMode : int {
    InsecureConnection = 0,
    AcceptAnyPublicKey = 1,
    UseKnownPublicKey = 2,
    UseTwoWayAuthentication = 3,
};

}
