#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/server_player_block_use_handler/PredictionValidationError.h"

namespace ServerPlayerBlockUseHandler {
// NOLINTBEGIN
MCAPI ::ServerPlayerBlockUseHandler::PredictionValidationError
getErrorForRejectedRequest(class ServerPlayer& player, class ItemStackRequestActionMineBlock const& request);

MCAPI void onAbortDestroyBlock(class ServerPlayer& player, class BlockPos const& pos, int face);

MCAPI void onBeforeMovementSimulation(
    class ServerPlayer&                                          player,
    class PlayerBlockActions const&                              blockActions,
    std::unique_ptr<class ItemStackRequestData>                  itemStackRequest,
    class Bedrock::NonOwnerPointer<class TextFilteringProcessor> textFilter
);

MCAPI void onCrackBlock(class ServerPlayer& player, class BlockPos const& pos, int data);

MCAPI void onStartDestroyBlock(class ServerPlayer& player, class BlockPos const& pos, int face);

MCAPI void onStopDestroyBlock(class ServerPlayer& player);

MCAPI void serverTickBlockBreaking(class ServerPlayer& player, class BlockPos const& destroyBlockPos, int facing);

MCAPI ::ServerPlayerBlockUseHandler::PredictionValidationError validateClientBlockBreakPrediction(
    class ServerPlayer&                          player,
    class ItemStackRequestActionMineBlock const* mineRequest,
    class BlockPos const&                        serverDestroyedBlock,
    class ItemStack const&                       oldItem,
    class ItemStack const&                       newItem,
    struct PlayerBlockActionData const*          clientDestroyPrediction
);
// NOLINTEND

}; // namespace ServerPlayerBlockUseHandler
