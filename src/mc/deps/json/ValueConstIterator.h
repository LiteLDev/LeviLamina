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
    // symbol: ??1ValueConstIterator@Json@@QEAA@XZ
    MCAPI ~ValueConstIterator();

    // NOLINTEND
};

}; // namespace Json
