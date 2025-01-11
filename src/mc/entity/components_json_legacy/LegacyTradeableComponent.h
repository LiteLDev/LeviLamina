#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class CompoundTag;
class DataLoadHelper;
class MerchantRecipeList;
class Player;
class UpdateTradePacket;
struct ActorUniqueID;
struct Trade;
struct TradeTable;
// clang-format on

class LegacyTradeableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk49718b;
    ::ll::UntypedStorage<1, 1>  mUnkcee2d3;
    ::ll::UntypedStorage<1, 1>  mUnkbfac9b;
    ::ll::UntypedStorage<4, 4>  mUnk115ed3;
    ::ll::UntypedStorage<4, 4>  mUnk42201e;
    ::ll::UntypedStorage<4, 4>  mUnkd5b1d7;
    ::ll::UntypedStorage<8, 8>  mUnkce5243;
    ::ll::UntypedStorage<8, 8>  mUnk291139;
    ::ll::UntypedStorage<8, 32> mUnk931e36;
    ::ll::UntypedStorage<8, 24> mUnkd131b8;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyTradeableComponent& operator=(LegacyTradeableComponent const&);
    LegacyTradeableComponent(LegacyTradeableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void DecrementMerchantTimer();

    MCAPI void IncrementTradeTier();

    MCAPI LegacyTradeableComponent();

    MCAPI ::TradeTable* _getTradeTable(::Actor& owner);

    MCAPI void _rearrangeTradeList(::Actor& owner, ::std::vector<::Trade>& tradeList, uint64 sampleCount);

    MCAPI bool _refreshTrades(::Actor& owner);

    MCAPI void _updateMaxTradeTier(::Actor& owner, int tradeTier);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::UpdateTradePacket createDataPacket(::Actor& owner, ::ContainerID containerID);

    MCFOLD bool getAddRecipeOnUpdate() const;

    MCFOLD ::std::string const& getDisplayName() const;

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCFOLD ::ActorUniqueID const getLastPlayerTradeID() const;

    MCAPI ::MerchantRecipeList* getOffers(::Actor& owner);

    MCFOLD bool getResetLockedOnFirstTrade() const;

    MCFOLD int getRiches() const;

    MCFOLD int getTradeTier() const;

    MCFOLD int getUpdateMerchantTimer() const;

    MCAPI ::std::string const& loadDisplayName(::Actor& owner);

    MCAPI void loadOffersFromTag(::CompoundTag const* tag);

    MCAPI void notifyTrade(::Actor& owner, int recipeIndex, int numTrades);

    MCAPI ::LegacyTradeableComponent& operator=(::LegacyTradeableComponent&&);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI void reloadComponent(::Actor& actor);

    MCAPI void restockAllRecipes(::Actor& owner);

    MCFOLD void setAddRecipeOnUpdate(bool addRecipeOnUpdate);

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
