#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct RetransmissionErrorCounter {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Clear();

    MCAPI bool Increment(::std::string_view);
    // NOLINTEND
};

} // namespace dcsctp
