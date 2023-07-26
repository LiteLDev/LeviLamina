#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PassengersToPositionComponent {

public:
    // prevent constructor by default
    PassengersToPositionComponent& operator=(PassengersToPositionComponent const&) = delete;
    PassengersToPositionComponent(PassengersToPositionComponent const&)            = delete;
    PassengersToPositionComponent()                                                = delete;
};
