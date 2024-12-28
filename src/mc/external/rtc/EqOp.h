#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::safe_cmp_impl {

struct EqOp {
public:
    // prevent constructor by default
    EqOp& operator=(EqOp const&);
    EqOp(EqOp const&);
    EqOp();
};

} // namespace rtc::safe_cmp_impl
