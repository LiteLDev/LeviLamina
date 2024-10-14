#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class Property {
public:
    // prevent constructor by default
    Property& operator=(Property const&);
    Property(Property const&);
    Property();

public:
    // NOLINTBEGIN
    MCAPI ~Property();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Social::Events
