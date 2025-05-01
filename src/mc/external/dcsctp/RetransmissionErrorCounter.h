#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct RetransmissionErrorCounter {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI bool Increment(::std::string_view);
    // NOLINTEND
};

} // namespace dcsctp
