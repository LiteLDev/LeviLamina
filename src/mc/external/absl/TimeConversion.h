#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

struct TimeConversion {
public:
    // TimeConversion inner types define
    enum class Kind : int {
        Unique   = 0,
        Skipped  = 1,
        Repeated = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkc6443c;
    ::ll::UntypedStorage<4, 12> mUnk5be42b;
    ::ll::UntypedStorage<4, 12> mUnk66d348;
    ::ll::UntypedStorage<4, 4>  mUnk2d4dbd;
    ::ll::UntypedStorage<1, 1>  mUnkff2187;
    // NOLINTEND

public:
    // prevent constructor by default
    TimeConversion& operator=(TimeConversion const&);
    TimeConversion(TimeConversion const&);
    TimeConversion();
};

} // namespace absl
