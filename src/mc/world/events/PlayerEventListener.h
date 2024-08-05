#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/player/PlayerActionType.h"
#include "mc/world/events/EventResult.h"

class PlayerEventListener {
public:
    // prevent constructor by default
    PlayerEventListener& operator=(PlayerEventListener const&);
    PlayerEventListener(PlayerEventListener const&);
    PlayerEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerEventListener() = default;

    MCVAPI ::EventResult onCameraSetPlayerRot(class Player&, class Vec2 const&);

    MCVAPI ::EventResult onEvent(struct PlayerNotificationEvent const&);

    MCVAPI ::EventResult onLocalPlayerDeath(class IClientInstance& client, class LocalPlayer& player);

    MCVAPI ::EventResult onLocalPlayerRespawn(class IClientInstance& client, class LocalPlayer& player);

    MCVAPI ::EventResult
    onPlayerAction(class Player& player, ::PlayerActionType type, class BlockPos const& pos, int data);

    MCVAPI ::EventResult onPlayerAttackedActor(class Player& player, class Actor& target);

    MCVAPI ::EventResult onPlayerAuthInputApplied(class Player&);

    MCVAPI ::EventResult onPlayerAuthInputReceived(class Player&);

    MCVAPI ::EventResult
    onPlayerAwardAchievement(class Player& player, ::MinecraftEventing::AchievementIds achievement);

    MCVAPI ::EventResult onPlayerCaravanChanged(class Actor const& mob, int caravanCount);

    MCVAPI ::EventResult onPlayerCraftedItem(
        class Player&             player,
        class ItemInstance const& craftedItem,
        bool                      recipeBook,
        bool                      hadSearchString,
        bool                      craftedAutomatically,
        int                       startingTabId,
        int                       endingTabId,
        int                       numTabsChanged,
        bool                      filterOn,
        bool                      recipeBookShown,
        std::vector<short> const& ingredientItemIDs
    );

    MCVAPI ::EventResult onPlayerCreated(
        class LocalPlayer& player,
        std::string const& personaSlot,
        std::string const& classicSkinId,
        bool               usingClassicSkin
    );

    MCVAPI ::EventResult onPlayerDestroyedBlock(class Player& player, class Block const& block);

    MCVAPI ::EventResult onPlayerDestroyedBlock(class Player& player, int x, int y, int z);

    MCVAPI ::EventResult
    onPlayerEnchantedItem(class Player& player, class ItemStack const& item, class ItemEnchants const& enchants);

    MCVAPI ::EventResult onPlayerEquippedArmor(class Player& player, class ItemDescriptor const& item);

    MCVAPI ::EventResult onPlayerInput(class EntityContext&);

    MCVAPI ::EventResult
    onPlayerItemEquipped(class Player& player, class ItemInstance const& equippedItem, int equipmentSlotId);

    MCVAPI ::EventResult onPlayerItemPlaceInteraction(class Player& player, class ItemInstance const& itemBeforeUse);

    MCVAPI ::EventResult onPlayerItemUseInteraction(class Player& player, class ItemInstance const& itemBeforeUse);

    MCVAPI ::EventResult onPlayerMove(class Player& player);

    MCVAPI ::EventResult onPlayerNamedItem(class Player& player, class ItemDescriptor const& item);

    MCVAPI ::EventResult
    onPlayerPiglinBarter(class Player& player, std::string const& item, bool wasTargetingBarteringPlayer);

    MCVAPI ::EventResult onPlayerPortalBuilt(class Player& player, DimensionType dimensionBuiltIn);

    MCVAPI ::EventResult
    onPlayerPortalUsed(class Player& player, DimensionType fromDimension, DimensionType toDimension);

    MCVAPI ::EventResult onPlayerPoweredBeacon(class Player const&, int);

    MCVAPI ::EventResult onPlayerSaved(class Player& player);

    MCVAPI ::EventResult onPlayerSlide(class Player& player);

    MCVAPI ::EventResult onPlayerSmithiedItem(class Player&, class ItemDescriptor const&);

    MCVAPI ::EventResult onPlayerStartRiding(class Player& player, class Actor& vehicle);

    MCVAPI ::EventResult onPlayerStopRiding(
        class Player& player,
        bool          exitFromPassenger,
        bool          entityIsBeingDestroyed,
        bool          switchingVehicles
    );

    MCVAPI ::EventResult onPlayerTargetBlockHit(class Player& player, int signalStrength);

    MCVAPI ::EventResult onPlayerTeleported(class Player& player);

    MCVAPI ::EventResult onPlayerTeleported(class Player&, float);

    MCVAPI ::EventResult onPlayerTick(class Player& player);

    MCVAPI ::EventResult onPlayerTurn(class Player& player, class Vec2& turnDelta);

    MCVAPI ::EventResult onPlayerWaxOnWaxOff(class Player& player, int blockID);

    MCVAPI ::EventResult onStartDestroyBlock(class Player& player, class BlockPos const& pos, uchar& face);

    // NOLINTEND
};
