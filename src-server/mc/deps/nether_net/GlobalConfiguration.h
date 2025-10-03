#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct GlobalConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2e0ef9;
    ::ll::UntypedStorage<2, 2> mUnk588a61;
    ::ll::UntypedStorage<4, 4> mUnk4efd41;
    ::ll::UntypedStorage<4, 8> mUnka2083d;
    ::ll::UntypedStorage<4, 8> mUnkdba747;
    ::ll::UntypedStorage<4, 8> mUnk2471c1;
    ::ll::UntypedStorage<4, 8> mUnk3beb1d;
    ::ll::UntypedStorage<4, 4> mUnkc4b228;
    // NOLINTEND

public:
    // prevent constructor by default
    GlobalConfiguration& operator=(GlobalConfiguration const&);
    GlobalConfiguration(GlobalConfiguration const&);
    GlobalConfiguration();
};

} // namespace NetherNet
