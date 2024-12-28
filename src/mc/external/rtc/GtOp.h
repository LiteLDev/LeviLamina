#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::safe_cmp_impl {

struct GtOp {
public:
    // prevent constructor by default
    GtOp& operator=(GtOp const&);
    GtOp(GtOp const&);
    GtOp();
};

} // namespace rtc::safe_cmp_impl
