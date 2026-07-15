#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class Duration {
public:
    // Duration inner types declare
    // clang-format off
    class HiRep;
    // clang-format on

    // Duration inner types define
    class HiRep {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk74edca;
        ::ll::UntypedStorage<4, 4> mUnkb9c0f8;
        // NOLINTEND

    public:
        // prevent constructor by default
        HiRep& operator=(HiRep const&);
        HiRep(HiRep const&);
        HiRep();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk5b0e7d;
    ::ll::UntypedStorage<4, 4> mUnk54c27b;
    // NOLINTEND

public:
    // prevent constructor by default
    Duration& operator=(Duration const&);
    Duration(Duration const&);
    Duration();
};

} // namespace absl
