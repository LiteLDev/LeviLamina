#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PassengerTickRequestComponent {

public:
    // prevent constructor by default
    PassengerTickRequestComponent& operator=(PassengerTickRequestComponent const&) = delete;
    PassengerTickRequestComponent(PassengerTickRequestComponent const&)            = delete;
    PassengerTickRequestComponent()                                                = delete;
};
