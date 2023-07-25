#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PropertyBag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYBAG
public:
    PropertyBag& operator=(PropertyBag const&) = delete;
    PropertyBag(PropertyBag const&)            = delete;
#endif

public:
    /**
     * @symbol ??0PropertyBag\@\@QEAA\@XZ
     */
    MCAPI PropertyBag();
    /**
     * @symbol ??0PropertyBag\@\@QEAA\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI PropertyBag(class Json::Value const&);
    /**
     * @symbol ?toJsonValue\@PropertyBag\@\@QEBAAEBVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value const& toJsonValue() const;
    /**
     * @symbol
     * ?toString\@PropertyBag\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @symbol ?EMPTY\@PropertyBag\@\@2V1\@A
     */
    MCAPI static class PropertyBag EMPTY;
};
