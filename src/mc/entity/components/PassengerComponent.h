#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PassengerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkcfa15d;
    // NOLINTEND

public:
    // prevent constructor by default
    PassengerComponent& operator=(PassengerComponent const&);
    PassengerComponent(PassengerComponent const&);
    PassengerComponent();
};
