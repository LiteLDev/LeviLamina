#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::AsyncResult {

template <typename T0>
class UnwrapResult {

public:
    // prevent constructor by default
    UnwrapResult& operator=(UnwrapResult const&) = delete;
    UnwrapResult(UnwrapResult const&)            = delete;
    UnwrapResult()                               = delete;
};

}; // namespace Bedrock::Threading::AsyncResult
