#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PropertyBag {

public:
    // prevent constructor by default
    PropertyBag& operator=(PropertyBag const&) = delete;
    PropertyBag(PropertyBag const&)            = delete;

public:
    /**
     * @symbol ??0PropertyBag\@\@QEAA\@XZ
     */
    MCAPI PropertyBag(); // NOLINT
    /**
     * @symbol ??0PropertyBag\@\@QEAA\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI PropertyBag(class Json::Value const&); // NOLINT
    /**
     * @symbol ?toJsonValue\@PropertyBag\@\@QEBAAEBVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value const& toJsonValue() const; // NOLINT
    /**
     * @symbol
     * ?toString\@PropertyBag\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const; // NOLINT
    /**
     * @symbol ?EMPTY\@PropertyBag\@\@2V1\@A
     */
    MCAPI static class PropertyBag EMPTY; // NOLINT
};
