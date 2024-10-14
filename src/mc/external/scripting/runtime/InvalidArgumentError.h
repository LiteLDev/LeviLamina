#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct InvalidArgumentError {
public:
    // prevent constructor by default
    InvalidArgumentError& operator=(InvalidArgumentError const&);
    InvalidArgumentError(InvalidArgumentError const&);
    InvalidArgumentError();

public:
    // NOLINTBEGIN
    MCAPI InvalidArgumentError(std::string const& message_, int index_);

    MCAPI ~InvalidArgumentError();

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

}; // namespace Scripting
