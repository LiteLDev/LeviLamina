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
struct TradeTable;
// clang-format on

class LegacyTradeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mAddRecipeOnUpdate;
    ::ll::TypedStorage<1, 1, bool>                                    mResetLockedOnFirstTrade;
    ::ll::TypedStorage<1, 1, bool>                                    mWillingToBreed;
    ::ll::TypedStorage<4, 4, int>                                     mRiches;
    ::ll::TypedStorage<4, 4, int>                                     mTradeTier;
    ::ll::TypedStorage<4, 4, int>                                     mUpdateMerchantTimer;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                         mLastPlayerTradeID;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MerchantRecipeList>> mOffers;
    ::ll::TypedStorage<8, 32, ::std::string>                          mDisplayName;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                     mTradeRecipeFirstTime;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyTradeableComponent& operator=(LegacyTradeableComponent const&);
    LegacyTradeableComponent(LegacyTradeableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void DecrementMerchantTimer();

    MCFOLD void IncrementTradeTier();

    MCAPI LegacyTradeableComponent();

    MCAPI ::TradeTable* _getTradeTable(::Actor& owner);

    MCAPI bool _refreshTrades(::Actor& owner);

    MCAPI void _updateMaxTradeTier(::Actor& owner, int tradeTier);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::UpdateTradePacket createDataPacket(::Actor& owner, ::ContainerID containerID);

    MCFOLD bool getAddRecipeOnUpdate() const;

    MCFOLD ::std::string const& getDisplayName() const;

    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCFOLD ::ActorUniqueID const getLastPlayerTradeID() const;

    MCAPI ::MerchantRecipeList* getOffers(::Actor& owner);

    MCFOLD bool getResetLockedOnFirstTrade() const;

    MCFOLD int getRiches() const;

    MCFOLD int getTradeTier() const;

    MCFOLD int getUpdateMerchantTimer() const;

#ifdef LL_PLAT_C
    MCAPI void handleHaggleAudioCue(::Actor& owner, bool canPlayValidHaggleSound);

    MCAPI void initFromDefinition(::Actor& actor);
#endif

    MCAPI ::std::string const& loadDisplayName(::Actor& owner);

    MCAPI void loadOffersFromTag(::CompoundTag const* tag);

    MCAPI void notifyTrade(::Actor& owner, int recipeIndex, int numTrades);

    MCAPI ::LegacyTradeableComponent& operator=(::LegacyTradeableComponent&&);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI void reloadComponent(::Actor& actor);

    MCAPI void restockAllRecipes(::Actor& owner);

    MCFOLD void setAddRecipeOnUpdate(bool addRecipeOnUpdate);

#ifdef LL_PLAT_C
    MCAPI void setDataFromPacket(::UpdateTradePacket const& packet);
#endif

    MCAPI void setOffers(::MerchantRecipeList& offers);

    MCFOLD void setResetLockedOnFirstTrade(bool resetLockedOnFirstTrade);

    MCFOLD void setRiches(int riches);

    MCFOLD void setTradeTier(int tier);

    MCAPI bool shouldConvertTrades(::Actor& owner) const;

    MCAPI bool shouldPersistTrades(::Actor& owner) const;

    MCAPI void updateTradeTier(::Actor& owner);

    MCAPI ~LegacyTradeableComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isUseNewTradeScreen(::Actor const& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
