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
class MerchantRecipeList;
class Player;
class UpdateTradePacket;
struct Trade;
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
    LegacyTradeableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::TradeTable* _getTradeTable(::Actor& owner);

    MCNAPI void _rearrangeTradeList(::Actor& owner, ::std::vector<::Trade>& tradeList, uint64 sampleCount);

    MCNAPI bool _refreshTrades(::Actor& owner);

    MCNAPI void _updateMaxTradeTier(::Actor& owner, int tradeTier);

    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI ::UpdateTradePacket createDataPacket(::Actor& owner, ::ContainerID containerID);

    MCNAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCNAPI void notifyTrade(::Actor& owner, int recipeIndex, int numTrades);

    MCNAPI ::LegacyTradeableComponent& operator=(::LegacyTradeableComponent&&);

    MCNAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCNAPI void restockAllRecipes(::Actor& owner);

    MCNAPI_C void setDataFromPacket(::UpdateTradePacket const& packet);

    MCNAPI void updateTradeTier(::Actor& owner);

    MCNAPI ~LegacyTradeableComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
