#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IBreakpointValidator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBreakpointValidator() = default;

    virtual bool validatePath(::std::string_view const) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
