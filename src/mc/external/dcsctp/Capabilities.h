#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct Capabilities {
public:
    // prevent constructor by default
    Capabilities& operator=(Capabilities const&);
    Capabilities(Capabilities const&);
    Capabilities();
};

} // namespace dcsctp
