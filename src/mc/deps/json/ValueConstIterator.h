#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/ValueIteratorBase.h"

namespace Json {

class ValueConstIterator : public ValueIteratorBase {
public:
    using ValueIteratorBase::ValueIteratorBase;

public:
    // NOLINTBEGIN
    // symbol: ??1ValueConstIterator@Json@@QEAA@XZ
    MCAPI ~ValueConstIterator();

    // NOLINTEND
};

}; // namespace Json
