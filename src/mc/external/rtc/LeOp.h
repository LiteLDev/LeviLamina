#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::safe_cmp_impl {

struct LeOp {
public:
    // prevent constructor by default
    LeOp& operator=(LeOp const&);
    LeOp(LeOp const&);
    LeOp();
};

} // namespace rtc::safe_cmp_impl
