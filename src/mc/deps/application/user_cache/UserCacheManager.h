#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class UserCacheManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk10ca8c;
    // NOLINTEND

public:
    // prevent constructor by default
    UserCacheManager& operator=(UserCacheManager const&);
    UserCacheManager(UserCacheManager const&);
    UserCacheManager();
};

} // namespace Bedrock
