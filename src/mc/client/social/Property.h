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
    // symbol: ??1Property@Events@Social@@QEAA@XZ
    MCAPI ~Property();

    // NOLINTEND
};

}; // namespace Social::Events
