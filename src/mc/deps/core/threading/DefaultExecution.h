#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst::Strategy::Execution {

class DefaultExecution {
public:
    // prevent constructor by default
    DefaultExecution& operator=(DefaultExecution const&);
    DefaultExecution(DefaultExecution const&);
    DefaultExecution();
};

} // namespace Bedrock::Threading::Burst::Strategy::Execution
