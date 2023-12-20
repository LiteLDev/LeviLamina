#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class DcSctpSocketInterface {
public:
    // prevent constructor by default
    DcSctpSocketInterface& operator=(DcSctpSocketInterface const&);
    DcSctpSocketInterface(DcSctpSocketInterface const&);
    DcSctpSocketInterface();
};

}; // namespace dcsctp
