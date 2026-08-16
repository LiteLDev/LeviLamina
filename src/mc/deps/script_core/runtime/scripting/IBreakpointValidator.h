#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IBreakpointValidator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBreakpointValidator();

    virtual bool validatePath(::std::string_view const) = 0;
    // NOLINTEND
};

} // namespace Scripting
