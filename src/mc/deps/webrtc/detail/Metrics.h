#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct Metrics {
public:
    // prevent constructor by default
    Metrics& operator=(Metrics const&);
    Metrics(Metrics const&);
    Metrics();
};

}; // namespace dcsctp
