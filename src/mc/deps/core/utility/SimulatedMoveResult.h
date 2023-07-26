#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Agent {

struct SimulatedMoveResult {

public:
    // prevent constructor by default
    SimulatedMoveResult& operator=(SimulatedMoveResult const&) = delete;
    SimulatedMoveResult(SimulatedMoveResult const&)            = delete;
    SimulatedMoveResult()                                      = delete;
};

}; // namespace Util::Agent
