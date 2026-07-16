#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class CompoundTag;
class DataLoadHelper;
class InteractionResult;
class MerchantRecipeList;
class Player;
class UpdateTradePacket;
struct Tick;
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
    MCAPI explicit EconomyTradeableComponent(::Actor& owner);

    MCAPI bool _generateTrades();

    MCAPI ::TradeTable* _getTradeTable();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::UpdateTradePacket createDataPacket(::ContainerID containerID);

    MCAPI void fixVillagerTierToMatchTradeList(::MerchantRecipeList* oldOffers);

    MCAPI ::InteractionResult getInteraction(::Player& player, ::ActorInteraction& interaction);

    MCAPI ::MerchantRecipeList* getOffers();

    MCAPI uint getTradeExpForCurrentLevel() const;

#ifdef LL_PLAT_C
    MCAPI ::std::vector<uint> getTradeExpRequirements() const;
#endif

    MCAPI uint getTradeTier() const;

    MCAPI bool hasSupplyRemaining() const;

    MCAPI ::std::string const& loadDisplayName();

    MCAPI void matchExpAndTier();

    MCAPI void newServerAiStep();

    MCAPI void notifyTrade(int recipeIndex, int numTrades);

    MCAPI void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void reloadComponent();

    MCAPI void resupplyTrades();

#ifdef LL_PLAT_C
    MCAPI void setDataFromPacket(::UpdateTradePacket const& packet);
#endif

    MCAPI void setNearbyCuredDiscount(int discount);

    MCAPI void setOffers(::MerchantRecipeList& offers);

    MCAPI void tickDiscountDegradationTimer(::Tick currentTick);

    MCAPI void tryIncrementCuredDiscount();

    MCAPI void tryIncrementNearbyCuredDiscount();

    MCAPI void tryToTransferOldOffers(::MerchantRecipeList* oldOffers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor& owner);
    // NOLINTEND
};
