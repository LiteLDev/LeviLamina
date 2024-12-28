#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoatPaddleComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 40> mUnk81a45e;
    ::ll::UntypedStorage<8, 8>  mUnkb08ad7;
    // NOLINTEND

public:
    // prevent constructor by default
    BoatPaddleComponent& operator=(BoatPaddleComponent const&);
    BoatPaddleComponent(BoatPaddleComponent const&);
    BoatPaddleComponent();
};
