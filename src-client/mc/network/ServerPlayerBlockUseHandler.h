#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/PredictionValidationError.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ItemStack;
class ItemStackRequestData;
class PlayerBlockActions;
class ServerPlayer;
struct ItemStackRequestActionMineBlock;
struct PlayerBlockActionData;
struct TextFilteringProcessor;
// clang-format on

namespace ServerPlayerBlockUseHandler {
// functions
// NOLINTBEGIN
MCAPI ::ServerPlayerBlockUseHandler::PredictionValidationError
getErrorForRejectedRequest(::ServerPlayer& player, ::ItemStackRequestActionMineBlock const& request);

MCAPI void onAbortDestroyBlock(::ServerPlayer& player, ::BlockPos const& pos, int face);

MCAPI void onBeforeMovementSimulation(
    ::ServerPlayer&                                      player,
    ::PlayerBlockActions const&                          blockActions,
    ::std::unique_ptr<::ItemStackRequestData>            itemStackRequest,
    ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> textFilter
);

MCAPI void onCrackBlock(::ServerPlayer& player, ::BlockPos const& pos, int data);

MCAPI void onStartDestroyBlock(::ServerPlayer& player, ::BlockPos const& pos, int face);

MCAPI void onStopDestroyBlock(::ServerPlayer& player);

MCAPI void serverTickBlockBreaking(::ServerPlayer& player, ::BlockPos const& destroyBlockPos, int facing);

MCAPI ::ServerPlayerBlockUseHandler::PredictionValidationError validateClientBlockBreakPrediction(
    ::ServerPlayer&                          player,
    ::ItemStackRequestActionMineBlock const* mineRequest,
    ::BlockPos const&                        serverDestroyedBlock,
    ::ItemStack const&                       oldItem,
    ::ItemStack const&                       newItem,
    ::PlayerBlockActionData const*           clientDestroyPrediction
);
// NOLINTEND

} // namespace ServerPlayerBlockUseHandler
