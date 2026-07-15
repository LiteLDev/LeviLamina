#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::string_to_number_internal {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<int64> ParseSigned(::std::string_view str, int base);

MCNAPI ::std::optional<uint64> ParseUnsigned(::std::string_view str, int base);
// NOLINTEND

} // namespace webrtc::string_to_number_internal
