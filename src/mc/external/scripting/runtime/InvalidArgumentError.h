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
};

}; // namespace Scripting
