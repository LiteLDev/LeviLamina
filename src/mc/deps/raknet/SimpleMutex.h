#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SimpleMutex {
public:
    // prevent constructor by default
    SimpleMutex& operator=(SimpleMutex const&);
    SimpleMutex(SimpleMutex const&);

public:
    // NOLINTBEGIN
    MCAPI void Lock();

    MCAPI SimpleMutex();

    MCAPI void Unlock();

    MCAPI ~SimpleMutex();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace RakNet
