#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class BaseGameVersion;
class CompoundTag;
class DataLoadHelper;
class MerchantRecipeList;
class Player;
class UpdateTradePacket;
struct IntRange;
struct Trade;
struct TradeTable;
// clang-format on

class EconomyTradeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                         mLastTradingPlayer;
    ::ll::TypedStorage<4, 4, int>                                     mUpdateMerchantTimer;
    ::ll::TypedStorage<1, 1, bool>                                    mAddRecipeOnUpdate;
    ::ll::TypedStorage<4, 4, int>                                     mRiches;
    ::ll::TypedStorage<8, 8, ::Actor&>                                mOwner;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MerchantRecipeList>> mOffers;
    ::ll::TypedStorage<8, 32, ::std::string>                          mDisplayName;
    ::ll::TypedStorage<8, 32, ::std::string>                          mGeneratedTablePath;
    ::ll::TypedStorage<1, 1, bool>                                    mConvertedFromVillagerV1;
    ::ll::TypedStorage<4, 4, int>                                     mDiscountDegradationTimeStamp;
    // NOLINTEND

public:
    // prevent constructor by default
    EconomyTradeableComponent& operator=(EconomyTradeableComponent const&);
    EconomyTradeableComponent(EconomyTradeableComponent const&);
    EconomyTradeableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _calculateDemandPrices(
        int               lowTierDiscount,
        int               highTierDiscount,
        int               nearbyCuredDiscount,
        int               heroEffectAmplifier,
        bool              hasHeroOfTheVillage,
        ::BaseGameVersion baseGameVersion
    );

    MCAPI bool _generateTrades();

    MCAPI ::TradeTable* _getTradeTable();

    MCAPI uint _getTradeTierFromCurrentExp() const;

    MCAPI void _rearrangeTradeList(::std::vector<::Trade>& tradeList, uint64 sampleCount);

    MCAPI void _setMaxTradeTier(int tradeTier);

    MCAPI void _setTradeTier(int tradeTier);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::UpdateTradePacket createDataPacket(::ContainerID containerID);

    MCAPI void fixVillagerTierToMatchTradeList(::MerchantRecipeList* oldOffers);

    MCAPI ::IntRange getCurrentCuredDiscount() const;

    MCAPI int getCurrentNearbyCuredDiscount() const;

    MCAPI bool getInteraction(::Player& player, ::ActorInteraction& interaction);

    MCAPI ::MerchantRecipeList* getOffers();

    MCAPI uint getTradeTier() const;

    MCAPI void loadOffersFromTag(::CompoundTag const* tag);

    MCAPI void matchExpAndTier();

    MCAPI void newServerAiStep();

    MCAPI void notifyTrade(int recipeIndex, int numTrades);

    MCAPI void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void setCurrentTradeExp(int currentTradeExp);

    MCAPI_C void setDataFromPacket(::UpdateTradePacket const& packet);

    MCAPI void setNearbyCuredDiscount(int discount);

    MCAPI void tryIncrementCuredDiscount();

    MCAPI void tryIncrementNearbyCuredDiscount();

    MCAPI void tryToTransferOldOffers(::MerchantRecipeList* oldOffers);
    // NOLINTEND
};
