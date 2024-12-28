#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class DcSctpSocketCallbacks {
public:
    // prevent constructor by default
    DcSctpSocketCallbacks& operator=(DcSctpSocketCallbacks const&);
    DcSctpSocketCallbacks(DcSctpSocketCallbacks const&);
    DcSctpSocketCallbacks();
};

} // namespace dcsctp
