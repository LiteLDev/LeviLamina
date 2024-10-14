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
    ValueIterator& operator=(ValueIterator const&);
    ValueIterator();

public:
    // NOLINTBEGIN
    MCAPI explicit ValueIterator(class Json::ValueConstIterator const& other);

    MCAPI ValueIterator(class Json::ValueIterator const& other);

    MCAPI ~ValueIterator();

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
