#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ComponentComparer {
// functions
// NOLINTBEGIN
MCNAPI_C ::std::string getDiffMessage(char const* valueName, ::std::string const& lhs, ::std::string const& rhs);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& GETDIFF_NOT_IMPLEMENTED();

MCNAPI ::std::string const& TOSTRING_NOT_IMPLEMENTED();
// NOLINTEND

} // namespace ComponentComparer
