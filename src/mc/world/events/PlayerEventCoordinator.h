#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutablePlayerGameplayEvent.h"
#include "mc/world/events/PlayerGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemDescriptor;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class Player;
class PlayerEventListener;
class PlayerGameplayHandler;
struct ActorUniqueID;
struct DealKineticDamageComponent;
// clang-format on

class PlayerEventCoordinator : public ::EventCoordinator<::PlayerEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerGameplayHandler>> mPlayerGameplayHandler;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::PlayerGameplayHandler& getPlayerGameplayHandler();

    MCFOLD void registerPlayerGameplayHandler(::std::unique_ptr<::PlayerGameplayHandler>&& handler);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::PlayerGameplayEvent<::CoordinatorResult>> const& event);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutablePlayerGameplayEvent<::CoordinatorResult>> event);

    MCAPI void sendEvent(::EventRef<::PlayerGameplayEvent<void>> const& event);

    MCAPI void sendPlayerAwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievement);

#ifdef LL_PLAT_C
    MCAPI void sendPlayerCaravanChanged(::Actor const& mob, int caravanCount);
#endif

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

    MCAPI void sendPlayerDestroyedBlock(::Player& player, int x, int y, int z);

    MCAPI void sendPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);

    MCAPI void sendPlayerItemEquipped(::Player& player, ::ItemInstance const& equippedItem, int equipmentSlotId);

    MCAPI void sendPlayerItemPlaceInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    MCAPI void sendPlayerItemUseInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    MCAPI void sendPlayerKineticDamageDealt(
        ::Player&                           player,
        ::ActorUniqueID const&              target,
        ::DealKineticDamageComponent const& dealKinematicDamageComponent
    );

    MCAPI void sendPlayerMove(::Player& player);

#ifdef LL_PLAT_C
    MCAPI void sendPlayerNamedItem(::Player& player, ::ItemDescriptor const& item);

    MCAPI void sendPlayerPiglinBarter(::Player& player, ::std::string const& item, bool wasTargetingBarteringPlayer);
#endif

    MCAPI void sendPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);

    MCAPI void sendPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCAPI void sendPlayerPoweredBeacon(::Player const& player, int level);

#ifdef LL_PLAT_C
    MCAPI void sendPlayerSaved(::Player& player);
#endif

    MCAPI void sendPlayerSlide(::Player& player);

#ifdef LL_PLAT_C
    MCAPI void sendPlayerSmithiedItem(::Player& player, ::ItemDescriptor const& templateItem);

    MCAPI void sendPlayerTargetBlockHit(::Player& player, int signalStrength);
#endif

    MCAPI void sendPlayerTeleported(::Player& player);

    MCAPI void sendPlayerTeleported(::Player& player, float metersTravelled);

    MCAPI void sendPlayerTick(::Player& player);

#ifdef LL_PLAT_C
    MCAPI void sendPlayerWaxOnWaxOff(::Player& player, int blockID);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
