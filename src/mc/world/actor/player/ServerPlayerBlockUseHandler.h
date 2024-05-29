#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/actor/player/PredictionValidationError.h"

namespace ServerPlayerBlockUseHandler {
// NOLINTBEGIN
// symbol:
// ?getErrorForRejectedRequest@ServerPlayerBlockUseHandler@@YA?AW4PredictionValidationError@1@AEAVServerPlayer@@AEBVItemStackRequestActionMineBlock@@@Z
MCAPI ::ServerPlayerBlockUseHandler::PredictionValidationError
getErrorForRejectedRequest(class ServerPlayer& player, class ItemStackRequestActionMineBlock const& request);

// symbol: ?onAbortDestroyBlock@ServerPlayerBlockUseHandler@@YAXAEAVServerPlayer@@AEBVBlockPos@@H@Z
MCAPI void onAbortDestroyBlock(class ServerPlayer& player, class BlockPos const& pos, int face);

// symbol:
// ?onBeforeMovementSimulation@ServerPlayerBlockUseHandler@@YAXAEAVServerPlayer@@AEBVPlayerBlockActions@@V?$unique_ptr@VItemStackRequestData@@U?$default_delete@VItemStackRequestData@@@std@@@std@@V?$NonOwnerPointer@VTextFilteringProcessor@@@Bedrock@@@Z
MCAPI void onBeforeMovementSimulation(
    class ServerPlayer&                                          player,
    class PlayerBlockActions const&                              blockActions,
    std::unique_ptr<class ItemStackRequestData>                  itemStackRequest,
    class Bedrock::NonOwnerPointer<class TextFilteringProcessor> textFilter
);

// symbol: ?onCrackBlock@ServerPlayerBlockUseHandler@@YAXAEAVServerPlayer@@AEBVBlockPos@@H@Z
MCAPI void onCrackBlock(class ServerPlayer& player, class BlockPos const& pos, int data);

// symbol: ?onStartDestroyBlock@ServerPlayerBlockUseHandler@@YAXAEAVServerPlayer@@AEBVBlockPos@@H@Z
MCAPI void onStartDestroyBlock(class ServerPlayer& player, class BlockPos const& pos, int face);

// symbol: ?onStopDestroyBlock@ServerPlayerBlockUseHandler@@YAXAEAVServerPlayer@@@Z
MCAPI void onStopDestroyBlock(class ServerPlayer& player);

// symbol: ?serverTickBlockBreaking@ServerPlayerBlockUseHandler@@YAXAEAVServerPlayer@@AEBVBlockPos@@H@Z
MCAPI void serverTickBlockBreaking(class ServerPlayer& player, class BlockPos const&, int facing);

// symbol:
// ?validateClientBlockBreakPrediction@ServerPlayerBlockUseHandler@@YA?AW4PredictionValidationError@1@AEAVServerPlayer@@PEBVItemStackRequestActionMineBlock@@AEBVBlockPos@@AEBVItemStack@@3PEBUPlayerBlockActionData@@@Z
MCAPI ::ServerPlayerBlockUseHandler::PredictionValidationError
validateClientBlockBreakPrediction(class ServerPlayer& player, class ItemStackRequestActionMineBlock const*, class BlockPos const&, class ItemStack const& oldItem, class ItemStack const& newItem, struct PlayerBlockActionData const*);
// NOLINTEND

}; // namespace ServerPlayerBlockUseHandler
