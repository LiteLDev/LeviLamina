#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct PublicKey {
public:
    // prevent constructor by default
    PublicKey& operator=(PublicKey const&);
    PublicKey(PublicKey const&);
    PublicKey();
};

}; // namespace RakNet
