#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScopedAutoreleasePool {
public:
    // prevent constructor by default
    ScopedAutoreleasePool& operator=(ScopedAutoreleasePool const&);
    ScopedAutoreleasePool(ScopedAutoreleasePool const&);

public:
    // NOLINTBEGIN
    MCAPI ScopedAutoreleasePool();

    MCAPI void drain();

    MCAPI ~ScopedAutoreleasePool();

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
