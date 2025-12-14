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
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onPlayerAwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievement);

    MCFOLD ::EventResult $onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);

    MCFOLD ::EventResult
    $onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);

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

    MCFOLD ::EventResult
    $onPlayerStopRiding(::Player& player, bool exitFromPassenger, bool entityIsBeingDestroyed, bool switchingVehicles);

    MCFOLD ::EventResult $onPlayerCreated(
        ::LocalPlayer&               player,
        ::persona::ProfileType const personaSlot,
        ::std::string const&         classicSkinId,
        bool                         usingClassicSkin,
        ::NetworkType                networkType
    );

    MCFOLD ::EventResult $onPlayerTeleported(::Player& player);

    MCFOLD ::EventResult $onPlayerTeleported(::Player&, float);

    MCFOLD ::EventResult $onPlayerAttackedActor(::Player& player, ::Actor& target);

    MCFOLD ::EventResult $onPlayerDestroyedBlock(::Player& player, int x, int y, int z);

    MCFOLD ::EventResult $onPlayerDestroyedBlock(::Player& player, ::Block const& block);

    MCFOLD ::EventResult $onPlayerEquippedArmor(::Player& player, ::ItemDescriptor const& item);

    MCFOLD ::EventResult
    $onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);

    MCFOLD ::EventResult $onPlayerNamedItem(::Player& player, ::ItemDescriptor const& item);

    MCFOLD ::EventResult $onPlayerItemUseInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    MCFOLD ::EventResult $onPlayerItemPlaceInteraction(::Player& player, ::ItemInstance const& itemBeforeUse);

    MCFOLD ::EventResult $onPlayerCraftedItem(
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

    MCFOLD ::EventResult $onPlayerSmithiedItem(::Player&, ::ItemDescriptor const&);

    MCFOLD ::EventResult
    $onPlayerItemEquipped(::Player& player, ::ItemInstance const& equippedItem, int equipmentSlotId);

    MCFOLD ::EventResult
    $onPlayerPiglinBarter(::Player& player, ::std::string const& item, bool wasTargetingBarteringPlayer);

    MCFOLD ::EventResult $onPlayerWaxOnWaxOff(::Player& player, int const blockID);

    MCFOLD ::EventResult $onEvent(::PlayerNotificationEvent const& event);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
