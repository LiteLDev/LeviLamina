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
     * @hash   1953951814
     * @symbol  ??0EconomyTradeableComponent\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI EconomyTradeableComponent(class Actor &);
    /**
     * @hash   -682999944
     * @symbol  ?addAdditionalSaveData\@EconomyTradeableComponent\@\@QEAAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &);
    /**
     * @hash   -1424945071
     * @symbol  ?createDataPacket\@EconomyTradeableComponent\@\@QEAA?AVUpdateTradePacket\@\@W4ContainerID\@\@\@Z
     */
    MCAPI class UpdateTradePacket createDataPacket(enum class ContainerID);
    /**
     * @hash   636456905
     * @symbol  ?fixVillagerTierToMatchTradeList\@EconomyTradeableComponent\@\@QEAAXPEAVMerchantRecipeList\@\@\@Z
     */
    MCAPI void fixVillagerTierToMatchTradeList(class MerchantRecipeList *);
    /**
     * @hash   -2094846852
     * @symbol  ?getCurrentCuredDiscount\@EconomyTradeableComponent\@\@QEBA?AUIntRange\@\@XZ
     */
    MCAPI struct IntRange getCurrentCuredDiscount() const;
    /**
     * @hash   -463418748
     * @symbol  ?getCurrentNearbyCuredDiscount\@EconomyTradeableComponent\@\@QEBAHXZ
     */
    MCAPI int getCurrentNearbyCuredDiscount() const;
    /**
     * @hash   1034439192
     * @symbol  ?getCurrentTradeExp\@EconomyTradeableComponent\@\@QEBAIXZ
     */
    MCAPI unsigned int getCurrentTradeExp() const;
    /**
     * @hash   -1392170902
     * @symbol  ?getDisplayName\@EconomyTradeableComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getDisplayName() const;
    /**
     * @hash   -244692350
     * @symbol  ?getInteraction\@EconomyTradeableComponent\@\@QEAA_NAEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Player &, class ActorInteraction &);
    /**
     * @hash   -1137562859
     * @symbol  ?getOffers\@EconomyTradeableComponent\@\@QEAAPEAVMerchantRecipeList\@\@XZ
     */
    MCAPI class MerchantRecipeList * getOffers();
    /**
     * @hash   -1136984040
     * @symbol  ?getRiches\@EconomyTradeableComponent\@\@QEBAHXZ
     */
    MCAPI int getRiches() const;
    /**
     * @hash   1119964432
     * @symbol  ?getTradeTier\@EconomyTradeableComponent\@\@QEBAIXZ
     */
    MCAPI unsigned int getTradeTier() const;
    /**
     * @hash   -400266314
     * @symbol  ?hasSupplyRemaining\@EconomyTradeableComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasSupplyRemaining() const;
    /**
     * @hash   -1987213507
     * @symbol  ?initFromDefinition\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void initFromDefinition();
    /**
     * @hash   2109006734
     * @symbol  ?loadDisplayName\@EconomyTradeableComponent\@\@QEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & loadDisplayName();
    /**
     * @hash   1334219625
     * @symbol  ?loadOffersFromTag\@EconomyTradeableComponent\@\@QEAAXPEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadOffersFromTag(class CompoundTag const *);
    /**
     * @hash   -774513833
     * @symbol  ?matchExpAndTier\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void matchExpAndTier();
    /**
     * @hash   -631945981
     * @symbol  ?newServerAiStep\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void newServerAiStep();
    /**
     * @hash   688592880
     * @symbol  ?notifyTrade\@EconomyTradeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void notifyTrade(int);
    /**
     * @hash   -412851295
     * @symbol  ?readAdditionalSaveData\@EconomyTradeableComponent\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   762699949
     * @symbol  ?reloadComponent\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void reloadComponent();
    /**
     * @hash   -481613643
     * @symbol  ?resupplyTrades\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void resupplyTrades();
    /**
     * @hash   1621309066
     * @symbol  ?setNearbyCuredDiscount\@EconomyTradeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setNearbyCuredDiscount(int);
    /**
     * @hash   802990222
     * @symbol  ?setOffers\@EconomyTradeableComponent\@\@QEAAXAEAVMerchantRecipeList\@\@\@Z
     */
    MCAPI void setOffers(class MerchantRecipeList &);
    /**
     * @hash   -1714697874
     * @symbol  ?setRiches\@EconomyTradeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setRiches(int);
    /**
     * @hash   856675620
     * @symbol  ?shouldConvertTrades\@EconomyTradeableComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldConvertTrades() const;
    /**
     * @hash   1359522164
     * @symbol  ?shouldPersistTrades\@EconomyTradeableComponent\@\@QEBA_NXZ
     */
    MCAPI bool shouldPersistTrades() const;
    /**
     * @hash   1450296804
     * @symbol  ?showTradeScreen\@EconomyTradeableComponent\@\@QEAA_NXZ
     */
    MCAPI bool showTradeScreen();
    /**
     * @hash   785679544
     * @symbol  ?tickDiscountDegradationTimer\@EconomyTradeableComponent\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void tickDiscountDegradationTimer(struct Tick);
    /**
     * @hash   875734621
     * @symbol  ?tryIncrementCuredDiscount\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void tryIncrementCuredDiscount();
    /**
     * @hash   1148782383
     * @symbol  ?tryIncrementNearbyCuredDiscount\@EconomyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void tryIncrementNearbyCuredDiscount();
    /**
     * @hash   1244554695
     * @symbol  ?tryToTransferOldOffers\@EconomyTradeableComponent\@\@QEAAXPEAVMerchantRecipeList\@\@\@Z
     */
    MCAPI void tryToTransferOldOffers(class MerchantRecipeList *);
    /**
     * @hash   864502145
     * @symbol  ?isUseNewTradeScreen\@EconomyTradeableComponent\@\@SA_NAEBVActor\@\@\@Z
     */
    MCAPI static bool isUseNewTradeScreen(class Actor const &);

//private:
    /**
     * @hash   413966588
     * @symbol  ?_generateTrades\@EconomyTradeableComponent\@\@AEAA_NXZ
     */
    MCAPI bool _generateTrades();
    /**
     * @hash   2131931601
     * @symbol  ?_getTradeTable\@EconomyTradeableComponent\@\@AEAAPEAUTradeTable\@\@XZ
     */
    MCAPI struct TradeTable * _getTradeTable();
    /**
     * @hash   -1049434965
     * @symbol  ?_getTradeTierFromCurrentExp\@EconomyTradeableComponent\@\@AEBAIXZ
     */
    MCAPI unsigned int _getTradeTierFromCurrentExp() const;
    /**
     * @hash   1810359577
     * @symbol  ?_rearrangeTradeList\@EconomyTradeableComponent\@\@AEAAXAEAV?$vector\@UTrade\@\@V?$allocator\@UTrade\@\@\@std\@\@\@std\@\@_K\@Z
     */
    MCAPI void _rearrangeTradeList(std::vector<struct Trade> &, unsigned __int64);
    /**
     * @hash   1930827451
     * @symbol  ?_setMaxTradeTier\@EconomyTradeableComponent\@\@AEAAXH\@Z
     */
    MCAPI void _setMaxTradeTier(int);
    /**
     * @hash   -686118803
     * @symbol  ?_setTradeTier\@EconomyTradeableComponent\@\@AEAAXH\@Z
     */
    MCAPI void _setTradeTier(int);

private:

};