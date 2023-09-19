#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoatPaddleComponent {
public:
    // prevent constructor by default
    BoatPaddleComponent& operator=(BoatPaddleComponent const&);
    BoatPaddleComponent(BoatPaddleComponent const&);
    BoatPaddleComponent();
};
