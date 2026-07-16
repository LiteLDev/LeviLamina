#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineStreamParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk55988f;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineStreamParams& operator=(OnlineStreamParams const&);
    OnlineStreamParams(OnlineStreamParams const&);
    OnlineStreamParams();
};

} // namespace Audio
