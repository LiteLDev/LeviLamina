#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class ValueIteratorBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSON_VALUEITERATORBASE
public:
    ValueIteratorBase& operator=(ValueIteratorBase const&) = delete;
    ValueIteratorBase()                                    = delete;
#endif

public:
    /**
     * @symbol ??0ValueIteratorBase\@Json\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI ValueIteratorBase(class Json::ValueIteratorBase const&);
    /**
     * @symbol ?key\@ValueIteratorBase\@Json\@\@QEBA?AVValue\@2\@XZ
     */
    MCAPI class Json::Value key() const;
    /**
     * @symbol ?memberName\@ValueIteratorBase\@Json\@\@QEBAPEBDXZ
     */
    MCAPI char const* memberName() const;

    // protected:
    /**
     * @symbol ?deref\@ValueIteratorBase\@Json\@\@IEBAAEAVValue\@2\@XZ
     */
    MCAPI class Json::Value& deref() const;
    /**
     * @symbol ?increment\@ValueIteratorBase\@Json\@\@IEAAXXZ
     */
    MCAPI void increment();
    /**
     * @symbol ?isEqual\@ValueIteratorBase\@Json\@\@IEBA_NAEBV12\@\@Z
     */
    MCAPI bool isEqual(class Json::ValueIteratorBase const&) const;

protected:
};

}; // namespace Json
