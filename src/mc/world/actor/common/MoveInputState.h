#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveInputState {
public:
    // prevent constructor by default
    MoveInputState& operator=(MoveInputState const&);
    MoveInputState(MoveInputState const&);
    MoveInputState();

public:
    // NOLINTBEGIN
    // symbol: ?wantsSneak@MoveInputState@@QEBA_NXZ
    MCAPI bool wantsSneak() const;

    // NOLINTEND
};
