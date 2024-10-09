#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct BlockQueryResult {
public:
    // prevent constructor by default
    BlockQueryResult& operator=(BlockQueryResult const&);
    BlockQueryResult(BlockQueryResult const&);
    BlockQueryResult();
};

}; // namespace AgentComponents
