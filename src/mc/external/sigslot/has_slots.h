#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sigslot {

template <typename T0>
class has_slots {
public:
    // prevent constructor by default
    has_slots& operator=(has_slots const&);
    has_slots(has_slots const&);
    has_slots();
};

} // namespace sigslot
