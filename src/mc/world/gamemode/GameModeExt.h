#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
struct IGameModeMessenger;
struct IGameModeTimer;
// clang-format on

namespace GameModeExt {
// functions
// NOLINTBEGIN
MCNAPI ::std::unique_ptr<::IGameModeMessenger> createDefaultMessenger(::Player& player);

MCNAPI ::std::unique_ptr<::IGameModeTimer> createDefaultTimer(::Player const& player);
// NOLINTEND

} // namespace GameModeExt
