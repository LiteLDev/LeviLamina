#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct PropertyOutOfBoundsError {
public:
    // prevent constructor by default
    PropertyOutOfBoundsError& operator=(PropertyOutOfBoundsError const&);
    PropertyOutOfBoundsError(PropertyOutOfBoundsError const&);
    PropertyOutOfBoundsError();

public:
    // NOLINTBEGIN
    MCAPI PropertyOutOfBoundsError(struct Scripting::PropertyOutOfBoundsError&&);

    MCAPI PropertyOutOfBoundsError(std::string const&, double, double, double);

    MCAPI ~PropertyOutOfBoundsError();

    // NOLINTEND
};

}; // namespace Scripting
