#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { template<typename T0> class NonOwnerPointer; }
namespace ServerPlayerBlockUseHandler { enum class PredictionValidationError; }
// clang-format on

namespace ServerPlayerBlockUseHandler {
/**
 * @symbol
 * ?getErrorForRejectedRequest\@ServerPlayerBlockUseHandler\@\@YA?AW4PredictionValidationError\@1\@AEAVServerPlayer\@\@AEBVItemStackRequestActionMineBlock\@\@\@Z
 */
MCAPI enum class ServerPlayerBlockUseHandler::PredictionValidationError
getErrorForRejectedRequest(class ServerPlayer&, class ItemStackRequestActionMineBlock const&); // NOLINT
/**
 * @symbol ?onAbortDestroyBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
 */
MCAPI void onAbortDestroyBlock(class ServerPlayer&, class BlockPos const&, int); // NOLINT
/**
 * @symbol
 * ?onBeforeMovementSimulation\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVPlayerBlockActions\@\@V?$unique_ptr\@VItemStackRequestData\@\@U?$default_delete\@VItemStackRequestData\@\@\@std\@\@\@std\@\@V?$NonOwnerPointer\@VTextFilteringProcessor\@\@\@Bedrock\@\@\@Z
 */
MCAPI void
onBeforeMovementSimulation(class ServerPlayer&, class PlayerBlockActions const&, std::unique_ptr<class ItemStackRequestData>, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>); // NOLINT
/**
 * @symbol ?onCrackBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
 */
MCAPI void onCrackBlock(class ServerPlayer&, class BlockPos const&, int); // NOLINT
/**
 * @symbol ?onStartDestroyBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
 */
MCAPI void onStartDestroyBlock(class ServerPlayer&, class BlockPos const&, int); // NOLINT
/**
 * @symbol ?onStopDestroyBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@\@Z
 */
MCAPI void onStopDestroyBlock(class ServerPlayer&); // NOLINT
/**
 * @symbol ?serverTickBlockBreaking\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
 */
MCAPI void serverTickBlockBreaking(class ServerPlayer&, class BlockPos const&, int); // NOLINT
/**
 * @symbol
 * ?validateClientBlockBreakPrediction\@ServerPlayerBlockUseHandler\@\@YA?AW4PredictionValidationError\@1\@AEAVServerPlayer\@\@PEBVItemStackRequestActionMineBlock\@\@AEBVBlockPos\@\@AEBVItemStack\@\@3PEBUPlayerBlockActionData\@\@\@Z
 */
MCAPI enum class ServerPlayerBlockUseHandler::PredictionValidationError
validateClientBlockBreakPrediction(class ServerPlayer&, class ItemStackRequestActionMineBlock const*, class BlockPos const&, class ItemStack const&, class ItemStack const&, struct PlayerBlockActionData const*); // NOLINT

}; // namespace ServerPlayerBlockUseHandler
