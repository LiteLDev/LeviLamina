#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace snappy::internal {
// NOLINTBEGIN
MCAPI char* CompressFragment(char const* input, uint64, char* op, ushort* table, int);
// NOLINTEND

}; // namespace snappy::internal
