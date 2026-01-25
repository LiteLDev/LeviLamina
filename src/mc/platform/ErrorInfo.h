#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/platform/CallStack.h"

namespace Bedrock {

template <typename E = std::error_code>
struct ErrorInfo {
public:
    ErrorInfo() = default;

    ErrorInfo(ErrorInfo const&)                = default;
    ErrorInfo& operator=(ErrorInfo const&)     = default;
    ErrorInfo(ErrorInfo&&) noexcept            = default;
    ErrorInfo& operator=(ErrorInfo&&) noexcept = default;

    ErrorInfo(E const& error) : mError(error) {}

    [[nodiscard]] constexpr E&       code() { return mError; }
    [[nodiscard]] constexpr E const& code() const { return mError; }

    E                      mError;
    CallStack              mCallStack;
    std::vector<ErrorInfo> mStackErrors;
};

} // namespace Bedrock
