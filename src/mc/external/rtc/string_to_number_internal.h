#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::string_to_number_internal {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<int64> ParseSigned(::std::string_view, int);

MCAPI ::std::optional<uint64> ParseUnsigned(::std::string_view, int);
// NOLINTEND

} // namespace rtc::string_to_number_internal
