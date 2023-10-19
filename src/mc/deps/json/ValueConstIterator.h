#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/ValueIteratorBase.h"

namespace Json {

class ValueConstIterator : public ValueIteratorBase {
    public:
        using ValueIteratorBase::ValueIteratorBase;
};

}; // namespace Json
