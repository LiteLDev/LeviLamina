#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

struct CachedAsyncRetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk565da6;
    // NOLINTEND

public:
    // prevent constructor by default
    CachedAsyncRetry& operator=(CachedAsyncRetry const&);
    CachedAsyncRetry(CachedAsyncRetry const&);
    CachedAsyncRetry();

};

}
