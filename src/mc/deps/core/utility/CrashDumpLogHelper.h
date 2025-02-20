#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CrashDumpLogHelper {
// functions
// NOLINTBEGIN
MCAPI void writeStringsToBuffer(::std::vector<::std::string> const& strings, char* buffer, uint64 bufferSize);
// NOLINTEND

} // namespace CrashDumpLogHelper
