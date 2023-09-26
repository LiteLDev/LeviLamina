#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename E = std::error_code>
struct ErrorInfo {
public:
    ErrorInfo() = default;

    E& getError() { return error; }

private:
    E     error;
    uchar filler[0x30]{};
};

}; // namespace Bedrock
