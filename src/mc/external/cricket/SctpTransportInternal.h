#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class SctpTransportInternal {
public:
    // prevent constructor by default
    SctpTransportInternal& operator=(SctpTransportInternal const&);
    SctpTransportInternal(SctpTransportInternal const&);
    SctpTransportInternal();
};

} // namespace cricket
