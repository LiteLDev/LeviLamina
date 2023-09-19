#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OffsetsComponent {
public:
    // prevent constructor by default
    OffsetsComponent& operator=(OffsetsComponent const&);
    OffsetsComponent(OffsetsComponent const&);
    OffsetsComponent();
};
