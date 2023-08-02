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
    /**
     * @symbol ??0ValueIterator\@Json\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ValueIterator(class Json::ValueIterator const&);
    /**
     * @symbol ??0ValueIterator\@Json\@\@QEAA\@AEBVValueConstIterator\@1\@\@Z
     */
    MCAPI ValueIterator(class Json::ValueConstIterator const&);
    // NOLINTEND
};

}; // namespace Json
