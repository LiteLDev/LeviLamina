#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/actor/player/PredictionValidationError.h"

namespace ServerPlayerBlockUseHandler {
// NOLINTBEGIN
/**
 * @symbol
 * ?getErrorForRejectedRequest\@ServerPlayerBlockUseHandler\@\@YA?AW4PredictionValidationError\@1\@AEAVServerPlayer\@\@AEBVItemStackRequestActionMineBlock\@\@\@Z
 */
MCAPI enum class ServerPlayerBlockUseHandler::PredictionValidationError
getErrorForRejectedRequest(class ServerPlayer&, class ItemStackRequestActionMineBlock const&);
/**
 * @symbol ?onAbortDestroyBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
 */
MCAPI void onAbortDestroyBlock(class ServerPlayer&, class BlockPos const&, int32_t);
/**
 * @symbol
 * ?onBeforeMovementSimulation\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVPlayerBlockActions\@\@V?$unique_ptr\@VItemStackRequestData\@\@U?$default_delete\@VItemStackRequestData\@\@\@std\@\@\@std\@\@V?$NonOwnerPointer\@VTextFilteringProcessor\@\@\@Bedrock\@\@\@Z
 */
MCAPI void
onBeforeMovementSimulation(class ServerPlayer&, class PlayerBlockActions const&, std::unique_ptr<class ItemStackRequestData>, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>);
/**
 * @symbol ?onCrackBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
 */
MCAPI void onCrackBlock(class ServerPlayer&, class BlockPos const&, int32_t);
/**
 * @symbol ?onStartDestroyBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
 */
MCAPI void onStartDestroyBlock(class ServerPlayer&, class BlockPos const&, int32_t);
/**
 * @symbol ?onStopDestroyBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@\@Z
 */
MCAPI void onStopDestroyBlock(class ServerPlayer&);
/**
 * @symbol ?serverTickBlockBreaking\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
 */
MCAPI void serverTickBlockBreaking(class ServerPlayer&, class BlockPos const&, int32_t);
/**
 * @symbol
 * ?validateClientBlockBreakPrediction\@ServerPlayerBlockUseHandler\@\@YA?AW4PredictionValidationError\@1\@AEAVServerPlayer\@\@PEBVItemStackRequestActionMineBlock\@\@AEBVBlockPos\@\@AEBVItemStack\@\@3PEBUPlayerBlockActionData\@\@\@Z
 */
MCAPI enum class ServerPlayerBlockUseHandler::PredictionValidationError
validateClientBlockBreakPrediction(class ServerPlayer&, class ItemStackRequestActionMineBlock const*, class BlockPos const&, class ItemStack const&, class ItemStack const&, struct PlayerBlockActionData const*);
// NOLINTEND

}; // namespace ServerPlayerBlockUseHandler
