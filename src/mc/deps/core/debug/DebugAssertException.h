#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DebugAssertException {
public:
    // prevent constructor by default
    DebugAssertException& operator=(DebugAssertException const&);
    DebugAssertException();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DebugAssertException();

    // vIndex: 1
    virtual char const* what() const;

    MCAPI DebugAssertException(class DebugAssertException const& e);

    MCAPI DebugAssertException(char const* desc, char const* arg, int line, char const* file, char const* function);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI char const* what$() const;

    MCAPI static char const* const& WHAT();

    // NOLINTEND
};
