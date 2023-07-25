#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class CounterTokenMarker {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_PROFILE_COUNTERTOKENMARKER
public:
    CounterTokenMarker& operator=(CounterTokenMarker const&) = delete;
    CounterTokenMarker(CounterTokenMarker const&)            = delete;
    CounterTokenMarker()                                     = delete;
#endif

public:
};

}; // namespace Core::Profile
