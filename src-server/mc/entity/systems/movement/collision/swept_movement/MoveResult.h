#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SweptMovement {

struct MoveResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkb86c17;
    ::ll::UntypedStorage<4, 4>  mUnk9ecc5b;
    ::ll::UntypedStorage<4, 24> mUnkbb5c5e;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveResult& operator=(MoveResult const&);
    MoveResult(MoveResult const&);
    MoveResult();
};

} // namespace SweptMovement
