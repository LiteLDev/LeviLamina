#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/CallStack.h"

namespace Bedrock {

template <typename E = std::error_code>
struct ErrorInfo {
public:
    ErrorInfo() = default;

    [[nodiscard]] constexpr E&       code() { return mError; }
    [[nodiscard]] constexpr E const& code() const { return mError; }

    E                      mError;
    CallStack              mCallStack;
    std::vector<ErrorInfo> mStackErrors;
};

}; // namespace Bedrock
