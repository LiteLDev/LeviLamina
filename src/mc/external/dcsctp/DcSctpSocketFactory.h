#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class DcSctpSocketFactory {
public:
    // prevent constructor by default
    DcSctpSocketFactory& operator=(DcSctpSocketFactory const&);
    DcSctpSocketFactory(DcSctpSocketFactory const&);
    DcSctpSocketFactory();
};

} // namespace dcsctp
