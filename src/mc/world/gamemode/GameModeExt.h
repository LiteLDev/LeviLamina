#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
struct IGameModeMessenger;
// clang-format on

namespace GameModeExt {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::unique_ptr<::IGameModeMessenger> createClientMessenger(::Player& player);

MCNAPI ::std::unique_ptr<::IGameModeMessenger> createClientMessengerWithServerAuthBlockBreaking(::Player& player);
#endif

MCNAPI ::std::unique_ptr<::IGameModeMessenger> createServerMessenger(::Player& player);

MCNAPI ::std::unique_ptr<::IGameModeMessenger> createServerMessengerWithServerAuthBlockBreaking(::Player& player);
// NOLINTEND

} // namespace GameModeExt
