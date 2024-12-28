#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/network/packet/PlayerActionType.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Dimension;
class EntityContext;
class IClientInstance;
class ItemDescriptor;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class LocalPlayer;
class Player;
class Vec2;
struct PlayerNotificationEvent;
// clang-format on

class PlayerEventListener {
public:
    // prevent constructor by default
    PlayerEventListener& operator=(PlayerEventListener const&);
    PlayerEventListener(PlayerEventListener const&);
    PlayerEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerEventListener();

    // vIndex: 1
    virtual ::EventResult onPlayerAwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievement);

    // vIndex: 2
    virtual ::EventResult onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);

    // vIndex: 3
    virtual ::EventResult
    onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);

    // vIndex: 4
    virtual ::EventResult onPlayerPoweredBeacon(::Player const& player, int const level);

    // vIndex: 5
    virtual ::EventResult onPlayerCaravanChanged(::Actor const& mob, int caravanCount);

    // vIndex: 6
    virtual ::EventResult onPlayerSaved(::Player& player);

    // vIndex: 7
    virtual ::EventResult onPlayerInput(::EntityContext&);

    // vIndex: 8
    virtual ::EventResult onPlayerAuthInputReceived(::Player&);

    // vIndex: 9
    virtual ::EventResult onPlayerAuthInputApplied(::Player&);

    // vIndex: 10
    virtual ::EventResult onPlayerTurn(::Player& player, ::Vec2& turnDelta);

    // vIndex: 11
    virtual ::EventResult onCameraSetPlayerRot(::Player&, ::Vec2 const&);

    // vIndex: 12
    virtual ::EventResult onStartDestroyBlock(::Player& player, ::BlockPos const& pos, uchar& face);

    // vIndex: 13
    virtual ::EventResult onPlayerAction(::Player& player, ::PlayerActionType type, ::BlockPos const& pos, int data);

    // vIndex: 14
    virtual ::EventResult onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player);

    // vIndex: 15
    virtual ::EventResult onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player);

    // vIndex: 16
    virtual ::EventResult onPlayerMove(::Player& player);

    // vIndex: 17
    virtual ::EventResult onPlayerSlide(::Player& player);

    // vIndex: 18
    virtual ::EventResult onPlayerTargetBlockHit(::Player& player, int const signalStrength);

    // vIndex: 19
    virtual ::EventResult onPlayerTick(::Player& player);

    // vIndex: 20
    virtual ::EventResult onPlayerStartRiding(::Player& player, ::Actor& vehicle);

    // vIndex: 21
    virtual ::EventResult
    onPlayerStopRiding(::Player& player, bool exitFromPassenger, bool entityIsBeingDestroyed, bool switchingVehicles);

    // vIndex: 22
    virtual ::EventResult onPlayerCreated(
        ::LocalPlayer&       player,
        ::std::string const& personaSlot,
        ::std::string const& classicSkinId,
        bool                 usingClassicSkin
    );

    // vIndex: 24
    virtual ::EventResult onPlayerTeleported(::Player& player);

    // vIndex: 23
    virtual ::EventResult onPlayerTeleported(::Player&, float);

    // vIndex: 25
    virtual ::EventResult onPlayerAttackedActor(::Player& player, ::Actor& target);

    // vIndex: 27
    virtual ::EventResult onPlayerDestroyedBlock(::Player& player, int x, int y, int z);

    // vIndex: 26
    virtual ::EventResult onPlayerDestroyedBlock(::Player& player, ::Block const& block);

    // vIndex: 28
    virtual ::EventResult onPlayerEquippedArmor(::Player& player, ::ItemDescriptor const& item);

    // vIndex: 29
    virtual ::EventResult
    onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);

    // vIndex: 30
    virtual ::EventResult onPlayerNamedItem(::Player& player, ::ItemDescriptor const& item);

    // vIndex: 31
    virtual ::EventResult onPlayerItemUseInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    // vIndex: 32
    virtual ::EventResult onPlayerItemPlaceInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    // vIndex: 33
    virtual ::EventResult onPlayerCraftedItem(
        ::Player&                   player,
        ::ItemInstance const&       craftedItem,
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

    // vIndex: 34
    virtual ::EventResult onPlayerSmithiedItem(::Player&, ::ItemDescriptor const&);

    // vIndex: 35
    virtual ::EventResult
    onPlayerItemEquipped(::Player& player, ::ItemInstance const& equippedItem, int equipmentSlotId);

    // vIndex: 36
    virtual ::EventResult
    onPlayerPiglinBarter(::Player& player, ::std::string const& item, bool wasTargetingBarteringPlayer);

    // vIndex: 37
    virtual ::EventResult onPlayerWaxOnWaxOff(::Player& player, int const blockID);

    // vIndex: 38
    virtual ::EventResult onEvent(::PlayerNotificationEvent const& event);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onPlayerAwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievement);

    MCAPI ::EventResult $onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);

    MCAPI ::EventResult
    $onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCAPI ::EventResult $onPlayerPoweredBeacon(::Player const& player, int const level);

    MCAPI ::EventResult $onPlayerCaravanChanged(::Actor const& mob, int caravanCount);

    MCAPI ::EventResult $onPlayerSaved(::Player& player);

    MCAPI ::EventResult $onPlayerInput(::EntityContext&);

    MCAPI ::EventResult $onPlayerAuthInputReceived(::Player&);

    MCAPI ::EventResult $onPlayerAuthInputApplied(::Player&);

    MCAPI ::EventResult $onPlayerTurn(::Player& player, ::Vec2& turnDelta);

    MCAPI ::EventResult $onCameraSetPlayerRot(::Player&, ::Vec2 const&);

    MCAPI ::EventResult $onStartDestroyBlock(::Player& player, ::BlockPos const& pos, uchar& face);

    MCAPI ::EventResult $onPlayerAction(::Player& player, ::PlayerActionType type, ::BlockPos const& pos, int data);

    MCAPI ::EventResult $onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player);

    MCAPI ::EventResult $onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player);

    MCAPI ::EventResult $onPlayerMove(::Player& player);

    MCAPI ::EventResult $onPlayerSlide(::Player& player);

    MCAPI ::EventResult $onPlayerTargetBlockHit(::Player& player, int const signalStrength);

    MCAPI ::EventResult $onPlayerTick(::Player& player);

    MCAPI ::EventResult $onPlayerStartRiding(::Player& player, ::Actor& vehicle);

    MCAPI ::EventResult
    $onPlayerStopRiding(::Player& player, bool exitFromPassenger, bool entityIsBeingDestroyed, bool switchingVehicles);

    MCAPI ::EventResult $onPlayerCreated(
        ::LocalPlayer&       player,
        ::std::string const& personaSlot,
        ::std::string const& classicSkinId,
        bool                 usingClassicSkin
    );

    MCAPI ::EventResult $onPlayerTeleported(::Player& player);

    MCAPI ::EventResult $onPlayerTeleported(::Player&, float);

    MCAPI ::EventResult $onPlayerAttackedActor(::Player& player, ::Actor& target);

    MCAPI ::EventResult $onPlayerDestroyedBlock(::Player& player, int x, int y, int z);

    MCAPI ::EventResult $onPlayerDestroyedBlock(::Player& player, ::Block const& block);

    MCAPI ::EventResult $onPlayerEquippedArmor(::Player& player, ::ItemDescriptor const& item);

    MCAPI ::EventResult
    $onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);

    MCAPI ::EventResult $onPlayerNamedItem(::Player& player, ::ItemDescriptor const& item);

    MCAPI ::EventResult $onPlayerItemUseInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    MCAPI ::EventResult $onPlayerItemPlaceInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    MCAPI ::EventResult $onPlayerCraftedItem(
        ::Player&                   player,
        ::ItemInstance const&       craftedItem,
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

    MCAPI ::EventResult $onPlayerSmithiedItem(::Player&, ::ItemDescriptor const&);

    MCAPI ::EventResult
    $onPlayerItemEquipped(::Player& player, ::ItemInstance const& equippedItem, int equipmentSlotId);

    MCAPI ::EventResult
    $onPlayerPiglinBarter(::Player& player, ::std::string const& item, bool wasTargetingBarteringPlayer);

    MCAPI ::EventResult $onPlayerWaxOnWaxOff(::Player& player, int const blockID);

    MCAPI ::EventResult $onEvent(::PlayerNotificationEvent const& event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
