#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::safe_cmp_impl {

struct LtOp {
public:
    // prevent constructor by default
    LtOp& operator=(LtOp const&);
    LtOp(LtOp const&);
    LtOp();
};

} // namespace rtc::safe_cmp_impl
