#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OffsetsComponent {

public:
    // prevent constructor by default
    OffsetsComponent& operator=(OffsetsComponent const&) = delete;
    OffsetsComponent(OffsetsComponent const&)            = delete;
    OffsetsComponent()                                   = delete;
};
