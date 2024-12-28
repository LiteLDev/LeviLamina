#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst::Strategy::Execution {

class GreedyExecution {
public:
    // prevent constructor by default
    GreedyExecution& operator=(GreedyExecution const&);
    GreedyExecution(GreedyExecution const&);
    GreedyExecution();
};

} // namespace Bedrock::Threading::Burst::Strategy::Execution
