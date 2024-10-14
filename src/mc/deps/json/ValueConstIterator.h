#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class ValueConstIterator {
public:
    // prevent constructor by default
    ValueConstIterator& operator=(ValueConstIterator const&);
    ValueConstIterator(ValueConstIterator const&);
    ValueConstIterator();

public:
    // NOLINTBEGIN
    MCAPI ~ValueConstIterator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Json
