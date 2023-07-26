#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PassengerComponent {

public:
    // prevent constructor by default
    PassengerComponent& operator=(PassengerComponent const&) = delete;
    PassengerComponent(PassengerComponent const&)            = delete;
    PassengerComponent()                                     = delete;
};
