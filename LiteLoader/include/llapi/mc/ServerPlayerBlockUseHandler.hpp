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
     * @hash   908446078
     * @symbol  ?getErrorForRejectedRequest\@ServerPlayerBlockUseHandler\@\@YA?AW4PredictionValidationError\@1\@AEAVServerPlayer\@\@AEBVItemStackRequestActionMineBlock\@\@\@Z
     */
    MCAPI enum class ServerPlayerBlockUseHandler::PredictionValidationError getErrorForRejectedRequest(class ServerPlayer &, class ItemStackRequestActionMineBlock const &);
    /**
     * @hash   1391998683
     * @symbol  ?onAbortDestroyBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI void onAbortDestroyBlock(class ServerPlayer &, class BlockPos const &, int);
    /**
     * @hash   543168083
     * @symbol  ?onBeforeMovementSimulation\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVPlayerBlockActions\@\@V?$unique_ptr\@VItemStackRequestData\@\@U?$default_delete\@VItemStackRequestData\@\@\@std\@\@\@std\@\@V?$NonOwnerPointer\@VTextFilteringProcessor\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void onBeforeMovementSimulation(class ServerPlayer &, class PlayerBlockActions const &, std::unique_ptr<class ItemStackRequestData>, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>);
    /**
     * @hash   1549352401
     * @symbol  ?onCrackBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI void onCrackBlock(class ServerPlayer &, class BlockPos const &, int);
    /**
     * @hash   -882903561
     * @symbol  ?onStartDestroyBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI void onStartDestroyBlock(class ServerPlayer &, class BlockPos const &, int);
    /**
     * @hash   370869773
     * @symbol  ?onStopDestroyBlock\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@\@Z
     */
    MCAPI void onStopDestroyBlock(class ServerPlayer &);
    /**
     * @hash   1504947907
     * @symbol  ?serverTickBlockBreaking\@ServerPlayerBlockUseHandler\@\@YAXAEAVServerPlayer\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI void serverTickBlockBreaking(class ServerPlayer &, class BlockPos const &, int);
    /**
     * @hash   1193831640
     * @symbol  ?validateClientBlockBreakPrediction\@ServerPlayerBlockUseHandler\@\@YA?AW4PredictionValidationError\@1\@AEAVServerPlayer\@\@PEBVItemStackRequestActionMineBlock\@\@AEBVBlockPos\@\@AEBVItemStack\@\@3PEBUPlayerBlockActionData\@\@\@Z
     */
    MCAPI enum class ServerPlayerBlockUseHandler::PredictionValidationError validateClientBlockBreakPrediction(class ServerPlayer &, class ItemStackRequestActionMineBlock const *, class BlockPos const &, class ItemStack const &, class ItemStack const &, struct PlayerBlockActionData const *);

};