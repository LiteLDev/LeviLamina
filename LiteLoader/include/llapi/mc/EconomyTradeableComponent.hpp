/**
 * @file  EconomyTradeableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EconomyTradeableComponent.
 *
 */
class EconomyTradeableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ECONOMYTRADEABLECOMPONENT
public:
    class EconomyTradeableComponent& operator=(class EconomyTradeableComponent const &) = delete;
    EconomyTradeableComponent(class EconomyTradeableComponent const &) = delete;
    EconomyTradeableComponent() = delete;
#endif

public:
    /**
     * @symbol  ??0EconomyTradeableComponent\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI EconomyTradeableComponent(class Actor &);
    /**
     * @symbol  ?addAdditionalSaveData\@EconomyTradeableComponent\@\@QEAAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &);
    /**
     * @symbol  ?createDataPacket\@EconomyTradeableComponent\@\@QEAA?AVUpdateTradePacket\@\@W4ContainerID\@\@\@Z
     */
    MCAPI class UpdateTradePacket createDataPacket(enum class ContainerID);
    /**
     * @symbol  ?fixVillagerTierToMatchTradeList\@EconomyTradeableComponent\@\@QEAAXPEAVMerchantRecipeList\@\@\@Z
     */
    MCAPI void fixVillagerTierToMatchTradeList(class MerchantRecipeList *);
    /**
     * @symbol  ?getCurrentCuredDiscount\@EconomyTradeableComponent\@\@QEBA?AUIntRange\@\@XZ
     */
    MCAPI struct IntRange getCurrentCuredDiscount() const;
    /**
     * @symbol  ?getCurrentNearbyCuredDiscount\@EconomyTradeableComponent\@\@QEBAHXZ
     */
    MCAPI int getCurrentNearbyCuredDiscount() const;
    /**
     * @symbol  ?getCurrentTradeExp\@EconomyTradeableComponent\@\@QEBAIXZ
     */
    MCAPI unsigned int getCurrentTradeExp() const;
    /**
     * @symbol  ?getDisplayName\@EconomyTradeableComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getDisplayName() const;
    /**
     * @symbol  ?getInteraction\@EconomyTradeableComponent\@\@QEAA_NAEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Player &, class ActorInteraction &);
    /**
     * @symbol  ?getOffers\@EconomyTradeableComponent\@\@QEAAPEAVMerchantRecipeList\@\@XZ
     */
    MCAPI class MerchantRecipeList * getOffers();
    /**
     * @symbol  ?getRiches\@EconomyTradeableComponent\@\@QEBAHXZ
     */
    MCAPI int getRiches() const;
    /**
     * @symbol  ?getTradeTier\@EconomyTradeableComponent\@\@QEBAIXZ
     */
    MCAPI unsigned int getTradeTier() const;
    /**
     * @symbol  ?hasSupplyRemaining\@EconomyTradeableComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasSupplyRemaining() const;
    /**
     * @symbol  ?initFromDefinition\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void initFromDefinition();
    /**
     * @symbol  ?loadDisplayName\@EconomyTradeableComponent\@\@QEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & loadDisplayName();
    /**
     * @symbol  ?loadOffersFromTag\@EconomyTradeableComponent\@\@QEAAXPEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadOffersFromTag(class CompoundTag const *);
    /**
     * @symbol  ?matchExpAndTier\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void matchExpAndTier();
    /**
     * @symbol  ?newServerAiStep\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void newServerAiStep();
    /**
     * @symbol  ?notifyTrade\@EconomyTradeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void notifyTrade(int);
    /**
     * @symbol  ?readAdditionalSaveData\@EconomyTradeableComponent\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?reloadComponent\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void reloadComponent();
    /**
     * @symbol  ?resupplyTrades\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void resupplyTrades();
    /**
     * @symbol  ?setNearbyCuredDiscount\@EconomyTradeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setNearbyCuredDiscount(int);
    /**
     * @symbol  ?setOffers\@EconomyTradeableComponent\@\@QEAAXAEAVMerchantRecipeList\@\@\@Z
     */
    MCAPI void setOffers(class MerchantRecipeList &);
    /**
     * @symbol  ?setRiches\@EconomyTradeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setRiches(int);
    /**
     * @symbol  ?shouldConvertTrades\@EconomyTradeableComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldConvertTrades() const;
    /**
     * @symbol  ?shouldPersistTrades\@EconomyTradeableComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldPersistTrades() const;
    /**
     * @symbol  ?showTradeScreen\@EconomyTradeableComponent\@\@QEAA_NXZ
     */
    MCAPI bool showTradeScreen();
    /**
     * @symbol  ?tickDiscountDegradationTimer\@EconomyTradeableComponent\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void tickDiscountDegradationTimer(struct Tick);
    /**
     * @symbol  ?tryIncrementCuredDiscount\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void tryIncrementCuredDiscount();
    /**
     * @symbol  ?tryIncrementNearbyCuredDiscount\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void tryIncrementNearbyCuredDiscount();
    /**
     * @symbol  ?tryToTransferOldOffers\@EconomyTradeableComponent\@\@QEAAXPEAVMerchantRecipeList\@\@\@Z
     */
    MCAPI void tryToTransferOldOffers(class MerchantRecipeList *);
    /**
     * @symbol  ?isUseNewTradeScreen\@EconomyTradeableComponent\@\@SA_NAEBVActor\@\@\@Z
     */
    MCAPI static bool isUseNewTradeScreen(class Actor const &);

//private:
    /**
     * @symbol  ?_generateTrades\@EconomyTradeableComponent\@\@AEAA_NXZ
     */
    MCAPI bool _generateTrades();
    /**
     * @symbol  ?_getTradeTable\@EconomyTradeableComponent\@\@AEAAPEAUTradeTable\@\@XZ
     */
    MCAPI struct TradeTable * _getTradeTable();
    /**
     * @symbol  ?_getTradeTierFromCurrentExp\@EconomyTradeableComponent\@\@AEBAIXZ
     */
    MCAPI unsigned int _getTradeTierFromCurrentExp() const;
    /**
     * @symbol  ?_rearrangeTradeList\@EconomyTradeableComponent\@\@AEAAXAEAV?$vector\@UTrade\@\@V?$allocator\@UTrade\@\@\@std\@\@\@std\@\@_K\@Z
     */
    MCAPI void _rearrangeTradeList(std::vector<struct Trade> &, unsigned __int64);
    /**
     * @symbol  ?_setMaxTradeTier\@EconomyTradeableComponent\@\@AEAAXH\@Z
     */
    MCAPI void _setMaxTradeTier(int);
    /**
     * @symbol  ?_setTradeTier\@EconomyTradeableComponent\@\@AEAAXH\@Z
     */
    MCAPI void _setTradeTier(int);

private:

};