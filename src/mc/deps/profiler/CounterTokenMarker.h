#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class CounterTokenMarker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk14794f;
    ::ll::UntypedStorage<1, 1>  mUnkde719c;
    ::ll::UntypedStorage<8, 24> mUnkfe03ff;
    // NOLINTEND

public:
    // prevent constructor by default
    CounterTokenMarker& operator=(CounterTokenMarker const&);
    CounterTokenMarker(CounterTokenMarker const&);
    CounterTokenMarker();
};

} // namespace Core::Profile
