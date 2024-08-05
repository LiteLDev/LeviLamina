#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentOutOfBoundsError {
public:
    // prevent constructor by default
    ArgumentOutOfBoundsError& operator=(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError();

public:
    // NOLINTBEGIN
    MCAPI ArgumentOutOfBoundsError(struct Scripting::ArgumentOutOfBoundsError&&);

    MCAPI ArgumentOutOfBoundsError(std::string const&, double, double, double);

    MCAPI ~ArgumentOutOfBoundsError();

    // NOLINTEND
};

}; // namespace Scripting
