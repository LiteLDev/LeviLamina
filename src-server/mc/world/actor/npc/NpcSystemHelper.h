#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace NpcComponents { struct LeaveMenuCountdown; }
// clang-format on

namespace NpcSystemHelper {
// functions
// NOLINTBEGIN
MCNAPI void sendClosePacket(::EntityContext& entity, ::NpcComponents::LeaveMenuCountdown const& countDown);
// NOLINTEND

} // namespace NpcSystemHelper
