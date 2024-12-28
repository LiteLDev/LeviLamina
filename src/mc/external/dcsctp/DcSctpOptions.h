#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct DcSctpOptions {
public:
    // prevent constructor by default
    DcSctpOptions& operator=(DcSctpOptions const&);
    DcSctpOptions(DcSctpOptions const&);
    DcSctpOptions();
};

} // namespace dcsctp
