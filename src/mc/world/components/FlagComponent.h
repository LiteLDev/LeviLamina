#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class FlagComponent {

public:
    // prevent constructor by default
    FlagComponent& operator=(FlagComponent const&) = delete;
    FlagComponent(FlagComponent const&)            = delete;
    FlagComponent()                                = delete;
};
