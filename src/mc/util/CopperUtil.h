#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace CopperUtil {
// NOLINTBEGIN
MCAPI void trySendWaxingTelemetryEventToClient(class Player& player, class BlockLegacy const& block);
// NOLINTEND

// thunks
// NOLINTBEGIN
MCAPI class mce::Color const& WAX_OFF_COLOR();

MCAPI class mce::Color const& WAX_ON_COLOR();
// NOLINTEND

}; // namespace CopperUtil
