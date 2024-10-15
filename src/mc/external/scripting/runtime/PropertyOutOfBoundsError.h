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

    MCAPI PropertyOutOfBoundsError(std::string const& propertyName, double value_, double minValue_, double maxValue_);

    MCAPI ~PropertyOutOfBoundsError();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct Scripting::PropertyOutOfBoundsError&&);

    MCAPI void* ctor$(std::string const& propertyName, double value_, double minValue_, double maxValue_);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
