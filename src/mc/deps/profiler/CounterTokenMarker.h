#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class CounterTokenMarker {
public:
    // prevent constructor by default
    CounterTokenMarker& operator=(CounterTokenMarker const&);
    CounterTokenMarker(CounterTokenMarker const&);
    CounterTokenMarker();
};

}; // namespace Core::Profile
