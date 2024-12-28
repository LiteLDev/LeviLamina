#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct sorted_unique_t {
public:
    // prevent constructor by default
    sorted_unique_t& operator=(sorted_unique_t const&);
    sorted_unique_t(sorted_unique_t const&);
    sorted_unique_t();
};

} // namespace webrtc
