#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutablePlayerGameplayEvent.h"
#include "mc/world/events/PlayerGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class Player;
class PlayerEventListener;
class PlayerGameplayHandler;
// clang-format on

class PlayerEventCoordinator : public ::EventCoordinator<::PlayerEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf9418c;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerEventCoordinator& operator=(PlayerEventCoordinator const&);
    PlayerEventCoordinator(PlayerEventCoordinator const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerEventCoordinator();

    MCFOLD ::PlayerGameplayHandler& getPlayerGameplayHandler();

    MCFOLD void registerPlayerGameplayHandler(::std::unique_ptr<::PlayerGameplayHandler>&& handler);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutablePlayerGameplayEvent<::CoordinatorResult>> event);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::PlayerGameplayEvent<::CoordinatorResult>> const& event);

    MCAPI void sendEvent(::EventRef<::PlayerGameplayEvent<void>> const& event);

    MCAPI void sendPlayerAwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievement);

    MCAPI void sendPlayerCaravanChanged(::Actor const& mob, int caravanCount);

    MCAPI void sendPlayerCraftedItem(
        ::Player&                   player,
        ::ItemInstance const&       item,
        bool                        recipeBook,
        bool                        hadSearchString,
        bool                        craftedAutomatically,
        int                         startingTabId,
        int                         endingTabId,
        int                         numTabsChanged,
        bool                        filterOn,
        bool                        recipeBookShown,
        ::std::vector<short> const& ingredientItemIDs
    );

    MCAPI void sendPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);

    MCAPI void sendPlayerItemEquipped(::Player& player, ::ItemInstance const& equippedItem, int equipmentSlotId);

    MCAPI void sendPlayerMove(::Player& player);

    MCAPI void sendPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);

    MCAPI void sendPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCAPI void sendPlayerPoweredBeacon(::Player const& player, int level);

    MCAPI void sendPlayerSlide(::Player& player);

    MCAPI void sendPlayerTeleported(::Player& player);

    MCAPI void sendPlayerTeleported(::Player& player, float metersTravelled);

    MCAPI void sendPlayerTick(::Player& player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
