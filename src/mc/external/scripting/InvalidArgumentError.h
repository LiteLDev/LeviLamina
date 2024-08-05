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
    MCAPI InvalidArgumentError(std::string const&, int);

    MCAPI ~InvalidArgumentError();

    // NOLINTEND
};

}; // namespace Scripting
