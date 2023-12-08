#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/CallStack.h"

namespace Bedrock {

template <typename E = std::error_code>
struct ErrorInfo {
public:
    ErrorInfo() = default;

    E                      mError;
    CallStack              mCallStack;
    std::vector<ErrorInfo> mStackErrors;
};

}; // namespace Bedrock
