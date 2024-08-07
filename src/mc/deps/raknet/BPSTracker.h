#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class BPSTracker {
public:
    // BPSTracker inner types declare
    // clang-format off
    struct TimeAndValue2;
    // clang-format on

    // BPSTracker inner types define
    struct TimeAndValue2 {
    public:
        // prevent constructor by default
        TimeAndValue2& operator=(TimeAndValue2 const&);
        TimeAndValue2(TimeAndValue2 const&);

    public:
        // NOLINTBEGIN
        MCAPI TimeAndValue2();

        MCAPI ~TimeAndValue2();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BPSTracker& operator=(BPSTracker const&);
    BPSTracker(BPSTracker const&);

public:
    // NOLINTBEGIN
    MCAPI BPSTracker();

    MCAPI ~BPSTracker();

    // NOLINTEND
};

}; // namespace RakNet
