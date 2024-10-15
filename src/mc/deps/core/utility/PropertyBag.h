#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PropertyBag {
public:
    Json::Value mJsonValue;     // this+0x0
    int         mChangeVersion; // this+0x10

public:
    // prevent constructor by default
    PropertyBag& operator=(PropertyBag const&);
    PropertyBag(PropertyBag const&);

public:
    // NOLINTBEGIN
    MCAPI PropertyBag();

    MCAPI explicit PropertyBag(class Json::Value const& jsonValue);

    MCAPI class Json::Value const& toJsonValue() const;

    MCAPI std::string toString() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Json::Value const& jsonValue);

    MCAPI void* ctor$();

    MCAPI static class PropertyBag& EMPTY();

    // NOLINTEND
};
