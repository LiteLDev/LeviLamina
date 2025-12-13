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
#ifdef LL_PLAT_S
    virtual ~PlayerEventListener() = default;
#else // LL_PLAT_C
    virtual ~PlayerEventListener();
#endif

    virtual ::EventResult onPlayerAwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievement);

    virtual ::EventResult onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);

    virtual ::EventResult
    onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);

    virtual ::EventResult onPlayerPoweredBeacon(::Player const& player, int const level);

    virtual ::EventResult onPlayerCaravanChanged(::Actor const& mob, int caravanCount);

    virtual ::EventResult onPlayerSaved(::Player& player);

    virtual ::EventResult onPlayerInput(::EntityContext&);

    virtual ::EventResult onPlayerAuthInputReceived(::Player&);

    virtual ::EventResult onPlayerAuthInputApplied(::Player&);

    virtual ::EventResult onPlayerTurn(::Player& player, ::Vec2& turnDelta);

    virtual ::EventResult onCameraSetPlayerRot(::Player&, ::Vec2 const&);

    virtual ::EventResult onStartDestroyBlock(::Player& player, ::BlockPos const& pos, uchar& face);

    virtual ::EventResult onPlayerAction(::Player& player, ::PlayerActionType type, ::BlockPos const& pos, int data);

    virtual ::EventResult onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player);

    virtual ::EventResult onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player);

    virtual ::EventResult onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer&);

    virtual ::EventResult onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const&, bool);

    virtual ::EventResult onPlayerMove(::Player& player);

    virtual ::EventResult onPlayerSlide(::Player& player);

    virtual ::EventResult onPlayerTargetBlockHit(::Player& player, int const signalStrength);

    virtual ::EventResult onPlayerTick(::Player& player);

    virtual ::EventResult onPlayerStartRiding(::Player& player, ::Actor& vehicle);

    virtual ::EventResult
    onPlayerStopRiding(::Player& player, bool exitFromPassenger, bool entityIsBeingDestroyed, bool switchingVehicles);

    virtual ::EventResult onPlayerCreated(
        ::LocalPlayer&               player,
        ::persona::ProfileType const personaSlot,
        ::std::string const&         classicSkinId,
        bool                         usingClassicSkin,
        ::NetworkType                networkType
    );

    virtual ::EventResult onPlayerTeleported(::Player& player);

    virtual ::EventResult onPlayerTeleported(::Player&, float);

    virtual ::EventResult onPlayerAttackedActor(::Player& player, ::Actor& target);

    virtual ::EventResult onPlayerDestroyedBlock(::Player& player, int x, int y, int z);

    virtual ::EventResult onPlayerDestroyedBlock(::Player& player, ::Block const& block);

    virtual ::EventResult onPlayerEquippedArmor(::Player& player, ::ItemDescriptor const& item);

    virtual ::EventResult
    onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);

    virtual ::EventResult onPlayerNamedItem(::Player& player, ::ItemDescriptor const& item);

    virtual ::EventResult onPlayerItemUseInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    virtual ::EventResult onPlayerItemPlaceInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

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

    virtual ::EventResult onPlayerSmithiedItem(::Player&, ::ItemDescriptor const&);

    virtual ::EventResult
    onPlayerItemEquipped(::Player& player, ::ItemInstance const& equippedItem, int equipmentSlotId);

    virtual ::EventResult
    onPlayerPiglinBarter(::Player& player, ::std::string const& item, bool wasTargetingBarteringPlayer);

    virtual ::EventResult onPlayerWaxOnWaxOff(::Player& player, int const blockID);

    virtual ::EventResult onEvent(::PlayerNotificationEvent const& event);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onPlayerAwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievement);

    MCNAPI ::EventResult $onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);

    MCNAPI ::EventResult
    $onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);

    MCNAPI ::EventResult $onPlayerPoweredBeacon(::Player const& player, int const level);

    MCNAPI ::EventResult $onPlayerCaravanChanged(::Actor const& mob, int caravanCount);

    MCNAPI ::EventResult $onPlayerSaved(::Player& player);

    MCNAPI ::EventResult $onPlayerInput(::EntityContext&);

    MCNAPI ::EventResult $onPlayerAuthInputReceived(::Player&);

    MCNAPI ::EventResult $onPlayerAuthInputApplied(::Player&);

    MCNAPI ::EventResult $onPlayerTurn(::Player& player, ::Vec2& turnDelta);

    MCNAPI ::EventResult $onCameraSetPlayerRot(::Player&, ::Vec2 const&);

    MCNAPI ::EventResult $onStartDestroyBlock(::Player& player, ::BlockPos const& pos, uchar& face);

    MCNAPI ::EventResult $onPlayerAction(::Player& player, ::PlayerActionType type, ::BlockPos const& pos, int data);

    MCNAPI ::EventResult $onLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player);

    MCNAPI ::EventResult $onLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player);

    MCNAPI ::EventResult $onLocalPlayerOpenInventory(::IClientInstance&, ::LocalPlayer&);

    MCNAPI ::EventResult $onLocalPlayerOpenTrading(::IClientInstance&, ::LocalPlayer&, ::ActorUniqueID const&, bool);

    MCNAPI ::EventResult $onPlayerMove(::Player& player);

    MCNAPI ::EventResult $onPlayerSlide(::Player& player);

    MCNAPI ::EventResult $onPlayerTargetBlockHit(::Player& player, int const signalStrength);

    MCNAPI ::EventResult $onPlayerTick(::Player& player);

    MCNAPI ::EventResult $onPlayerStartRiding(::Player& player, ::Actor& vehicle);

    MCNAPI ::EventResult
    $onPlayerStopRiding(::Player& player, bool exitFromPassenger, bool entityIsBeingDestroyed, bool switchingVehicles);

    MCNAPI ::EventResult $onPlayerCreated(
        ::LocalPlayer&               player,
        ::persona::ProfileType const personaSlot,
        ::std::string const&         classicSkinId,
        bool                         usingClassicSkin,
        ::NetworkType                networkType
    );

    MCNAPI ::EventResult $onPlayerTeleported(::Player& player);

    MCNAPI ::EventResult $onPlayerTeleported(::Player&, float);

    MCNAPI ::EventResult $onPlayerAttackedActor(::Player& player, ::Actor& target);

    MCNAPI ::EventResult $onPlayerDestroyedBlock(::Player& player, int x, int y, int z);

    MCNAPI ::EventResult $onPlayerDestroyedBlock(::Player& player, ::Block const& block);

    MCNAPI ::EventResult $onPlayerEquippedArmor(::Player& player, ::ItemDescriptor const& item);

    MCNAPI ::EventResult
    $onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);

    MCNAPI ::EventResult $onPlayerNamedItem(::Player& player, ::ItemDescriptor const& item);

    MCNAPI ::EventResult $onPlayerItemUseInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    MCNAPI ::EventResult $onPlayerItemPlaceInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    MCNAPI ::EventResult $onPlayerCraftedItem(
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

    MCNAPI ::EventResult $onPlayerSmithiedItem(::Player&, ::ItemDescriptor const&);

    MCNAPI ::EventResult
    $onPlayerItemEquipped(::Player& player, ::ItemInstance const& equippedItem, int equipmentSlotId);

    MCNAPI ::EventResult
    $onPlayerPiglinBarter(::Player& player, ::std::string const& item, bool wasTargetingBarteringPlayer);

    MCNAPI ::EventResult $onPlayerWaxOnWaxOff(::Player& player, int const blockID);

    MCNAPI ::EventResult $onEvent(::PlayerNotificationEvent const& event);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
