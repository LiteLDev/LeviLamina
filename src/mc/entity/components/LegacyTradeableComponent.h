#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyTradeableComponent {

public:
    // prevent constructor by default
    LegacyTradeableComponent& operator=(LegacyTradeableComponent const&) = delete;
    LegacyTradeableComponent(LegacyTradeableComponent const&)            = delete;

public:
    /**
     * @symbol ?DecrementMerchantTimer\@LegacyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void DecrementMerchantTimer(); // NOLINT
    /**
     * @symbol ?IncrementTradeTier\@LegacyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void IncrementTradeTier(); // NOLINT
    /**
     * @symbol ??0LegacyTradeableComponent\@\@QEAA\@XZ
     */
    MCAPI LegacyTradeableComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@LegacyTradeableComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?createDataPacket\@LegacyTradeableComponent\@\@QEAA?AVUpdateTradePacket\@\@AEAVActor\@\@W4ContainerID\@\@\@Z
     */
    MCAPI class UpdateTradePacket createDataPacket(class Actor&, enum class ContainerID); // NOLINT
    /**
     * @symbol ?getAddRecipeOnUpdate\@LegacyTradeableComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAddRecipeOnUpdate() const; // NOLINT
    /**
     * @symbol
     * ?getDisplayName\@LegacyTradeableComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getDisplayName() const; // NOLINT
    /**
     * @symbol ?getInteraction\@LegacyTradeableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&); // NOLINT
    /**
     * @symbol ?getLastPlayerTradeID\@LegacyTradeableComponent\@\@QEBA?BUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const getLastPlayerTradeID() const; // NOLINT
    /**
     * @symbol ?getOffers\@LegacyTradeableComponent\@\@QEAAPEAVMerchantRecipeList\@\@AEAVActor\@\@\@Z
     */
    MCAPI class MerchantRecipeList* getOffers(class Actor&); // NOLINT
    /**
     * @symbol ?getResetLockedOnFirstTrade\@LegacyTradeableComponent\@\@QEBA_NXZ
     */
    MCAPI bool getResetLockedOnFirstTrade() const; // NOLINT
    /**
     * @symbol ?getRiches\@LegacyTradeableComponent\@\@QEBAHXZ
     */
    MCAPI int getRiches() const; // NOLINT
    /**
     * @symbol ?getTradeTier\@LegacyTradeableComponent\@\@QEBAHXZ
     */
    MCAPI int getTradeTier() const; // NOLINT
    /**
     * @symbol ?getUpdateMerchantTimer\@LegacyTradeableComponent\@\@QEBAHXZ
     */
    MCAPI int getUpdateMerchantTimer() const; // NOLINT
    /**
     * @symbol
     * ?loadDisplayName\@LegacyTradeableComponent\@\@QEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVActor\@\@\@Z
     */
    MCAPI std::string const& loadDisplayName(class Actor&); // NOLINT
    /**
     * @symbol ?loadOffersFromTag\@LegacyTradeableComponent\@\@QEAAXPEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadOffersFromTag(class CompoundTag const*); // NOLINT
    /**
     * @symbol ?notifyTrade\@LegacyTradeableComponent\@\@QEAAXAEAVActor\@\@H\@Z
     */
    MCAPI void notifyTrade(class Actor&, int); // NOLINT
    /**
     * @symbol ??4LegacyTradeableComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LegacyTradeableComponent& operator=(class LegacyTradeableComponent&&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@LegacyTradeableComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?reloadComponent\@LegacyTradeableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void reloadComponent(class Actor&); // NOLINT
    /**
     * @symbol ?restockAllRecipes\@LegacyTradeableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void restockAllRecipes(class Actor&); // NOLINT
    /**
     * @symbol ?setAddRecipeOnUpdate\@LegacyTradeableComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAddRecipeOnUpdate(bool); // NOLINT
    /**
     * @symbol ?setOffers\@LegacyTradeableComponent\@\@QEAAXAEAVMerchantRecipeList\@\@\@Z
     */
    MCAPI void setOffers(class MerchantRecipeList&); // NOLINT
    /**
     * @symbol ?setResetLockedOnFirstTrade\@LegacyTradeableComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setResetLockedOnFirstTrade(bool); // NOLINT
    /**
     * @symbol ?setRiches\@LegacyTradeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setRiches(int); // NOLINT
    /**
     * @symbol ?setTradeTier\@LegacyTradeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setTradeTier(int); // NOLINT
    /**
     * @symbol ?shouldConvertTrades\@LegacyTradeableComponent\@\@QEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool shouldConvertTrades(class Actor&) const; // NOLINT
    /**
     * @symbol ?shouldPersistTrades\@LegacyTradeableComponent\@\@QEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool shouldPersistTrades(class Actor&) const; // NOLINT
    /**
     * @symbol ?updateTradeTier\@LegacyTradeableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void updateTradeTier(class Actor&); // NOLINT
    /**
     * @symbol ??1LegacyTradeableComponent\@\@QEAA\@XZ
     */
    MCAPI ~LegacyTradeableComponent(); // NOLINT
    /**
     * @symbol ?isUseNewTradeScreen\@LegacyTradeableComponent\@\@SA_NAEBVActor\@\@\@Z
     */
    MCAPI static bool isUseNewTradeScreen(class Actor const&); // NOLINT

    // private:
    /**
     * @symbol ?_getTradeTable\@LegacyTradeableComponent\@\@AEAAPEAUTradeTable\@\@AEAVActor\@\@\@Z
     */
    MCAPI struct TradeTable* _getTradeTable(class Actor&); // NOLINT
    /**
     * @symbol
     * ?_rearrangeTradeList\@LegacyTradeableComponent\@\@AEAAXAEAVActor\@\@AEAV?$vector\@UTrade\@\@V?$allocator\@UTrade\@\@\@std\@\@\@std\@\@_K\@Z
     */
    MCAPI void _rearrangeTradeList(class Actor&, std::vector<struct Trade>&, unsigned __int64); // NOLINT
    /**
     * @symbol ?_refreshTrades\@LegacyTradeableComponent\@\@AEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool _refreshTrades(class Actor&); // NOLINT

private:
};
