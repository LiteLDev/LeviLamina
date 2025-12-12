#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct PublicKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk85a4fe;
    ::ll::UntypedStorage<8, 8> mUnke3b1ca;
    ::ll::UntypedStorage<8, 8> mUnk8cea37;
    ::ll::UntypedStorage<8, 8> mUnkeb3117;
    // NOLINTEND

public:
    // prevent constructor by default
    PublicKey& operator=(PublicKey const&);
    PublicKey(PublicKey const&);
    PublicKey();
};

} // namespace RakNet
