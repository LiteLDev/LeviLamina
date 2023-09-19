#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct uint24_t {
public:
    // prevent constructor by default
    uint24_t& operator=(uint24_t const&);
    uint24_t(uint24_t const&);
    uint24_t();
};

}; // namespace RakNet
