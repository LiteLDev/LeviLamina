#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename E>
struct ErrorInfo {

public:
    ErrorInfo() = default;

    E& getError() { return error; }

private:
    E    error;
    char filler[0x30]{};
};

}; // namespace Bedrock
