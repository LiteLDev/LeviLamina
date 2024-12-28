#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd {

struct no_value_t {
public:
    // prevent constructor by default
    no_value_t& operator=(no_value_t const&);
    no_value_t(no_value_t const&);
    no_value_t();
};

} // namespace brstd
