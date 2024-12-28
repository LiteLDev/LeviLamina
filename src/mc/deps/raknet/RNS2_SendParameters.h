#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RNS2_SendParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk98c838;
    ::ll::UntypedStorage<4, 4>   mUnke627d8;
    ::ll::UntypedStorage<8, 136> mUnk5b5d67;
    ::ll::UntypedStorage<4, 4>   mUnkb07c9c;
    // NOLINTEND

public:
    // prevent constructor by default
    RNS2_SendParameters& operator=(RNS2_SendParameters const&);
    RNS2_SendParameters(RNS2_SendParameters const&);
    RNS2_SendParameters();
};

} // namespace RakNet
