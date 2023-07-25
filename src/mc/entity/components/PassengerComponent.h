#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PassengerComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PASSENGERCOMPONENT
public:
    PassengerComponent& operator=(PassengerComponent const&) = delete;
    PassengerComponent(PassengerComponent const&)            = delete;
    PassengerComponent()                                     = delete;
#endif

public:
};
