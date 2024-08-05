#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameModeExt {
// NOLINTBEGIN
MCAPI std::unique_ptr<struct IGameModeMessenger> createDefaultMessenger(class Player& player);
// NOLINTEND

}; // namespace GameModeExt
