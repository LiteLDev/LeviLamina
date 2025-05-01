#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::string_to_number_internal {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<int64> ParseSigned(::std::string_view, int);

MCNAPI ::std::optional<uint64> ParseUnsigned(::std::string_view, int);
// NOLINTEND

} // namespace rtc::string_to_number_internal
