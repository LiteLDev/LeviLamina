#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"

class EconomyTradeableComponent {
public:
    // prevent constructor by default
    EconomyTradeableComponent& operator=(EconomyTradeableComponent const&);
    EconomyTradeableComponent(EconomyTradeableComponent const&);
    EconomyTradeableComponent();

public:
    // NOLINTBEGIN
    MCAPI explicit EconomyTradeableComponent(class Actor& owner);

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI class UpdateTradePacket createDataPacket(::ContainerID containerID);

    MCAPI void fixVillagerTierToMatchTradeList(class MerchantRecipeList* oldOffers);

    MCAPI struct IntRange getCurrentCuredDiscount() const;

    MCAPI int getCurrentNearbyCuredDiscount() const;

    MCAPI std::string const& getDisplayName() const;

    MCAPI bool getInteraction(class Player& player, class ActorInteraction& interaction);

    MCAPI class MerchantRecipeList* getOffers();

    MCAPI int getRiches() const;

    MCAPI uint getTradeTier() const;

    MCAPI bool hasSupplyRemaining() const;

    MCAPI void initFromDefinition();

    MCAPI std::string const& loadDisplayName();

    MCAPI void loadOffersFromTag(class CompoundTag const* tag);

    MCAPI void matchExpAndTier();

    MCAPI void newServerAiStep();

    MCAPI void notifyTrade(int recipeIndex);

    MCAPI void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void reloadComponent();

    MCAPI void resupplyTrades();

    MCAPI void setNearbyCuredDiscount(int discount);

    MCAPI void setOffers(class MerchantRecipeList& offers);

    MCAPI void setRiches(int riches);

    MCAPI bool shouldConvertTrades() const;

    MCAPI bool shouldPersistTrades() const;

    MCAPI bool showTradeScreen();

    MCAPI void tickDiscountDegradationTimer(struct Tick currentTick);

    MCAPI void tryIncrementCuredDiscount();

    MCAPI void tryIncrementNearbyCuredDiscount();

    MCAPI void tryToTransferOldOffers(class MerchantRecipeList* oldOffers);

    MCAPI static bool isUseNewTradeScreen(class Actor const& owner);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _generateTrades();

    MCAPI struct TradeTable* _getTradeTable();

    MCAPI uint _getTradeTierFromCurrentExp() const;

    MCAPI void _rearrangeTradeList(std::vector<struct Trade>& tradeList, uint64 sampleCount);

    MCAPI void _setMaxTradeTier(int tradeTier);

    MCAPI void _setTradeTier(int tradeTier);

    // NOLINTEND
};
