#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Agent {

struct SimulatedMoveResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UTIL_AGENT_SIMULATEDMOVERESULT
public:
    SimulatedMoveResult& operator=(SimulatedMoveResult const&) = delete;
    SimulatedMoveResult(SimulatedMoveResult const&)            = delete;
    SimulatedMoveResult()                                      = delete;
#endif

public:
};

}; // namespace Util::Agent
