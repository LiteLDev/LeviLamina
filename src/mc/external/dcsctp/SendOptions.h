#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct SendOptions {
public:
    // prevent constructor by default
    SendOptions& operator=(SendOptions const&);
    SendOptions(SendOptions const&);
    SendOptions();
};

} // namespace dcsctp
