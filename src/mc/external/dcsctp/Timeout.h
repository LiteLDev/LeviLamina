#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class Timeout {
public:
    // prevent constructor by default
    Timeout& operator=(Timeout const&);
    Timeout(Timeout const&);
    Timeout();
};

} // namespace dcsctp
