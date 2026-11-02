#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/IntRange.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class Interaction;
class MerchantRecipeList;
class Player;
class UpdateTradePacket;
struct Tick;
struct TradeTable;
namespace SharedTypes::v1_26_60 { struct EconomyTradeableComponentDefinition; }
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
    ::ll::TypedStorage<8, 32, ::std::string>                          mTradeTablePath;
    ::ll::TypedStorage<1, 1, bool>                                    mUseNewTradeScreen;
    ::ll::TypedStorage<4, 4, int>                                     mHeroDemandDiscount;
    ::ll::TypedStorage<4, 8, ::IntRange>                              mCuredDiscount;
    ::ll::TypedStorage<4, 8, ::IntRange>                              mMaxCuredDiscount;
    ::ll::TypedStorage<4, 4, int>                                     mNearbyCuredDiscount;
    ::ll::TypedStorage<4, 4, int>                                     mMaxNearbyCuredDiscount;
    ::ll::TypedStorage<1, 1, bool>                                    mPersistTrades;
    ::ll::TypedStorage<1, 1, bool>                                    mConvertTradesEconomy;
    ::ll::TypedStorage<1, 1, bool>                                    mShowTradeScreen;
    ::ll::TypedStorage<1, 1, bool>                                    mUseLegacyPrices;
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
    MCNAPI explicit EconomyTradeableComponent(::Actor& owner);

    MCAPI bool _generateTrades();

    MCNAPI ::TradeTable* _getTradeTable();

    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI ::UpdateTradePacket createDataPacket(::ContainerID containerID);

    MCNAPI void fixVillagerTierToMatchTradeList(::MerchantRecipeList* oldOffers);

    MCNAPI ::IntRange getCurrentCuredDiscount() const;

    MCNAPI ::Interaction getInteraction(::Player& player);

    MCAPI ::MerchantRecipeList* getOffers();

    MCNAPI uint getTradeExpForCurrentLevel() const;

#ifdef LL_PLAT_C
    MCNAPI ::std::vector<uint> getTradeExpRequirements() const;
#endif

    MCNAPI uint getTradeTier() const;

    MCNAPI bool hasSupplyRemaining() const;

    MCNAPI void initFromDefinition();

    MCNAPI void initFromDefinition(::SharedTypes::v1_26_60::EconomyTradeableComponentDefinition const& definition);

    MCNAPI ::std::string const& loadDisplayName();

    MCNAPI void matchExpAndTier();

    MCNAPI void newServerAiStep();

    MCAPI void notifyTrade(int recipeIndex, int numTrades);

    MCNAPI void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void reloadComponent();

    MCAPI void resupplyTrades();

#ifdef LL_PLAT_C
    MCNAPI void setDataFromPacket(::UpdateTradePacket const& packet);
#endif

    MCNAPI void setNearbyCuredDiscount(int discount);

    MCNAPI void setOffers(::MerchantRecipeList& offers);

    MCNAPI void tickDiscountDegradationTimer(::Tick currentTick);

    MCNAPI void tryIncrementCuredDiscount();

    MCNAPI void tryIncrementNearbyCuredDiscount();

    MCNAPI void tryToTransferOldOffers(::MerchantRecipeList* oldOffers);

    MCNAPI ~EconomyTradeableComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor& owner);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
