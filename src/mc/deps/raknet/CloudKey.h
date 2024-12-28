#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct CloudKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6aa8e7;
    ::ll::UntypedStorage<4, 4> mUnkd77b56;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudKey& operator=(CloudKey const&);
    CloudKey(CloudKey const&);
    CloudKey();
};

} // namespace RakNet
