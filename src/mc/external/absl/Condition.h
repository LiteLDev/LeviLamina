#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class Condition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mUnk847220;
    ::ll::UntypedStorage<8, 8>  mUnk81d8bb;
    ::ll::UntypedStorage<8, 8>  mUnk51fac9;
    // NOLINTEND

public:
    // prevent constructor by default
    Condition& operator=(Condition const&);
    Condition(Condition const&);
    Condition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool AlwaysTrue(::absl::Condition const*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::absl::Condition const& kTrue();
    // NOLINTEND
};

} // namespace absl
