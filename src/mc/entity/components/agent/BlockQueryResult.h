#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct BlockQueryResult {

public:
    // prevent constructor by default
    BlockQueryResult& operator=(BlockQueryResult const&) = delete;
    BlockQueryResult(BlockQueryResult const&)            = delete;
    BlockQueryResult()                                   = delete;
};

}; // namespace AgentComponents
