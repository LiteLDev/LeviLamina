#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ComponentComparer {
// functions
// NOLINTBEGIN
MCAPI_C ::std::string getDiffMessage(char const* valueName, ::std::string const& lhs, ::std::string const& rhs);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string const& GETDIFF_NOT_IMPLEMENTED();

MCAPI ::std::string const& TOSTRING_NOT_IMPLEMENTED();
// NOLINTEND

} // namespace ComponentComparer
