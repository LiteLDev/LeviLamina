#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ItemStack;
class ItemUseInventoryTransaction;
class Player;
struct IGameModeMessenger;
namespace GameModeExt { struct MessengerFactory; }
// clang-format on

namespace GameModeExt {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI bool _wrapLegacyTransaction(
    ::Player&                                                   player,
    ::BlockPos const&                                           pos,
    uchar                                                       face,
    ::std::function<bool(::std::optional<::ItemStack>&)> const& tryDestroy,
    ::ItemUseInventoryTransaction&                              transaction
);

MCAPI ::std::unique_ptr<::IGameModeMessenger> createClientMessenger(::Player& player);

MCAPI ::GameModeExt::MessengerFactory createClientMessengerFactory();

MCAPI ::std::unique_ptr<::IGameModeMessenger> createClientMessengerWithServerAuthBlockBreaking(::Player& player);
#endif

MCAPI ::std::unique_ptr<::IGameModeMessenger> createServerMessenger(::Player& player);

MCAPI ::GameModeExt::MessengerFactory createServerMessengerFactory();

MCAPI ::std::unique_ptr<::IGameModeMessenger> createServerMessengerWithServerAuthBlockBreaking(::Player& player);
// NOLINTEND

} // namespace GameModeExt
