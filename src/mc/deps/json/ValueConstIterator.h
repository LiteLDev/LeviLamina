#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class ValueConstIterator {

public:
    // prevent constructor by default
    ValueConstIterator& operator=(ValueConstIterator const&) = delete;
    ValueConstIterator(ValueConstIterator const&)            = delete;
    ValueConstIterator()                                     = delete;
};

}; // namespace Json
