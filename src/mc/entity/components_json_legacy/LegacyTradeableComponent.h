#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

class LegacyTradeableComponent {
public:
    // prevent constructor by default
    LegacyTradeableComponent& operator=(LegacyTradeableComponent const&);
    LegacyTradeableComponent(LegacyTradeableComponent const&);

public:
    // NOLINTBEGIN
    MCAPI void DecrementMerchantTimer();

    MCAPI void IncrementTradeTier();

    MCAPI LegacyTradeableComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI class UpdateTradePacket createDataPacket(class Actor& owner, ::ContainerID containerID);

    MCAPI bool getAddRecipeOnUpdate() const;

    MCAPI std::string const& getDisplayName() const;

    MCAPI bool getInteraction(class Actor& owner, class Player& player, class ActorInteraction& interaction);

    MCAPI struct ActorUniqueID const getLastPlayerTradeID() const;

    MCAPI class MerchantRecipeList* getOffers(class Actor& owner);

    MCAPI bool getResetLockedOnFirstTrade() const;

    MCAPI int getRiches() const;

    MCAPI int getTradeTier() const;

    MCAPI int getUpdateMerchantTimer() const;

    MCAPI std::string const& loadDisplayName(class Actor& owner);

    MCAPI void loadOffersFromTag(class CompoundTag const* tag);

    MCAPI void notifyTrade(class Actor& owner, int recipeIndex);

    MCAPI class LegacyTradeableComponent& operator=(class LegacyTradeableComponent&&);

    MCAPI void readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void reloadComponent(class Actor& actor);

    MCAPI void restockAllRecipes(class Actor& owner);

    MCAPI void setAddRecipeOnUpdate(bool addRecipeOnUpdate);

    MCAPI void setOffers(class MerchantRecipeList& offers);

    MCAPI void setResetLockedOnFirstTrade(bool resetLockedOnFirstTrade);

    MCAPI void setRiches(int riches);

    MCAPI void setTradeTier(int tier);

    MCAPI bool shouldConvertTrades(class Actor& owner) const;

    MCAPI bool shouldPersistTrades(class Actor& owner) const;

    MCAPI void updateTradeTier(class Actor& owner);

    MCAPI ~LegacyTradeableComponent();

    MCAPI static bool isUseNewTradeScreen(class Actor const& owner);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct TradeTable* _getTradeTable(class Actor& owner);

    MCAPI void _rearrangeTradeList(class Actor& owner, std::vector<struct Trade>& tradeList, uint64 sampleCount);

    MCAPI bool _refreshTrades(class Actor& owner);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
