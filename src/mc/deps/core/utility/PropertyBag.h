#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PropertyBag {
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

    MCAPI static class PropertyBag EMPTY;

    // NOLINTEND
};
