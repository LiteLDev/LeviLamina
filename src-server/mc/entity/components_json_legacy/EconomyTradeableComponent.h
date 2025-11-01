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
    MCNAPI void _calculateDemandPrices(
        int               lowTierDiscount,
        int               highTierDiscount,
        int               nearbyCuredDiscount,
        int               heroEffectAmplifier,
        bool              hasHeroOfTheVillage,
        ::BaseGameVersion baseGameVersion
    );

    MCNAPI bool _generateTrades();

    MCNAPI ::TradeTable* _getTradeTable();

    MCNAPI uint _getTradeTierFromCurrentExp() const;

    MCNAPI void _rearrangeTradeList(::std::vector<::Trade>& tradeList, uint64 sampleCount);

    MCNAPI void _setMaxTradeTier(int tradeTier);

    MCNAPI void _setTradeTier(int tradeTier);

    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI ::UpdateTradePacket createDataPacket(::ContainerID containerID);

    MCNAPI void fixVillagerTierToMatchTradeList(::MerchantRecipeList* oldOffers);

    MCNAPI ::IntRange getCurrentCuredDiscount() const;

    MCNAPI int getCurrentNearbyCuredDiscount() const;

    MCNAPI bool getInteraction(::Player& player, ::ActorInteraction& interaction);

    MCNAPI ::MerchantRecipeList* getOffers();

    MCNAPI uint getTradeTier() const;

    MCNAPI void loadOffersFromTag(::CompoundTag const* tag);

    MCNAPI void matchExpAndTier();

    MCNAPI void newServerAiStep();

    MCNAPI void notifyTrade(int recipeIndex, int numTrades);

    MCNAPI void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void setCurrentTradeExp(int currentTradeExp);

    MCNAPI void setNearbyCuredDiscount(int discount);

    MCNAPI void tryIncrementCuredDiscount();

    MCNAPI void tryIncrementNearbyCuredDiscount();

    MCNAPI void tryToTransferOldOffers(::MerchantRecipeList* oldOffers);
    // NOLINTEND
};
