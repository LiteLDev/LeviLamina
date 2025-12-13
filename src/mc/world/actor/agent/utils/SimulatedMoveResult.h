#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Agent {

struct SimulatedMoveResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkbe6546;
    ::ll::UntypedStorage<4, 4> mUnkcc7657;
    ::ll::UntypedStorage<1, 1> mUnkfd5051;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulatedMoveResult& operator=(SimulatedMoveResult const&);
    SimulatedMoveResult(SimulatedMoveResult const&);
    SimulatedMoveResult();
};

} // namespace Util::Agent
