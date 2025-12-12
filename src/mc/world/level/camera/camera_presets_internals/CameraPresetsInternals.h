#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraPresetsInternals {
// functions
// NOLINTBEGIN
MCNAPI void
_doContentError(::std::string const& message, ::std::string_view filename, ::std::vector<::std::string> const& errors);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::vector<::std::string>& ALLOWED_MC_EASE_TARGET();

MCNAPI ::std::vector<::std::string>& ALLOWED_MC_INHERIT();
// NOLINTEND

} // namespace CameraPresetsInternals
