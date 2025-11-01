#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct uint24_t {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkaad864;
    // NOLINTEND

public:
    // prevent constructor by default
    uint24_t& operator=(uint24_t const&);
    uint24_t(uint24_t const&);
    uint24_t();

};

}
