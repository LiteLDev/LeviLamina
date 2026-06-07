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
class InteractionResult;
class MerchantRecipeList;
class Player;
class UpdateTradePacket;
struct ActorUniqueID;
struct IntRange;
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

    MCAPI void _setMaxTradeTier(int tradeTier);

    MCAPI void _setTradeTier(int tradeTier);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI bool canLevelUp() const;

    MCAPI ::UpdateTradePacket createDataPacket(::ContainerID containerID);

    MCAPI void fixVillagerTierToMatchTradeList(::MerchantRecipeList* oldOffers);

    MCAPI ::IntRange getCurrentCuredDiscount() const;

    MCFOLD ::std::string const& getDisplayName() const;

    MCAPI ::InteractionResult getInteraction(::Player& player, ::ActorInteraction& interaction);

    MCAPI ::MerchantRecipeList* getOffers();

    MCFOLD int getRiches() const;

    MCAPI uint getTradeExpForCurrentLevel() const;

#ifdef LL_PLAT_C
    MCAPI ::std::vector<uint> getTradeExpRequirements() const;
#endif

    MCAPI uint getTradeTier() const;

#ifdef LL_PLAT_C
    MCAPI void handleHaggleAudioCue(bool canPlayValidHaggleSound);
#endif

    MCAPI bool hasSupplyRemaining() const;

    MCFOLD void initFromDefinition();

    MCAPI ::std::string const& loadDisplayName();

    MCAPI void loadOffersFromTag(::CompoundTag const* tag);

    MCAPI void matchExpAndTier();

    MCAPI void newServerAiStep();

    MCAPI void notifyTrade(int recipeIndex, int numTrades);

    MCAPI void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void reloadComponent();

    MCAPI void resupplyTrades();

    MCAPI void setCurrentTradeExp(int currentTradeExp);

#ifdef LL_PLAT_C
    MCAPI void setDataFromPacket(::UpdateTradePacket const& packet);
#endif

    MCAPI void setNearbyCuredDiscount(int discount);

    MCAPI void setOffers(::MerchantRecipeList& offers);

    MCFOLD void setRiches(int riches);

    MCAPI bool shouldConvertTrades() const;

    MCAPI bool shouldPersistTrades() const;

    MCAPI bool showTradeScreen();

    MCAPI void tickDiscountDegradationTimer(::Tick currentTick);

    MCAPI void tryIncrementCuredDiscount();

    MCAPI void tryIncrementNearbyCuredDiscount();

    MCAPI void tryToTransferOldOffers(::MerchantRecipeList* oldOffers);

    MCAPI ~EconomyTradeableComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isUseNewTradeScreen(::Actor const& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor& owner);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
