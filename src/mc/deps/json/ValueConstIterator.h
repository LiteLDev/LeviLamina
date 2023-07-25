#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class ValueConstIterator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSON_VALUECONSTITERATOR
public:
    ValueConstIterator& operator=(ValueConstIterator const&) = delete;
    ValueConstIterator(ValueConstIterator const&)            = delete;
    ValueConstIterator()                                     = delete;
#endif

public:
};

}; // namespace Json
