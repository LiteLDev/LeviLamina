#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LoopingSoundState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkfa5aff;
    ::ll::UntypedStorage<4, 4> mUnk28d4e8;
    ::ll::UntypedStorage<4, 4> mUnk1a6f03;
    // NOLINTEND

public:
    // prevent constructor by default
    LoopingSoundState& operator=(LoopingSoundState const&);
    LoopingSoundState(LoopingSoundState const&);
    LoopingSoundState();

};
