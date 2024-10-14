#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class LocklessUint32_t {
public:
    // prevent constructor by default
    LocklessUint32_t& operator=(LocklessUint32_t const&);
    LocklessUint32_t(LocklessUint32_t const&);

public:
    // NOLINTBEGIN
    MCAPI uint Decrement();

    MCAPI uint Increment();

    MCAPI LocklessUint32_t();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace RakNet
