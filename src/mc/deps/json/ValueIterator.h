#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/ValueIteratorBase.h"

// auto generated forward declare list
// clang-format off
namespace Json { class ValueConstIterator; }
// clang-format on

namespace Json {

class ValueIterator : public ValueIteratorBase {

public:
    // NOLINTBEGIN
    // symbol: ??0ValueIterator@Json@@QEAA@AEBVValueConstIterator@1@@Z
    MCAPI explicit ValueIterator(class Json::ValueConstIterator const& other);

    // symbol: ??0ValueIterator@Json@@QEAA@AEBV01@@Z
    MCAPI ValueIterator(class Json::ValueIterator const& other);

    // symbol: ??1ValueIterator@Json@@QEAA@XZ
    MCAPI ~ValueIterator();

    // NOLINTEND
};

}; // namespace Json
