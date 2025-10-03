#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PublicKeyMode.h"

namespace RakNet {

struct PublicKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RakNet::PublicKeyMode> publicKeyMode;
    ::ll::TypedStorage<8, 8, char*>                   remoteServerPublicKey;
    ::ll::TypedStorage<8, 8, char*>                   myPublicKey;
    ::ll::TypedStorage<8, 8, char*>                   myPrivateKey;
    // NOLINTEND
};

} // namespace RakNet
