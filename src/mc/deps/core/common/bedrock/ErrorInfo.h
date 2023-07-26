#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0>
struct ErrorInfo {

public:
    // prevent constructor by default
    ErrorInfo& operator=(ErrorInfo const&) = delete;
    ErrorInfo(ErrorInfo const&)            = delete;
    ErrorInfo()                            = delete;
};

}; // namespace Bedrock
