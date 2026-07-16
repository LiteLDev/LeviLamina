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
    LegacyTradeableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::TradeTable* _getTradeTable(::Actor& owner);

    MCAPI bool _refreshTrades(::Actor& owner);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::UpdateTradePacket createDataPacket(::Actor& owner, ::ContainerID containerID);

    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI ::std::string const& loadDisplayName(::Actor& owner);

    MCAPI void notifyTrade(::Actor& owner, int recipeIndex, int numTrades);

    MCAPI ::LegacyTradeableComponent& operator=(::LegacyTradeableComponent&&);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI void reloadComponent(::Actor& actor);

    MCAPI void restockAllRecipes(::Actor& owner);

#ifdef LL_PLAT_C
    MCAPI void setDataFromPacket(::UpdateTradePacket const& packet);
#endif

    MCAPI void setOffers(::MerchantRecipeList& offers);

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
