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
class Player;
class UpdateTradePacket;
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
    LegacyTradeableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::TradeTable* _getTradeTable(::Actor& owner);

    MCAPI bool _refreshTrades(::Actor& owner);

    MCAPI void _updateMaxTradeTier(::Actor& owner, int tradeTier);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::UpdateTradePacket createDataPacket(::Actor& owner, ::ContainerID containerID);

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI void notifyTrade(::Actor& owner, int recipeIndex, int numTrades);

    MCAPI ::LegacyTradeableComponent& operator=(::LegacyTradeableComponent&&);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI void restockAllRecipes(::Actor& owner);

    MCAPI void updateTradeTier(::Actor& owner);

    MCAPI ~LegacyTradeableComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
