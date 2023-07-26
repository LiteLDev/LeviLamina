#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class IAsyncResult {

public:
    // prevent constructor by default
    IAsyncResult& operator=(IAsyncResult const&) = delete;
    IAsyncResult(IAsyncResult const&)            = delete;
    IAsyncResult()                               = delete;
};

}; // namespace Bedrock::Threading
