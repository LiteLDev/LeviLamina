/**
 * @file  MC/ServerPlayerBlockUseHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   1825347710
     * @symbol ?getErrorForRejectedRequest@ServerPlayerBlockUseHandler@@YA?AW4PredictionValidationError@1@AEAVServerPlayer@@AEBVItemStackRequestActionMineBlock@@@Z
     */
    MCAPI enum ServerPlayerBlockUseHandler::PredictionValidationError getErrorForRejectedRequest(class ServerPlayer &, class ItemStackRequestActionMineBlock const &);
    /**
     * @hash   -1986082357
     * @symbol ?onAbortDestroyBlock@ServerPlayerBlockUseHandler@@YAXAEAVServerPlayer@@AEBVBlockPos@@H@Z
     */
    MCAPI void onAbortDestroyBlock(class ServerPlayer &, class BlockPos const &, int);
    /**
     * @hash   1460023587
     * @symbol ?onBeforeMovementSimulation@ServerPlayerBlockUseHandler@@YAXAEAVServerPlayer@@AEBVPlayerBlockActions@@V?$unique_ptr@VItemStackRequestData@@U?$default_delete@VItemStackRequestData@@@std@@@std@@V?$NonOwnerPointer@VTextFilteringProcessor@@@Bedrock@@@Z
     */
    MCAPI void onBeforeMovementSimulation(class ServerPlayer &, class PlayerBlockActions const &, std::unique_ptr<class ItemStackRequestData>, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>);
    /**
     * @hash   -1828882399
     * @symbol ?onCrackBlock@ServerPlayerBlockUseHandler@@YAXAEAVServerPlayer@@AEBVBlockPos@@H@Z
     */
    MCAPI void onCrackBlock(class ServerPlayer &, class BlockPos const &, int);
    /**
     * @hash   33828935
     * @symbol ?onStartDestroyBlock@ServerPlayerBlockUseHandler@@YAXAEAVServerPlayer@@AEBVBlockPos@@H@Z
     */
    MCAPI void onStartDestroyBlock(class ServerPlayer &, class BlockPos const &, int);
    /**
     * @hash   1287648397
     * @symbol ?onStopDestroyBlock@ServerPlayerBlockUseHandler@@YAXAEAVServerPlayer@@@Z
     */
    MCAPI void onStopDestroyBlock(class ServerPlayer &);
    /**
     * @hash   -1873240765
     * @symbol ?serverTickBlockBreaking@ServerPlayerBlockUseHandler@@YAXAEAVServerPlayer@@AEBVBlockPos@@H@Z
     */
    MCAPI void serverTickBlockBreaking(class ServerPlayer &, class BlockPos const &, int);
    /**
     * @hash   2110564136
     * @symbol ?validateClientBlockBreakPrediction@ServerPlayerBlockUseHandler@@YA?AW4PredictionValidationError@1@AEAVServerPlayer@@PEBVItemStackRequestActionMineBlock@@AEBVBlockPos@@AEBVItemStack@@3PEBUPlayerBlockActionData@@@Z
     */
    MCAPI enum ServerPlayerBlockUseHandler::PredictionValidationError validateClientBlockBreakPrediction(class ServerPlayer &, class ItemStackRequestActionMineBlock const *, class BlockPos const &, class ItemStack const &, class ItemStack const &, struct PlayerBlockActionData const *);

};