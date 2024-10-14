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
    ValueIteratorBase& operator=(ValueIteratorBase const&);
    ValueIteratorBase();

public:
    // NOLINTBEGIN
    MCAPI ValueIteratorBase(class Json::ValueIteratorBase const& other);

    MCAPI char const* memberName() const;

    MCAPI ~ValueIteratorBase();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class Json::Value& deref() const;

    MCAPI void increment();

    MCAPI bool isEqual(class Json::ValueIteratorBase const& other) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Json
