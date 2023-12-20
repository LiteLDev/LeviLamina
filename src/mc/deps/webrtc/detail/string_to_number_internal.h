#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::string_to_number_internal {
// NOLINTBEGIN
// symbol:
// ?ParseSigned@string_to_number_internal@rtc@@YA?AV?$optional@_J@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@H@Z
MCAPI std::optional<int64> ParseSigned(std::string_view, int);

// symbol:
// ?ParseUnsigned@string_to_number_internal@rtc@@YA?AV?$optional@_K@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@H@Z
MCAPI std::optional<uint64> ParseUnsigned(std::string_view, int);
// NOLINTEND

}; // namespace rtc::string_to_number_internal
