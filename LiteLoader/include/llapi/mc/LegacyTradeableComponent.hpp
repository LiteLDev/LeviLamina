/**
 * @file  LegacyTradeableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   134476533
     * @symbol  ?DecrementMerchantTimer\@LegacyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void DecrementMerchantTimer();
    /**
     * @hash   1048360885
     * @symbol  ?IncrementTradeTier\@LegacyTradeableComponent\@\@QEAAXXZ
     */
    MCAPI void IncrementTradeTier();
    /**
     * @hash   1272630260
     * @symbol  ??0LegacyTradeableComponent\@\@QEAA\@XZ
     */
    MCAPI LegacyTradeableComponent();
    /**
     * @hash   -1298200888
     * @symbol  ?addAdditionalSaveData\@LegacyTradeableComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -242072510
     * @symbol  ?createDataPacket\@LegacyTradeableComponent\@\@QEAA?AVUpdateTradePacket\@\@AEAVActor\@\@W4ContainerID\@\@\@Z
     */
    MCAPI class UpdateTradePacket createDataPacket(class Actor &, enum class ContainerID);
    /**
     * @hash   1038118896
     * @symbol  ?getAddRecipeOnUpdate\@LegacyTradeableComponent\@\@QEBA_NXZ
     */
    MCAPI bool getAddRecipeOnUpdate() const;
    /**
     * @hash   158871406
     * @symbol  ?getDisplayName\@LegacyTradeableComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getDisplayName() const;
    /**
     * @hash   939591901
     * @symbol  ?getInteraction\@LegacyTradeableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   1431797127
     * @symbol  ?getLastPlayerTradeName\@LegacyTradeableComponent\@\@QEBAPEBVPlayer\@\@XZ
     */
    MCAPI class Player const * getLastPlayerTradeName() const;
    /**
     * @hash   -1936615596
     * @symbol  ?getOffers\@LegacyTradeableComponent\@\@QEAAPEAVMerchantRecipeList\@\@AEAVActor\@\@\@Z
     */
    MCAPI class MerchantRecipeList * getOffers(class Actor &);
    /**
     * @hash   -1780604550
     * @symbol  ?getResetLockedOnFirstTrade\@LegacyTradeableComponent\@\@QEBA_NXZ
     */
    MCAPI bool getResetLockedOnFirstTrade() const;
    /**
     * @hash   -1671081322
     * @symbol  ?getRiches\@LegacyTradeableComponent\@\@QEBAHXZ
     */
    MCAPI int getRiches() const;
    /**
     * @hash   407789320
     * @symbol  ?getTradeTier\@LegacyTradeableComponent\@\@QEBAHXZ
     */
    MCAPI int getTradeTier() const;
    /**
     * @hash   1515345352
     * @symbol  ?getUpdateMerchantTimer\@LegacyTradeableComponent\@\@QEBAHXZ
     */
    MCAPI int getUpdateMerchantTimer() const;
    /**
     * @hash   1015723329
     * @symbol  ?loadDisplayName\@LegacyTradeableComponent\@\@QEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVActor\@\@\@Z
     */
    MCAPI std::string const & loadDisplayName(class Actor &);
    /**
     * @hash   2125674209
     * @symbol  ?loadOffersFromTag\@LegacyTradeableComponent\@\@QEAAXPEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadOffersFromTag(class CompoundTag const *);
    /**
     * @hash   -1635385161
     * @symbol  ?notifyTrade\@LegacyTradeableComponent\@\@QEAAXAEAVActor\@\@H\@Z
     */
    MCAPI void notifyTrade(class Actor &, int);
    /**
     * @hash   -1383696964
     * @symbol  ??4LegacyTradeableComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LegacyTradeableComponent & operator=(class LegacyTradeableComponent &&);
    /**
     * @hash   1828573546
     * @symbol  ?readAdditionalSaveData\@LegacyTradeableComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1076305292
     * @symbol  ?reloadComponent\@LegacyTradeableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void reloadComponent(class Actor &);
    /**
     * @hash   602457708
     * @symbol  ?restockAllRecipes\@LegacyTradeableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void restockAllRecipes(class Actor &);
    /**
     * @hash   863603940
     * @symbol  ?setAddRecipeOnUpdate\@LegacyTradeableComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setAddRecipeOnUpdate(bool);
    /**
     * @hash   -261896608
     * @symbol  ?setOffers\@LegacyTradeableComponent\@\@QEAAXAEAVMerchantRecipeList\@\@\@Z
     */
    MCAPI void setOffers(class MerchantRecipeList &);
    /**
     * @hash   1254813034
     * @symbol  ?setResetLockedOnFirstTrade\@LegacyTradeableComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setResetLockedOnFirstTrade(bool);
    /**
     * @hash   1620556680
     * @symbol  ?setRiches\@LegacyTradeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setRiches(int);
    /**
     * @hash   -2007385898
     * @symbol  ?setTradeTier\@LegacyTradeableComponent\@\@QEAAXH\@Z
     */
    MCAPI void setTradeTier(int);
    /**
     * @hash   171817103
     * @symbol  ?shouldConvertTrades\@LegacyTradeableComponent\@\@QEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool shouldConvertTrades(class Actor &) const;
    /**
     * @hash   1710298253
     * @symbol  ?shouldPersistTrades\@LegacyTradeableComponent\@\@QEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool shouldPersistTrades(class Actor &) const;
    /**
     * @hash   405588044
     * @symbol  ?updateTradeTier\@LegacyTradeableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void updateTradeTier(class Actor &);
    /**
     * @hash   -1836635326
     * @symbol  ??1LegacyTradeableComponent\@\@QEAA\@XZ
     */
    MCAPI ~LegacyTradeableComponent();
    /**
     * @hash   -1758166917
     * @symbol  ?isUseNewTradeScreen\@LegacyTradeableComponent\@\@SA_NAEBVActor\@\@\@Z
     */
    MCAPI static bool isUseNewTradeScreen(class Actor const &);

//private:
    /**
     * @hash   146108785
     * @symbol  ?_getTradeTable\@LegacyTradeableComponent\@\@AEAAPEAUTradeTable\@\@AEAVActor\@\@\@Z
     */
    MCAPI struct TradeTable * _getTradeTable(class Actor &);
    /**
     * @hash   -139158419
     * @symbol  ?_rearrangeTradeList\@LegacyTradeableComponent\@\@AEAAXAEAVActor\@\@AEAV?$vector\@UTrade\@\@V?$allocator\@UTrade\@\@\@std\@\@\@std\@\@_K\@Z
     */
    MCAPI void _rearrangeTradeList(class Actor &, std::vector<struct Trade> &, unsigned __int64);
    /**
     * @hash   686752654
     * @symbol  ?_refreshTrades\@LegacyTradeableComponent\@\@AEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool _refreshTrades(class Actor &);

private:

};