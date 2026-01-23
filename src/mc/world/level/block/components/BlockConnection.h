#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/world/level/block/components/ConnectionID.h"

namespace BlockConnection {
// static variables
// NOLINTBEGIN
MCAPI ::Bedrock::EnumSet<::ConnectionID, 4> const& FENCE_MASK();

MCAPI ::Bedrock::EnumSet<::ConnectionID, 4> const& NONE_MASK();

MCAPI ::Bedrock::EnumSet<::ConnectionID, 4> const& WALL_AND_THIN_FENCES_MASK();
// NOLINTEND

} // namespace BlockConnection
