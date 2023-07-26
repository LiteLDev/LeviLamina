#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EconomyTradeableComponent {

public:
    // prevent constructor by default
    EconomyTradeableComponent& operator=(EconomyTradeableComponent const&) = delete;
    EconomyTradeableComponent(EconomyTradeableComponent const&)            = delete;
    EconomyTradeableComponent()                                            = delete;

public:
    /**
     * @symbol ??0EconomyTradeableComponent\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI EconomyTradeableComponent(class Actor&); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@EconomyTradeableComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?createDataPacket\@EconomyTradeableComponent\@\@QEAA?AVUpdateTradePacket\@\@W4ContainerID\@\@\@Z
     */
    MCAPI class UpdateTradePacket createDataPacket(enum class ContainerID); // NOLINT
    /**
     * @symbol ?fixVillagerTierToMatchTradeList\@EconomyTradeableComponent\@\@QEAAXPEAVMerchantRecipeList\@\@\@Z
     */
    MCAPI void fixVillagerTierToMatchTradeList(class MerchantRecipeList*); // NOLINT
    /**
     * @symbol ?getCurrentCuredDiscount\@EconomyTradeableComponent\@\@QEBA?AUIntRange\@\@XZ
     */
    MCAPI struct IntRange getCurrentCuredDiscount() const; // NOLINT
    /**
     * @symbol ?getCurrentNearbyCuredDiscount\@EconomyTradeableComponent\@\@QEBAHXZ
     */
    MCAPI int getCurrentNearbyCuredDiscount() const; // NOLINT
    /**
     * @symbol ?getCurrentTradeExp\@EconomyTradeableComponent\@\@QEBAIXZ
     */
    MCAPI unsigned int getCurrentTradeExp() const; // NOLINT
    /**
     * @symbol
     * ?getDisplayName\@EconomyTradeableComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getDisplayName() const; // NOLINT
    /**
     * @symbol ?getInteraction\@EconomyTradeableComponent\@\@QEAA_NAEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Player&, class ActorInteraction&); // NOLINT
    /**
     * @symbol ?getOffers\@EconomyTradeableComponent\@\@QEAAPEAVMerchantRecipeList\@\@XZ
     */
    MCAPI class MerchantRecipeList* getOffers(); // NOLINT
    /**
     * @symbol ?getRiches\@EconomyTradeableComponent\@\@QEBAHXZ
     */
    MCAPI int getRiches() const; // NOLINT
    /**
     * @symbol ?getTradeTier\@EconomyTradeableComponent\@\@QEBAIXZ
     */
    MCAPI unsigned int getTradeTier() const; // NOLINT
    /**
     * @symbol ?hasSupplyRemaining\@EconomyTradeableComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasSupplyRemaining() const; // NOLINT
    /**
     * @symbol ?initFromDefinition\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void initFromDefinition(); // NOLINT
    /**
     * @symbol
     * ?loadDisplayName\@EconomyTradeableComponent\@\@QEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& loadDisplayName(); // NOLINT
    /**
     * @symbol ?loadOffersFromTag\@EconomyTradeableComponent\@\@QEAAXPEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadOffersFromTag(class CompoundTag const*); // NOLINT
    /**
     * @symbol ?matchExpAndTier\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void matchExpAndTier(); // NOLINT
    /**
     * @symbol ?newServerAiStep\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void newServerAiStep(); // NOLINT
    /**
     * @symbol ?notifyTrade\@EconomyTradeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void notifyTrade(int); // NOLINT
    /**
     * @symbol ?readAdditionalSaveData\@EconomyTradeableComponent\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?reloadComponent\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void reloadComponent(); // NOLINT
    /**
     * @symbol ?resupplyTrades\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void resupplyTrades(); // NOLINT
    /**
     * @symbol ?setNearbyCuredDiscount\@EconomyTradeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setNearbyCuredDiscount(int); // NOLINT
    /**
     * @symbol ?setOffers\@EconomyTradeableComponent\@\@QEAAXAEAVMerchantRecipeList\@\@\@Z
     */
    MCAPI void setOffers(class MerchantRecipeList&); // NOLINT
    /**
     * @symbol ?setRiches\@EconomyTradeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setRiches(int); // NOLINT
    /**
     * @symbol ?shouldConvertTrades\@EconomyTradeableComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldConvertTrades() const; // NOLINT
    /**
     * @symbol ?shouldPersistTrades\@EconomyTradeableComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldPersistTrades() const; // NOLINT
    /**
     * @symbol ?showTradeScreen\@EconomyTradeableComponent\@\@QEAA_NXZ
     */
    MCAPI bool showTradeScreen(); // NOLINT
    /**
     * @symbol ?tickDiscountDegradationTimer\@EconomyTradeableComponent\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void tickDiscountDegradationTimer(struct Tick); // NOLINT
    /**
     * @symbol ?tryIncrementCuredDiscount\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void tryIncrementCuredDiscount(); // NOLINT
    /**
     * @symbol ?tryIncrementNearbyCuredDiscount\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void tryIncrementNearbyCuredDiscount(); // NOLINT
    /**
     * @symbol ?tryToTransferOldOffers\@EconomyTradeableComponent\@\@QEAAXPEAVMerchantRecipeList\@\@\@Z
     */
    MCAPI void tryToTransferOldOffers(class MerchantRecipeList*); // NOLINT
    /**
     * @symbol ?isUseNewTradeScreen\@EconomyTradeableComponent\@\@SA_NAEBVActor\@\@\@Z
     */
    MCAPI static bool isUseNewTradeScreen(class Actor const&); // NOLINT

    // private:
    /**
     * @symbol ?_generateTrades\@EconomyTradeableComponent\@\@AEAA_NXZ
     */
    MCAPI bool _generateTrades(); // NOLINT
    /**
     * @symbol ?_getTradeTable\@EconomyTradeableComponent\@\@AEAAPEAUTradeTable\@\@XZ
     */
    MCAPI struct TradeTable* _getTradeTable(); // NOLINT
    /**
     * @symbol ?_getTradeTierFromCurrentExp\@EconomyTradeableComponent\@\@AEBAIXZ
     */
    MCAPI unsigned int _getTradeTierFromCurrentExp() const; // NOLINT
    /**
     * @symbol
     * ?_rearrangeTradeList\@EconomyTradeableComponent\@\@AEAAXAEAV?$vector\@UTrade\@\@V?$allocator\@UTrade\@\@\@std\@\@\@std\@\@_K\@Z
     */
    MCAPI void _rearrangeTradeList(std::vector<struct Trade>&, unsigned __int64); // NOLINT
    /**
     * @symbol ?_setMaxTradeTier\@EconomyTradeableComponent\@\@AEAAXH\@Z
     */
    MCAPI void _setMaxTradeTier(int); // NOLINT
    /**
     * @symbol ?_setTradeTier\@EconomyTradeableComponent\@\@AEAAXH\@Z
     */
    MCAPI void _setTradeTier(int); // NOLINT

private:
};
