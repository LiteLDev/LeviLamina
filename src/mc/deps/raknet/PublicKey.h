#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct PublicKey {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_PUBLICKEY
public:
    PublicKey& operator=(PublicKey const&) = delete;
    PublicKey(PublicKey const&)            = delete;
    PublicKey()                            = delete;
#endif

public:
};

}; // namespace RakNet
