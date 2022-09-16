/**
 * @file  EconomyTradeableComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @symbol ??0EconomyTradeableComponent@@QEAA@AEAVActor@@@Z
     * @hash   -1714028330
     */
    MCAPI EconomyTradeableComponent(class Actor &);
    /**
     * @symbol ?addAdditionalSaveData@EconomyTradeableComponent@@QEAAXAEAVCompoundTag@@@Z
     * @hash   -56289560
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &);
    /**
     * @symbol ?createDataPacket@EconomyTradeableComponent@@QEAA?AVUpdateTradePacket@@W4ContainerID@@@Z
     * @hash   -798296191
     */
    MCAPI class UpdateTradePacket createDataPacket(enum ContainerID);
    /**
     * @symbol ?fixVillagerTierToMatchTradeList@EconomyTradeableComponent@@QEAAXPEAVMerchantRecipeList@@@Z
     * @hash   1263075033
     */
    MCAPI void fixVillagerTierToMatchTradeList(class MerchantRecipeList *);
    /**
     * @symbol ?getCurrentCuredDiscount@EconomyTradeableComponent@@QEBA?AUIntRange@@XZ
     * @hash   -1468228724
     */
    MCAPI struct IntRange getCurrentCuredDiscount() const;
    /**
     * @symbol ?getCurrentNearbyCuredDiscount@EconomyTradeableComponent@@QEBAHXZ
     * @hash   163199380
     */
    MCAPI int getCurrentNearbyCuredDiscount() const;
    /**
     * @symbol ?getCurrentTradeExp@EconomyTradeableComponent@@QEBAIXZ
     * @hash   1661057320
     */
    MCAPI unsigned int getCurrentTradeExp() const;
    /**
     * @symbol ?getDisplayName@EconomyTradeableComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1645413622
     */
    MCAPI std::string const & getDisplayName() const;
    /**
     * @symbol ?getInteraction@EconomyTradeableComponent@@QEAA_NAEAVPlayer@@AEAVActorInteraction@@@Z
     * @hash   381925778
     */
    MCAPI bool getInteraction(class Player &, class ActorInteraction &);
    /**
     * @symbol ?getOffers@EconomyTradeableComponent@@QEAAPEAVMerchantRecipeList@@XZ
     * @hash   -511006235
     */
    MCAPI class MerchantRecipeList * getOffers();
    /**
     * @symbol ?getRiches@EconomyTradeableComponent@@QEBAHXZ
     * @hash   -510427416
     */
    MCAPI int getRiches() const;
    /**
     * @symbol ?getTradeTier@EconomyTradeableComponent@@QEBAIXZ
     * @hash   1746521056
     */
    MCAPI unsigned int getTradeTier() const;
    /**
     * @symbol ?hasSupplyRemaining@EconomyTradeableComponent@@QEBA_NXZ
     * @hash   226290310
     */
    MCAPI bool hasSupplyRemaining() const;
    /**
     * @symbol ?initFromDefinition@EconomyTradeableComponent@@QEAAXXZ
     * @hash   -2079100483
     */
    MCAPI void initFromDefinition();
    /**
     * @symbol ?loadDisplayName@EconomyTradeableComponent@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1559403938
     */
    MCAPI std::string const & loadDisplayName();
    /**
     * @symbol ?loadOffersFromTag@EconomyTradeableComponent@@QEAAXPEBVCompoundTag@@@Z
     * @hash   1960760873
     */
    MCAPI void loadOffersFromTag(class CompoundTag const *);
    /**
     * @symbol ?matchExpAndTier@EconomyTradeableComponent@@QEAAXXZ
     * @hash   -147987961
     */
    MCAPI void matchExpAndTier();
    /**
     * @symbol ?newServerAiStep@EconomyTradeableComponent@@QEAAXXZ
     * @hash   -5420109
     */
    MCAPI void newServerAiStep();
    /**
     * @symbol ?notifyTrade@EconomyTradeableComponent@@QEAAXH@Z
     * @hash   1315088000
     */
    MCAPI void notifyTrade(int);
    /**
     * @symbol ?readAdditionalSaveData@EconomyTradeableComponent@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   213597697
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?reloadComponent@EconomyTradeableComponent@@QEAAXXZ
     * @hash   1388979805
     */
    MCAPI void reloadComponent();
    /**
     * @symbol ?resupplyTrades@EconomyTradeableComponent@@QEAAXXZ
     * @hash   144666213
     */
    MCAPI void resupplyTrades();
    /**
     * @symbol ?setNearbyCuredDiscount@EconomyTradeableComponent@@QEAAXH@Z
     * @hash   -2047378374
     */
    MCAPI void setNearbyCuredDiscount(int);
    /**
     * @symbol ?setOffers@EconomyTradeableComponent@@QEAAXAEAVMerchantRecipeList@@@Z
     * @hash   1429254702
     */
    MCAPI void setOffers(class MerchantRecipeList &);
    /**
     * @symbol ?setRiches@EconomyTradeableComponent@@QEAAXH@Z
     * @hash   -1088448770
     */
    MCAPI void setRiches(int);
    /**
     * @symbol ?shouldConvertTrades@EconomyTradeableComponent@@QEBA_NXZ
     * @hash   1482924724
     */
    MCAPI bool shouldConvertTrades() const;
    /**
     * @symbol ?shouldPersistTrades@EconomyTradeableComponent@@QEBA_NXZ
     * @hash   1985771268
     */
    MCAPI bool shouldPersistTrades() const;
    /**
     * @symbol ?showTradeScreen@EconomyTradeableComponent@@QEAA_NXZ
     * @hash   2076545908
     */
    MCAPI bool showTradeScreen();
    /**
     * @symbol ?tickDiscountDegradationTimer@EconomyTradeableComponent@@QEAAXUTick@@@Z
     * @hash   1411928648
     */
    MCAPI void tickDiscountDegradationTimer(struct Tick);
    /**
     * @symbol ?tryIncrementCuredDiscount@EconomyTradeableComponent@@QEAAXXZ
     * @hash   1501983725
     */
    MCAPI void tryIncrementCuredDiscount();
    /**
     * @symbol ?tryIncrementNearbyCuredDiscount@EconomyTradeableComponent@@QEAAXXZ
     * @hash   1775031487
     */
    MCAPI void tryIncrementNearbyCuredDiscount();
    /**
     * @symbol ?tryToTransferOldOffers@EconomyTradeableComponent@@QEAAXPEAVMerchantRecipeList@@@Z
     * @hash   1870803799
     */
    MCAPI void tryToTransferOldOffers(class MerchantRecipeList *);
    /**
     * @symbol ?isUseNewTradeScreen@EconomyTradeableComponent@@SA_NAEBVActor@@@Z
     * @hash   1491058769
     */
    MCAPI static bool isUseNewTradeScreen(class Actor const &);

//private:
    /**
     * @symbol ?_generateTrades@EconomyTradeableComponent@@AEAA_NXZ
     * @hash   1040953740
     */
    MCAPI bool _generateTrades();
    /**
     * @symbol ?_getTradeTable@EconomyTradeableComponent@@AEAAPEAUTradeTable@@XZ
     * @hash   -1536309935
     */
    MCAPI struct TradeTable * _getTradeTable();
    /**
     * @symbol ?_getTradeTierFromCurrentExp@EconomyTradeableComponent@@AEBAIXZ
     * @hash   -422724581
     */
    MCAPI unsigned int _getTradeTierFromCurrentExp() const;
    /**
     * @symbol ?_rearrangeTradeList@EconomyTradeableComponent@@AEAAXAEAV?$vector@UTrade@@V?$allocator@UTrade@@@std@@@std@@_K@Z
     * @hash   -1857897335
     */
    MCAPI void _rearrangeTradeList(std::vector<struct Trade> &, unsigned __int64);
    /**
     * @symbol ?_setMaxTradeTier@EconomyTradeableComponent@@AEAAXH@Z
     * @hash   -1737429461
     */
    MCAPI void _setMaxTradeTier(int);
    /**
     * @symbol ?_setTradeTier@EconomyTradeableComponent@@AEAAXH@Z
     * @hash   -59408419
     */
    MCAPI void _setTradeTier(int);

private:

};