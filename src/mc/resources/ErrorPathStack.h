#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ErrorPathStack {
public:
    // prevent constructor by default
    ErrorPathStack& operator=(ErrorPathStack const&);
    ErrorPathStack(ErrorPathStack const&);
    ErrorPathStack();

public:
    // NOLINTBEGIN
    MCAPI ErrorPathStack(std::vector<std::string>& errorPath, std::string const& element);

    MCAPI ~ErrorPathStack();

    // NOLINTEND
};
