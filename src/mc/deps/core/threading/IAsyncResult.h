#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class IAsyncResult {
public:
    // prevent constructor by default
    IAsyncResult& operator=(IAsyncResult const&);
    IAsyncResult(IAsyncResult const&);
    IAsyncResult();
};

}; // namespace Bedrock::Threading
