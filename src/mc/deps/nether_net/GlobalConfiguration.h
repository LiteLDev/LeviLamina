#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct GlobalConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2e0ef9;
    ::ll::UntypedStorage<2, 2>  mUnk588a61;
    ::ll::UntypedStorage<4, 4>  mUnk4efd41;
    ::ll::UntypedStorage<8, 32> mUnka96767;
    ::ll::UntypedStorage<8, 32> mUnk6dd774;
    ::ll::UntypedStorage<8, 32> mUnk14d913;
    ::ll::UntypedStorage<8, 32> mUnkdc1ead;
    ::ll::UntypedStorage<4, 4>  mUnkc4b228;
    // NOLINTEND

public:
    // prevent constructor by default
    GlobalConfiguration& operator=(GlobalConfiguration const&);
    GlobalConfiguration(GlobalConfiguration const&);
    GlobalConfiguration();
};

} // namespace NetherNet
