#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct ResourceLoadCacheState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkff2e74;
    ::ll::UntypedStorage<1, 1> mUnk6c765f;
    ::ll::UntypedStorage<1, 1> mUnk2c420d;
    ::ll::UntypedStorage<4, 4> mUnk524126;
    ::ll::UntypedStorage<4, 4> mUnk7269f1;
    ::ll::UntypedStorage<4, 4> mUnk261541;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceLoadCacheState& operator=(ResourceLoadCacheState const&);
    ResourceLoadCacheState(ResourceLoadCacheState const&);
    ResourceLoadCacheState();
};

} // namespace Bedrock::Resources
