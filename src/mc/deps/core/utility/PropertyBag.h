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

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static class PropertyBag& EMPTY();

    // NOLINTEND
};
