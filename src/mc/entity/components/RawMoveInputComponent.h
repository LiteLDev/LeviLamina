#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RawMoveInputComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 40> mUnk1cf999;
    ::ll::UntypedStorage<4, 8>  mUnk551b01;
    // NOLINTEND

public:
    // prevent constructor by default
    RawMoveInputComponent& operator=(RawMoveInputComponent const&);
    RawMoveInputComponent(RawMoveInputComponent const&);
    RawMoveInputComponent();
};
