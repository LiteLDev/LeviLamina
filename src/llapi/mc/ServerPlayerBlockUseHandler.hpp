/**
 * @file  ServerPlayerBlockUseHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ServerPlayerBlockUseHandler.
 *
 */
namespace ServerPlayerBlockUseHandler {

#define AFTER_EXTRA
// Add Member There
enum class PredictionValidationError;

#undef AFTER_EXTRA
    /**
     * @symbol  ?getErrorForRejectedRequest\@ServerPlayerBlockUseHandler\@\@YA?AW4PredictionValidationError\@1\@AEAVServerPlayer\@\@AEBVItemStackRequestActionMineBlock\@\@\@Z
     */
    MCAPI enum class ServerPlayerBlockUseHandler::PredictionValidationError getErrorForRejectedRequest(class ServerPlayer &, class ItemStackRequestActionMineBlock const &);
    /**
     * @symbol  ?onAbortDestroyBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI void onAbortDestroyBlock(class ServerPlayer &, class BlockPos const &, int);
    /**
     * @symbol  ?onBeforeMovementSimulation\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVPlayerBlockActions\@\@V?$unique_ptr\@VItemStackRequestData\@\@U?$default_delete\@VItemStackRequestData\@\@\@std\@\@\@std\@\@V?$NonOwnerPointer\@VTextFilteringProcessor\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void onBeforeMovementSimulation(class ServerPlayer &, class PlayerBlockActions const &, std::unique_ptr<class ItemStackRequestData>, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>);
    /**
     * @symbol  ?onCrackBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI void onCrackBlock(class ServerPlayer &, class BlockPos const &, int);
    /**
     * @symbol  ?onStartDestroyBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI void onStartDestroyBlock(class ServerPlayer &, class BlockPos const &, int);
    /**
     * @symbol  ?onStopDestroyBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@\@Z
     */
    MCAPI void onStopDestroyBlock(class ServerPlayer &);
    /**
     * @symbol  ?serverTickBlockBreaking\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI void serverTickBlockBreaking(class ServerPlayer &, class BlockPos const &, int);
    /**
     * @symbol  ?validateClientBlockBreakPrediction\@ServerPlayerBlockUseHandler\@\@YA?AW4PredictionValidationError\@1\@AEAVServerPlayer\@\@PEBVItemStackRequestActionMineBlock\@\@AEBVBlockPos\@\@AEBVItemStack\@\@3PEBUPlayerBlockActionData\@\@\@Z
     */
    MCAPI enum class ServerPlayerBlockUseHandler::PredictionValidationError validateClientBlockBreakPrediction(class ServerPlayer &, class ItemStackRequestActionMineBlock const *, class BlockPos const &, class ItemStack const &, class ItemStack const &, struct PlayerBlockActionData const *);

};