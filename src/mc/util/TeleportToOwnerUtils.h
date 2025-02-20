#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Vec3;
struct TeleportToOwnerParameters;
// clang-format on

namespace TeleportToOwnerUtils {
// functions
// NOLINTBEGIN
MCAPI bool canTeleport(::Mob const& mob);

MCAPI ::std::optional<::Vec3>
tryToGetTeleportPosition(::Mob const& mob, ::Mob const& owner, ::TeleportToOwnerParameters const& teleportParameters);
// NOLINTEND

} // namespace TeleportToOwnerUtils
