#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class ValueIteratorBase {

public:
    // prevent constructor by default
    ValueIteratorBase& operator=(ValueIteratorBase const&) = delete;
    ValueIteratorBase()                                    = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
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
    // NOLINTEND
};

}; // namespace Json
