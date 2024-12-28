#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct TransportOptions {
public:
    // prevent constructor by default
    TransportOptions& operator=(TransportOptions const&);
    TransportOptions(TransportOptions const&);
    TransportOptions();
};

} // namespace cricket
