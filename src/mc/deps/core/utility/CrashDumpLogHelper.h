#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CrashDumpLogHelper {
// NOLINTBEGIN
MCAPI void writeStringsToBuffer(std::vector<std::string> const&, char*, uint64);
// NOLINTEND

}; // namespace CrashDumpLogHelper
