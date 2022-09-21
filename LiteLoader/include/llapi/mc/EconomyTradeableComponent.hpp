/**
 * @file  MC/EconomyTradeableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1714028330
     * @symbol ??0EconomyTradeableComponent@@QEAA@AEAVActor@@@Z
     */
    MCAPI EconomyTradeableComponent(class Actor &);
    /**
     * @hash   -56289560
     * @symbol ?addAdditionalSaveData@EconomyTradeableComponent@@QEAAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &);
    /**
     * @hash   -798296191
     * @symbol ?createDataPacket@EconomyTradeableComponent@@QEAA?AVUpdateTradePacket@@W4ContainerID@@@Z
     */
    MCAPI class UpdateTradePacket createDataPacket(enum ContainerID);
    /**
     * @hash   1263075033
     * @symbol ?fixVillagerTierToMatchTradeList@EconomyTradeableComponent@@QEAAXPEAVMerchantRecipeList@@@Z
     */
    MCAPI void fixVillagerTierToMatchTradeList(class MerchantRecipeList *);
    /**
     * @hash   -1468228724
     * @symbol ?getCurrentCuredDiscount@EconomyTradeableComponent@@QEBA?AUIntRange@@XZ
     */
    MCAPI struct IntRange getCurrentCuredDiscount() const;
    /**
     * @hash   163199380
     * @symbol ?getCurrentNearbyCuredDiscount@EconomyTradeableComponent@@QEBAHXZ
     */
    MCAPI int getCurrentNearbyCuredDiscount() const;
    /**
     * @hash   1661057320
     * @symbol ?getCurrentTradeExp@EconomyTradeableComponent@@QEBAIXZ
     */
    MCAPI unsigned int getCurrentTradeExp() const;
    /**
     * @hash   -1645413622
     * @symbol ?getDisplayName@EconomyTradeableComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getDisplayName() const;
    /**
     * @hash   381925778
     * @symbol ?getInteraction@EconomyTradeableComponent@@QEAA_NAEAVPlayer@@AEAVActorInteraction@@@Z
     */
    MCAPI bool getInteraction(class Player &, class ActorInteraction &);
    /**
     * @hash   -511006235
     * @symbol ?getOffers@EconomyTradeableComponent@@QEAAPEAVMerchantRecipeList@@XZ
     */
    MCAPI class MerchantRecipeList * getOffers();
    /**
     * @hash   -510427416
     * @symbol ?getRiches@EconomyTradeableComponent@@QEBAHXZ
     */
    MCAPI int getRiches() const;
    /**
     * @hash   1746521056
     * @symbol ?getTradeTier@EconomyTradeableComponent@@QEBAIXZ
     */
    MCAPI unsigned int getTradeTier() const;
    /**
     * @hash   226290310
     * @symbol ?hasSupplyRemaining@EconomyTradeableComponent@@QEBA_NXZ
     */
    MCAPI bool hasSupplyRemaining() const;
    /**
     * @hash   -2079100483
     * @symbol ?initFromDefinition@EconomyTradeableComponent@@QEAAXXZ
     */
    MCAPI void initFromDefinition();
    /**
     * @hash   -1559403938
     * @symbol ?loadDisplayName@EconomyTradeableComponent@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & loadDisplayName();
    /**
     * @hash   1960760873
     * @symbol ?loadOffersFromTag@EconomyTradeableComponent@@QEAAXPEBVCompoundTag@@@Z
     */
    MCAPI void loadOffersFromTag(class CompoundTag const *);
    /**
     * @hash   -147987961
     * @symbol ?matchExpAndTier@EconomyTradeableComponent@@QEAAXXZ
     */
    MCAPI void matchExpAndTier();
    /**
     * @hash   -5420109
     * @symbol ?newServerAiStep@EconomyTradeableComponent@@QEAAXXZ
     */
    MCAPI void newServerAiStep();
    /**
     * @hash   1315088000
     * @symbol ?notifyTrade@EconomyTradeableComponent@@QEAAXH@Z
     */
    MCAPI void notifyTrade(int);
    /**
     * @hash   213597697
     * @symbol ?readAdditionalSaveData@EconomyTradeableComponent@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1388979805
     * @symbol ?reloadComponent@EconomyTradeableComponent@@QEAAXXZ
     */
    MCAPI void reloadComponent();
    /**
     * @hash   144666213
     * @symbol ?resupplyTrades@EconomyTradeableComponent@@QEAAXXZ
     */
    MCAPI void resupplyTrades();
    /**
     * @hash   -2047378374
     * @symbol ?setNearbyCuredDiscount@EconomyTradeableComponent@@QEAAXH@Z
     */
    MCAPI void setNearbyCuredDiscount(int);
    /**
     * @hash   1429254702
     * @symbol ?setOffers@EconomyTradeableComponent@@QEAAXAEAVMerchantRecipeList@@@Z
     */
    MCAPI void setOffers(class MerchantRecipeList &);
    /**
     * @hash   -1088448770
     * @symbol ?setRiches@EconomyTradeableComponent@@QEAAXH@Z
     */
    MCAPI void setRiches(int);
    /**
     * @hash   1482924724
     * @symbol ?shouldConvertTrades@EconomyTradeableComponent@@QEBA_NXZ
     */
    MCAPI bool shouldConvertTrades() const;
    /**
     * @hash   1985771268
     * @symbol ?shouldPersistTrades@EconomyTradeableComponent@@QEBA_NXZ
     */
    MCAPI bool shouldPersistTrades() const;
    /**
     * @hash   2076545908
     * @symbol ?showTradeScreen@EconomyTradeableComponent@@QEAA_NXZ
     */
    MCAPI bool showTradeScreen();
    /**
     * @hash   1411928648
     * @symbol ?tickDiscountDegradationTimer@EconomyTradeableComponent@@QEAAXUTick@@@Z
     */
    MCAPI void tickDiscountDegradationTimer(struct Tick);
    /**
     * @hash   1501983725
     * @symbol ?tryIncrementCuredDiscount@EconomyTradeableComponent@@QEAAXXZ
     */
    MCAPI void tryIncrementCuredDiscount();
    /**
     * @hash   1775031487
     * @symbol ?tryIncrementNearbyCuredDiscount@EconomyTradeableComponent@@QEAAXXZ
     */
    MCAPI void tryIncrementNearbyCuredDiscount();
    /**
     * @hash   1870803799
     * @symbol ?tryToTransferOldOffers@EconomyTradeableComponent@@QEAAXPEAVMerchantRecipeList@@@Z
     */
    MCAPI void tryToTransferOldOffers(class MerchantRecipeList *);
    /**
     * @hash   1491058769
     * @symbol ?isUseNewTradeScreen@EconomyTradeableComponent@@SA_NAEBVActor@@@Z
     */
    MCAPI static bool isUseNewTradeScreen(class Actor const &);

//private:
    /**
     * @hash   1040953740
     * @symbol ?_generateTrades@EconomyTradeableComponent@@AEAA_NXZ
     */
    MCAPI bool _generateTrades();
    /**
     * @hash   -1536309935
     * @symbol ?_getTradeTable@EconomyTradeableComponent@@AEAAPEAUTradeTable@@XZ
     */
    MCAPI struct TradeTable * _getTradeTable();
    /**
     * @hash   -422724581
     * @symbol ?_getTradeTierFromCurrentExp@EconomyTradeableComponent@@AEBAIXZ
     */
    MCAPI unsigned int _getTradeTierFromCurrentExp() const;
    /**
     * @hash   -1857897335
     * @symbol ?_rearrangeTradeList@EconomyTradeableComponent@@AEAAXAEAV?$vector@UTrade@@V?$allocator@UTrade@@@std@@@std@@_K@Z
     */
    MCAPI void _rearrangeTradeList(std::vector<struct Trade> &, unsigned __int64);
    /**
     * @hash   -1737429461
     * @symbol ?_setMaxTradeTier@EconomyTradeableComponent@@AEAAXH@Z
     */
    MCAPI void _setMaxTradeTier(int);
    /**
     * @hash   -59408419
     * @symbol ?_setTradeTier@EconomyTradeableComponent@@AEAAXH@Z
     */
    MCAPI void _setTradeTier(int);

private:

};