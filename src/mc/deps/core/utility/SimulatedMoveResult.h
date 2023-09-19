#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Agent {

struct SimulatedMoveResult {
public:
    // prevent constructor by default
    SimulatedMoveResult& operator=(SimulatedMoveResult const&);
    SimulatedMoveResult(SimulatedMoveResult const&);
    SimulatedMoveResult();
};

}; // namespace Util::Agent
