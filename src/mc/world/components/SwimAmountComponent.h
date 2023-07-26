#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SwimAmountComponent {

public:
    // prevent constructor by default
    SwimAmountComponent& operator=(SwimAmountComponent const&) = delete;
    SwimAmountComponent(SwimAmountComponent const&)            = delete;
    SwimAmountComponent()                                      = delete;
};
