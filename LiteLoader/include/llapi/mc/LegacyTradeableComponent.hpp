/**
 * @file  MC/LegacyTradeableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyTradeableComponent.
 *
 */
class LegacyTradeableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYTRADEABLECOMPONENT
public:
    class LegacyTradeableComponent& operator=(class LegacyTradeableComponent const &) = delete;
    LegacyTradeableComponent(class LegacyTradeableComponent const &) = delete;
#endif

public:
    /**
     * @hash   7101749
     * @symbol ?DecrementMerchantTimer@LegacyTradeableComponent@@QEAAXXZ
     */
    MCAPI void DecrementMerchantTimer();
    /**
     * @hash   916573189
     * @symbol ?IncrementTradeTier@LegacyTradeableComponent@@QEAAXXZ
     */
    MCAPI void IncrementTradeTier();
    /**
     * @hash   1140842564
     * @symbol ??0LegacyTradeableComponent@@QEAA@XZ
     */
    MCAPI LegacyTradeableComponent();
    /**
     * @hash   -1430296104
     * @symbol ?addAdditionalSaveData@LegacyTradeableComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -373937086
     * @symbol ?createDataPacket@LegacyTradeableComponent@@QEAA?AVUpdateTradePacket@@AEAVActor@@W4ContainerID@@@Z
     */
    MCAPI class UpdateTradePacket createDataPacket(class Actor &, enum ContainerID);
    /**
     * @hash   906238944
     * @symbol ?getAddRecipeOnUpdate@LegacyTradeableComponent@@QEBA_NXZ
     */
    MCAPI bool getAddRecipeOnUpdate() const;
    /**
     * @hash   52607870
     * @symbol ?getDisplayName@LegacyTradeableComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getDisplayName() const;
    /**
     * @hash   807711949
     * @symbol ?getInteraction@LegacyTradeableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   1328024503
     * @symbol ?getLastPlayerTradeName@LegacyTradeableComponent@@QEBAPEBVPlayer@@XZ
     */
    MCAPI class Player const * getLastPlayerTradeName() const;
    /**
     * @hash   -2068557052
     * @symbol ?getOffers@LegacyTradeableComponent@@QEAAPEAVMerchantRecipeList@@AEAVActor@@@Z
     */
    MCAPI class MerchantRecipeList * getOffers(class Actor &);
    /**
     * @hash   -1912546006
     * @symbol ?getResetLockedOnFirstTrade@LegacyTradeableComponent@@QEBA_NXZ
     */
    MCAPI bool getResetLockedOnFirstTrade() const;
    /**
     * @hash   -1922094522
     * @symbol ?getRiches@LegacyTradeableComponent@@QEBAHXZ
     */
    MCAPI int getRiches() const;
    /**
     * @hash   280353032
     * @symbol ?getTradeTier@LegacyTradeableComponent@@QEBAHXZ
     */
    MCAPI int getTradeTier() const;
    /**
     * @hash   1264332152
     * @symbol ?getUpdateMerchantTimer@LegacyTradeableComponent@@QEBAHXZ
     */
    MCAPI int getUpdateMerchantTimer() const;
    /**
     * @hash   883781873
     * @symbol ?loadDisplayName@LegacyTradeableComponent@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
     */
    MCAPI std::string const & loadDisplayName(class Actor &);
    /**
     * @hash   1993717377
     * @symbol ?loadOffersFromTag@LegacyTradeableComponent@@QEAAXPEBVCompoundTag@@@Z
     */
    MCAPI void loadOffersFromTag(class CompoundTag const *);
    /**
     * @hash   -1767357369
     * @symbol ?notifyTrade@LegacyTradeableComponent@@QEAAXAEAVActor@@H@Z
     */
    MCAPI void notifyTrade(class Actor &, int);
    /**
     * @hash   -1531567956
     * @symbol ??4LegacyTradeableComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class LegacyTradeableComponent & operator=(class LegacyTradeableComponent &&);
    /**
     * @hash   1696555210
     * @symbol ?readAdditionalSaveData@LegacyTradeableComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   944440716
     * @symbol ?reloadComponent@LegacyTradeableComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void reloadComponent(class Actor &);
    /**
     * @hash   470593132
     * @symbol ?restockAllRecipes@LegacyTradeableComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void restockAllRecipes(class Actor &);
    /**
     * @hash   731723988
     * @symbol ?setAddRecipeOnUpdate@LegacyTradeableComponent@@QEAAX_N@Z
     */
    MCAPI void setAddRecipeOnUpdate(bool);
    /**
     * @hash   -393776560
     * @symbol ?setOffers@LegacyTradeableComponent@@QEAAXAEAVMerchantRecipeList@@@Z
     */
    MCAPI void setOffers(class MerchantRecipeList &);
    /**
     * @hash   1122917706
     * @symbol ?setResetLockedOnFirstTrade@LegacyTradeableComponent@@QEAAX_N@Z
     */
    MCAPI void setResetLockedOnFirstTrade(bool);
    /**
     * @hash   1488661352
     * @symbol ?setRiches@LegacyTradeableComponent@@QEAAXH@Z
     */
    MCAPI void setRiches(int);
    /**
     * @hash   -2134945194
     * @symbol ?setTradeTier@LegacyTradeableComponent@@QEAAXH@Z
     */
    MCAPI void setTradeTier(int);
    /**
     * @hash   39921775
     * @symbol ?shouldConvertTrades@LegacyTradeableComponent@@QEBA_NAEAVActor@@@Z
     */
    MCAPI bool shouldConvertTrades(class Actor &) const;
    /**
     * @hash   1578402925
     * @symbol ?shouldPersistTrades@LegacyTradeableComponent@@QEBA_NAEAVActor@@@Z
     */
    MCAPI bool shouldPersistTrades(class Actor &) const;
    /**
     * @hash   273877228
     * @symbol ?updateTradeTier@LegacyTradeableComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void updateTradeTier(class Actor &);
    /**
     * @hash   -1984029662
     * @symbol ??1LegacyTradeableComponent@@QEAA@XZ
     */
    MCAPI ~LegacyTradeableComponent();
    /**
     * @hash   -1890108373
     * @symbol ?isUseNewTradeScreen@LegacyTradeableComponent@@SA_NAEBVActor@@@Z
     */
    MCAPI static bool isUseNewTradeScreen(class Actor const &);

//private:
    /**
     * @hash   14305713
     * @symbol ?_getTradeTable@LegacyTradeableComponent@@AEAAPEAUTradeTable@@AEAVActor@@@Z
     */
    MCAPI struct TradeTable * _getTradeTable(class Actor &);
    /**
     * @hash   -270961491
     * @symbol ?_rearrangeTradeList@LegacyTradeableComponent@@AEAAXAEAVActor@@AEAV?$vector@UTrade@@V?$allocator@UTrade@@@std@@@std@@_K@Z
     */
    MCAPI void _rearrangeTradeList(class Actor &, std::vector<struct Trade> &, unsigned __int64);
    /**
     * @hash   554949582
     * @symbol ?_refreshTrades@LegacyTradeableComponent@@AEAA_NAEAVActor@@@Z
     */
    MCAPI bool _refreshTrades(class Actor &);

private:

};