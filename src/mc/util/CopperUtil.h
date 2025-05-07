#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
class HashedString;
class Player;
namespace mce { class Color; }
// clang-format on

namespace CopperUtil {
// functions
// NOLINTBEGIN
MCNAPI void trySendWaxingTelemetryEventToClient(::Player& player, ::BlockLegacy const& block);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::mce::Color const& WAX_OFF_COLOR();

MCNAPI ::mce::Color const& WAX_ON_COLOR();

MCNAPI ::HashedString const& nullname();
// NOLINTEND

} // namespace CopperUtil
