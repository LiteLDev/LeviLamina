#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::safe_cmp_impl {

struct GeOp {
public:
    // prevent constructor by default
    GeOp& operator=(GeOp const&);
    GeOp(GeOp const&);
    GeOp();
};

} // namespace rtc::safe_cmp_impl
