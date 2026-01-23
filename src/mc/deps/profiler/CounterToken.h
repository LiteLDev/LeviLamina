#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class CounterToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk974942;
    ::ll::UntypedStorage<1, 1> mUnk45b865;
    ::ll::UntypedStorage<1, 1> mUnkd6b65d;
    // NOLINTEND

public:
    // prevent constructor by default
    CounterToken& operator=(CounterToken const&);
    CounterToken(CounterToken const&);
    CounterToken();
};

} // namespace Core::Profile
