#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class ValueConstIterator; }
// clang-format on

namespace Json {

class ValueIterator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSON_VALUEITERATOR
public:
    ValueIterator& operator=(ValueIterator const&) = delete;
    ValueIterator()                                = delete;
#endif

public:
    /**
     * @symbol ??0ValueIterator\@Json\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ValueIterator(class Json::ValueIterator const&);
    /**
     * @symbol ??0ValueIterator\@Json\@\@QEAA\@AEBVValueConstIterator\@1\@\@Z
     */
    MCAPI ValueIterator(class Json::ValueConstIterator const&);
};

}; // namespace Json
