#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class ValueConstIterator; }
// clang-format on

namespace Json {

class ValueIterator {

public:
    // prevent constructor by default
    ValueIterator& operator=(ValueIterator const&) = delete;
    ValueIterator()                                = delete;

public:
    /**
     * @symbol ??0ValueIterator\@Json\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ValueIterator(class Json::ValueIterator const&); // NOLINT
    /**
     * @symbol ??0ValueIterator\@Json\@\@QEAA\@AEBVValueConstIterator\@1\@\@Z
     */
    MCAPI ValueIterator(class Json::ValueConstIterator const&); // NOLINT
};

}; // namespace Json
