#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class CounterTokenMarker {

public:
    // prevent constructor by default
    CounterTokenMarker& operator=(CounterTokenMarker const&) = delete;
    CounterTokenMarker(CounterTokenMarker const&)            = delete;
    CounterTokenMarker()                                     = delete;
};

}; // namespace Core::Profile
