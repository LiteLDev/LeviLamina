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
#ifdef LL_PLAT_C
MCAPI ::std::unique_ptr<::IGameModeMessenger> createClientMessenger(::Player& player);

MCAPI ::std::unique_ptr<::IGameModeMessenger> createClientMessengerWithServerAuthBlockBreaking(::Player& player);
#endif

MCAPI ::std::unique_ptr<::IGameModeTimer> createDefaultTimer(::Player const& player);

MCAPI ::std::unique_ptr<::IGameModeMessenger> createServerMessenger(::Player& player);

MCAPI ::std::unique_ptr<::IGameModeMessenger> createServerMessengerWithServerAuthBlockBreaking(::Player& player);
// NOLINTEND

} // namespace GameModeExt
