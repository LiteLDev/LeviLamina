#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SweptMovement {

struct MoveResult {
public:
    // prevent constructor by default
    MoveResult& operator=(MoveResult const&);
    MoveResult(MoveResult const&);
    MoveResult();
};

}; // namespace SweptMovement
