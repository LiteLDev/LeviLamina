#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ItemStackRequestActionMineBlock;
class ItemStackRequestData;
class PlayerBlockActions;
class ServerPlayer;
class TextFilteringProcessor;
// clang-format on

namespace ServerPlayerBlockUseHandler {
// functions
// NOLINTBEGIN
MCAPI bool isValidSourceRequest(::ServerPlayer& player, ::ItemStackRequestActionMineBlock const& request);

MCAPI void onAbortDestroyBlock(::ServerPlayer& player, ::BlockPos const& pos, int progress);

MCAPI void onBeforeMovementSimulation(
    ::ServerPlayer&                                      player,
    ::PlayerBlockActions const&                          blockActions,
    ::std::unique_ptr<::ItemStackRequestData>            itemStackRequest,
    ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> textFilter
);

MCAPI void onStartDestroyBlock(::ServerPlayer& player, ::BlockPos const& pos, int face);

MCAPI void serverTickBlockBreaking(::ServerPlayer& player, ::BlockPos const& destroyBlockPos, int facing);
// NOLINTEND

} // namespace ServerPlayerBlockUseHandler
