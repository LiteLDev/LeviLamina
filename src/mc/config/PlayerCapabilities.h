#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/ChatRestrictionLevel.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedController; }
// clang-format on

namespace PlayerCapabilities {
// NOLINTBEGIN
// symbol:
// ?createController@PlayerCapabilities@@YA?AV?$unique_ptr@UISharedController@PlayerCapabilities@@U?$default_delete@UISharedController@PlayerCapabilities@@@std@@@std@@AEBVLevel@@@Z
MCAPI std::unique_ptr<struct PlayerCapabilities::ISharedController> createController(class Level const& level);
// NOLINTEND

}; // namespace PlayerCapabilities
