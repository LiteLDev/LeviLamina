#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedController; }
// clang-format on

namespace PlayerCapabilities {
// NOLINTBEGIN
MCAPI std::unique_ptr<struct PlayerCapabilities::ISharedController> createController(class Level const& level);
// NOLINTEND

}; // namespace PlayerCapabilities
