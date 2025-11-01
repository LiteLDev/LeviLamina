#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/events/NetworkType.h"
#include "mc/network/packet/PlayerActionType.h"
#include "mc/world/actor/player/persona/ProfileType.h"
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
struct ActorUniqueID;
struct PlayerNotificationEvent;
// clang-format on

class PlayerEventListener {
public:
    // PlayerEventListener inner types define
    using EventType = ::PlayerNotificationEvent;
    
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onPlayerAwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievement);

    // vIndex: 2
    virtual ::EventResult onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);

    // vIndex: 3
    virtual ::EventResult onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);

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
    virtual ::EventResult onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer&);

    // vIndex: 17
    virtual ::EventResult onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const&, bool);

    // vIndex: 18
    virtual ::EventResult onPlayerMove(::Player& player);

    // vIndex: 19
    virtual ::EventResult onPlayerSlide(::Player& player);

    // vIndex: 20
    virtual ::EventResult onPlayerTargetBlockHit(::Player& player, int const signalStrength);

    // vIndex: 21
    virtual ::EventResult onPlayerTick(::Player& player);

    // vIndex: 22
    virtual ::EventResult onPlayerStartRiding(::Player& player, ::Actor& vehicle);

    // vIndex: 23
    virtual ::EventResult onPlayerStopRiding(::Player& player, bool exitFromPassenger, bool entityIsBeingDestroyed, bool switchingVehicles);

    // vIndex: 24
    virtual ::EventResult onPlayerCreated(::LocalPlayer& player, ::persona::ProfileType const personaSlot, ::std::string const& classicSkinId, bool usingClassicSkin, ::NetworkType networkType);

    // vIndex: 26
    virtual ::EventResult onPlayerTeleported(::Player& player);

    // vIndex: 25
    virtual ::EventResult onPlayerTeleported(::Player&, float);

    // vIndex: 27
    virtual ::EventResult onPlayerAttackedActor(::Player& player, ::Actor& target);

    // vIndex: 29
    virtual ::EventResult onPlayerDestroyedBlock(::Player& player, int x, int y, int z);

    // vIndex: 28
    virtual ::EventResult onPlayerDestroyedBlock(::Player& player, ::Block const& block);

    // vIndex: 30
    virtual ::EventResult onPlayerEquippedArmor(::Player& player, ::ItemDescriptor const& item);

    // vIndex: 31
    virtual ::EventResult onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);

    // vIndex: 32
    virtual ::EventResult onPlayerNamedItem(::Player& player, ::ItemDescriptor const& item);

    // vIndex: 33
    virtual ::EventResult onPlayerItemUseInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    // vIndex: 34
    virtual ::EventResult onPlayerItemPlaceInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    // vIndex: 35
    virtual ::EventResult onPlayerCraftedItem(::Player& player, ::ItemInstance const& craftedItem, bool recipeBook, bool hadSearchString, bool craftedAutomatically, int startingTabId, int endingTabId, int numTabsChanged, bool filterOn, bool recipeBookShown, ::std::vector<short> const& ingredientItemIDs);

    // vIndex: 36
    virtual ::EventResult onPlayerSmithiedItem(::Player&, ::ItemDescriptor const&);

    // vIndex: 37
    virtual ::EventResult onPlayerItemEquipped(::Player& player, ::ItemInstance const& equippedItem, int equipmentSlotId);

    // vIndex: 38
    virtual ::EventResult onPlayerPiglinBarter(::Player& player, ::std::string const& item, bool wasTargetingBarteringPlayer);

    // vIndex: 39
    virtual ::EventResult onPlayerWaxOnWaxOff(::Player& player, int const blockID);

    // vIndex: 40
    virtual ::EventResult onEvent(::PlayerNotificationEvent const& event);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onPlayerAwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievement);

    MCFOLD ::EventResult $onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);

    MCFOLD ::EventResult $onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCFOLD ::EventResult $onPlayerPoweredBeacon(::Player const& player, int const level);

    MCFOLD ::EventResult $onPlayerCaravanChanged(::Actor const& mob, int caravanCount);

    MCFOLD ::EventResult $onPlayerSaved(::Player& player);

    MCFOLD ::EventResult $onPlayerInput(::EntityContext&);

    MCFOLD ::EventResult $onPlayerAuthInputReceived(::Player&);

    MCFOLD ::EventResult $onPlayerAuthInputApplied(::Player&);

    MCFOLD ::EventResult $onPlayerTurn(::Player& player, ::Vec2& turnDelta);

    MCFOLD ::EventResult $onCameraSetPlayerRot(::Player&, ::Vec2 const&);

    MCFOLD ::EventResult $onStartDestroyBlock(::Player& player, ::BlockPos const& pos, uchar& face);

    MCFOLD ::EventResult $onPlayerAction(::Player& player, ::PlayerActionType type, ::BlockPos const& pos, int data);

    MCFOLD ::EventResult $onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player);

    MCFOLD ::EventResult $onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player);

    MCFOLD ::EventResult $onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer&);

    MCFOLD ::EventResult $onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const&, bool);

    MCFOLD ::EventResult $onPlayerMove(::Player& player);

    MCFOLD ::EventResult $onPlayerSlide(::Player& player);

    MCFOLD ::EventResult $onPlayerTargetBlockHit(::Player& player, int const signalStrength);

    MCFOLD ::EventResult $onPlayerTick(::Player& player);

    MCFOLD ::EventResult $onPlayerStartRiding(::Player& player, ::Actor& vehicle);

    MCFOLD ::EventResult $onPlayerStopRiding(::Player& player, bool exitFromPassenger, bool entityIsBeingDestroyed, bool switchingVehicles);

    MCFOLD ::EventResult $onPlayerCreated(::LocalPlayer& player, ::persona::ProfileType const personaSlot, ::std::string const& classicSkinId, bool usingClassicSkin, ::NetworkType networkType);

    MCFOLD ::EventResult $onPlayerTeleported(::Player& player);

    MCFOLD ::EventResult $onPlayerTeleported(::Player&, float);

    MCFOLD ::EventResult $onPlayerAttackedActor(::Player& player, ::Actor& target);

    MCFOLD ::EventResult $onPlayerDestroyedBlock(::Player& player, int x, int y, int z);

    MCFOLD ::EventResult $onPlayerDestroyedBlock(::Player& player, ::Block const& block);

    MCFOLD ::EventResult $onPlayerEquippedArmor(::Player& player, ::ItemDescriptor const& item);

    MCFOLD ::EventResult $onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);

    MCFOLD ::EventResult $onPlayerNamedItem(::Player& player, ::ItemDescriptor const& item);

    MCFOLD ::EventResult $onPlayerItemUseInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    MCFOLD ::EventResult $onPlayerItemPlaceInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    MCFOLD ::EventResult $onPlayerCraftedItem(::Player& player, ::ItemInstance const& craftedItem, bool recipeBook, bool hadSearchString, bool craftedAutomatically, int startingTabId, int endingTabId, int numTabsChanged, bool filterOn, bool recipeBookShown, ::std::vector<short> const& ingredientItemIDs);

    MCFOLD ::EventResult $onPlayerSmithiedItem(::Player&, ::ItemDescriptor const&);

    MCFOLD ::EventResult $onPlayerItemEquipped(::Player& player, ::ItemInstance const& equippedItem, int equipmentSlotId);

    MCFOLD ::EventResult $onPlayerPiglinBarter(::Player& player, ::std::string const& item, bool wasTargetingBarteringPlayer);

    MCFOLD ::EventResult $onPlayerWaxOnWaxOff(::Player& player, int const blockID);

    MCFOLD ::EventResult $onEvent(::PlayerNotificationEvent const& event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
