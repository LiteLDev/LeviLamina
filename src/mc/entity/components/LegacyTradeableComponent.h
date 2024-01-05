#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"

class LegacyTradeableComponent {
public:
    // prevent constructor by default
    LegacyTradeableComponent& operator=(LegacyTradeableComponent const&);
    LegacyTradeableComponent(LegacyTradeableComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ?DecrementMerchantTimer@LegacyTradeableComponent@@QEAAXXZ
    MCAPI void DecrementMerchantTimer();

    // symbol: ?IncrementTradeTier@LegacyTradeableComponent@@QEAAXXZ
    MCAPI void IncrementTradeTier();

    // symbol: ??0LegacyTradeableComponent@@QEAA@XZ
    MCAPI LegacyTradeableComponent();

    // symbol: ?addAdditionalSaveData@LegacyTradeableComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?createDataPacket@LegacyTradeableComponent@@QEAA?AVUpdateTradePacket@@AEAVActor@@W4ContainerID@@@Z
    MCAPI class UpdateTradePacket createDataPacket(class Actor& owner, ::ContainerID containerID);

    // symbol: ?getAddRecipeOnUpdate@LegacyTradeableComponent@@QEBA_NXZ
    MCAPI bool getAddRecipeOnUpdate() const;

    // symbol:
    // ?getDisplayName@LegacyTradeableComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getDisplayName() const;

    // symbol: ?getInteraction@LegacyTradeableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    // symbol: ?getLastPlayerTradeID@LegacyTradeableComponent@@QEBA?BUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID const getLastPlayerTradeID() const;

    // symbol: ?getOffers@LegacyTradeableComponent@@QEAAPEAVMerchantRecipeList@@AEAVActor@@@Z
    MCAPI class MerchantRecipeList* getOffers(class Actor& owner);

    // symbol: ?getResetLockedOnFirstTrade@LegacyTradeableComponent@@QEBA_NXZ
    MCAPI bool getResetLockedOnFirstTrade() const;

    // symbol: ?getRiches@LegacyTradeableComponent@@QEBAHXZ
    MCAPI int getRiches() const;

    // symbol: ?getTradeTier@LegacyTradeableComponent@@QEBAHXZ
    MCAPI int getTradeTier() const;

    // symbol: ?getUpdateMerchantTimer@LegacyTradeableComponent@@QEBAHXZ
    MCAPI int getUpdateMerchantTimer() const;

    // symbol:
    // ?loadDisplayName@LegacyTradeableComponent@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
    MCAPI std::string const& loadDisplayName(class Actor&);

    // symbol: ?loadOffersFromTag@LegacyTradeableComponent@@QEAAXPEBVCompoundTag@@@Z
    MCAPI void loadOffersFromTag(class CompoundTag const* tag);

    // symbol: ?notifyTrade@LegacyTradeableComponent@@QEAAXAEAVActor@@H@Z
    MCAPI void notifyTrade(class Actor& owner, int recipeIndex);

    // symbol: ??4LegacyTradeableComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class LegacyTradeableComponent& operator=(class LegacyTradeableComponent&&);

    // symbol: ?readAdditionalSaveData@LegacyTradeableComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?reloadComponent@LegacyTradeableComponent@@QEAAXAEAVActor@@@Z
    MCAPI void reloadComponent(class Actor& actor);

    // symbol: ?restockAllRecipes@LegacyTradeableComponent@@QEAAXAEAVActor@@@Z
    MCAPI void restockAllRecipes(class Actor& owner);

    // symbol: ?setAddRecipeOnUpdate@LegacyTradeableComponent@@QEAAX_N@Z
    MCAPI void setAddRecipeOnUpdate(bool addRecipeOnUpdate);

    // symbol: ?setOffers@LegacyTradeableComponent@@QEAAXAEAVMerchantRecipeList@@@Z
    MCAPI void setOffers(class MerchantRecipeList& offers);

    // symbol: ?setResetLockedOnFirstTrade@LegacyTradeableComponent@@QEAAX_N@Z
    MCAPI void setResetLockedOnFirstTrade(bool resetLockedOnFirstTrade);

    // symbol: ?setRiches@LegacyTradeableComponent@@QEAAXH@Z
    MCAPI void setRiches(int riches);

    // symbol: ?setTradeTier@LegacyTradeableComponent@@QEAAXH@Z
    MCAPI void setTradeTier(int tier);

    // symbol: ?shouldConvertTrades@LegacyTradeableComponent@@QEBA_NAEAVActor@@@Z
    MCAPI bool shouldConvertTrades(class Actor& owner) const;

    // symbol: ?shouldPersistTrades@LegacyTradeableComponent@@QEBA_NAEAVActor@@@Z
    MCAPI bool shouldPersistTrades(class Actor& owner) const;

    // symbol: ?updateTradeTier@LegacyTradeableComponent@@QEAAXAEAVActor@@@Z
    MCAPI void updateTradeTier(class Actor& owner);

    // symbol: ??1LegacyTradeableComponent@@QEAA@XZ
    MCAPI ~LegacyTradeableComponent();

    // symbol: ?isUseNewTradeScreen@LegacyTradeableComponent@@SA_NAEBVActor@@@Z
    MCAPI static bool isUseNewTradeScreen(class Actor const& owner);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getTradeTable@LegacyTradeableComponent@@AEAAPEAUTradeTable@@AEAVActor@@@Z
    MCAPI struct TradeTable* _getTradeTable(class Actor& owner);

    // symbol:
    // ?_rearrangeTradeList@LegacyTradeableComponent@@AEAAXAEAVActor@@AEAV?$vector@UTrade@@V?$allocator@UTrade@@@std@@@std@@_K@Z
    MCAPI void _rearrangeTradeList(class Actor& owner, std::vector<struct Trade>& tradeList, uint64 sampleCount);

    // symbol: ?_refreshTrades@LegacyTradeableComponent@@AEAA_NAEAVActor@@@Z
    MCAPI bool _refreshTrades(class Actor& owner);

    // NOLINTEND
};
