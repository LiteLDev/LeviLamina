#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct StreamScheduler {
public:
    // StreamScheduler inner types declare
    // clang-format off
    struct ActiveStreamComparator;
    struct InverseWeight;
    struct Stream;
    struct StreamProducer;
    struct VirtualTime;
    // clang-format on

    // StreamScheduler inner types define
    struct ActiveStreamComparator {};

    struct InverseWeight {};

    struct Stream {};

    struct StreamProducer {};

    struct VirtualTime {};
};

} // namespace dcsctp
