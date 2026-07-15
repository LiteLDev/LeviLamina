#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineStreamConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1ceec7;
    ::ll::UntypedStorage<8, 8> mUnk7d0287;
    ::ll::UntypedStorage<4, 4> mUnk2015a3;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineStreamConfig& operator=(OnlineStreamConfig const&);
    OnlineStreamConfig(OnlineStreamConfig const&);
    OnlineStreamConfig();
};

} // namespace Audio
