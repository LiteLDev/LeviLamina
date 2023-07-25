#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct uint24_t {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_UINT24_T
public:
    uint24_t& operator=(uint24_t const&) = delete;
    uint24_t(uint24_t const&)            = delete;
    uint24_t()                           = delete;
#endif

public:
};

}; // namespace RakNet
