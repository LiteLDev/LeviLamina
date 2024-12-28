#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PaintingFlagComponent {
public:
    // prevent constructor by default
    PaintingFlagComponent& operator=(PaintingFlagComponent const&);
    PaintingFlagComponent(PaintingFlagComponent const&);
    PaintingFlagComponent();
};
