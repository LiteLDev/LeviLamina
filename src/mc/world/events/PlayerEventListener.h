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
    // vIndex: 0, symbol: __gen_??1PlayerEventListener@@UEAA@XZ
    virtual ~PlayerEventListener() = default;

    // symbol: ?onCameraSetPlayerRot@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVVec2@@@Z
    MCVAPI ::EventResult onCameraSetPlayerRot(class Player&, class Vec2 const&);

    // symbol: ?onEvent@PlayerEventListener@@UEAA?AW4EventResult@@AEBUPlayerNotificationEvent@@@Z
    MCVAPI ::EventResult onEvent(struct PlayerNotificationEvent const&);

    // symbol: ?onLocalPlayerDeath@PlayerEventListener@@UEAA?AW4EventResult@@AEAVIClientInstance@@AEAVLocalPlayer@@@Z
    MCVAPI ::EventResult onLocalPlayerDeath(class IClientInstance& client, class LocalPlayer& player);

    // symbol: ?onLocalPlayerRespawn@PlayerEventListener@@UEAA?AW4EventResult@@AEAVIClientInstance@@AEAVLocalPlayer@@@Z
    MCVAPI ::EventResult onLocalPlayerRespawn(class IClientInstance& client, class LocalPlayer& player);

    // symbol:
    // ?onPlayerAction@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@W4PlayerActionType@@AEBVBlockPos@@H@Z
    MCVAPI ::EventResult
    onPlayerAction(class Player& player, ::PlayerActionType type, class BlockPos const& pos, int data);

    // symbol: ?onPlayerAttackedActor@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEAVActor@@@Z
    MCVAPI ::EventResult onPlayerAttackedActor(class Player& player, class Actor& target);

    // symbol: ?onPlayerAuthInputApplied@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerAuthInputApplied(class Player&);

    // symbol: ?onPlayerAuthInputReceived@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerAuthInputReceived(class Player&);

    // symbol:
    // ?onPlayerAwardAchievement@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@W4AchievementIds@MinecraftEventing@@@Z
    MCVAPI ::EventResult
    onPlayerAwardAchievement(class Player& player, ::MinecraftEventing::AchievementIds achievement);

    // symbol: ?onPlayerCaravanChanged@PlayerEventListener@@UEAA?AW4EventResult@@AEBVActor@@H@Z
    MCVAPI ::EventResult onPlayerCaravanChanged(class Actor const& mob, int caravanCount);

    // symbol:
    // ?onPlayerCraftedItem@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemInstance@@_N22HHH22AEBV?$vector@FV?$allocator@F@std@@@std@@@Z
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

    // symbol:
    // ?onPlayerCreated@PlayerEventListener@@UEAA?AW4EventResult@@AEAVLocalPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_N@Z
    MCVAPI ::EventResult onPlayerCreated(
        class LocalPlayer& player,
        std::string const& personaSlot,
        std::string const& classicSkinId,
        bool               usingClassicSkin
    );

    // symbol: ?onPlayerDestroyedBlock@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@@Z
    MCVAPI ::EventResult onPlayerDestroyedBlock(class Player& player, class Block const& block);

    // symbol: ?onPlayerDestroyedBlock@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@HHH@Z
    MCVAPI ::EventResult onPlayerDestroyedBlock(class Player& player, int x, int y, int z);

    // symbol:
    // ?onPlayerEnchantedItem@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemStack@@AEBVItemEnchants@@@Z
    MCVAPI ::EventResult
    onPlayerEnchantedItem(class Player& player, class ItemStack const& item, class ItemEnchants const& enchants);

    // symbol: ?onPlayerEquippedArmor@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemDescriptor@@@Z
    MCVAPI ::EventResult onPlayerEquippedArmor(class Player& player, class ItemDescriptor const& item);

    // symbol: ?onPlayerInput@PlayerEventListener@@UEAA?AW4EventResult@@AEAVEntityContext@@@Z
    MCVAPI ::EventResult onPlayerInput(class EntityContext&);

    // symbol: ?onPlayerItemEquipped@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemInstance@@H@Z
    MCVAPI ::EventResult
    onPlayerItemEquipped(class Player& player, class ItemInstance const& equippedItem, int equipmentSlotId);

    // symbol: ?onPlayerItemPlaceInteraction@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemInstance@@@Z
    MCVAPI ::EventResult onPlayerItemPlaceInteraction(class Player& player, class ItemInstance const& itemBeforeUse);

    // symbol: ?onPlayerItemUseInteraction@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemInstance@@@Z
    MCVAPI ::EventResult onPlayerItemUseInteraction(class Player& player, class ItemInstance const& itemBeforeUse);

    // symbol: ?onPlayerMove@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerMove(class Player& player);

    // symbol: ?onPlayerNamedItem@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemDescriptor@@@Z
    MCVAPI ::EventResult onPlayerNamedItem(class Player& player, class ItemDescriptor const& item);

    // symbol:
    // ?onPlayerPiglinBarter@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCVAPI ::EventResult
    onPlayerPiglinBarter(class Player& player, std::string const& item, bool wasTargetingBarteringPlayer);

    // symbol:
    // ?onPlayerPortalBuilt@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@V?$AutomaticID@VDimension@@H@@@Z
    MCVAPI ::EventResult onPlayerPortalBuilt(class Player& player, DimensionType dimensionBuiltIn);

    // symbol:
    // ?onPlayerPortalUsed@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
    MCVAPI ::EventResult
    onPlayerPortalUsed(class Player& player, DimensionType fromDimension, DimensionType toDimension);

    // symbol: ?onPlayerPoweredBeacon@PlayerEventListener@@UEAA?AW4EventResult@@AEBVPlayer@@H@Z
    MCVAPI ::EventResult onPlayerPoweredBeacon(class Player const&, int);

    // symbol: ?onPlayerSaved@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerSaved(class Player& player);

    // symbol: ?onPlayerSlide@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerSlide(class Player& player);

    // symbol: ?onPlayerSmithiedItem@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemDescriptor@@@Z
    MCVAPI ::EventResult onPlayerSmithiedItem(class Player&, class ItemDescriptor const&);

    // symbol: ?onPlayerStartRiding@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEAVActor@@@Z
    MCVAPI ::EventResult onPlayerStartRiding(class Player& player, class Actor& vehicle);

    // symbol: ?onPlayerStopRiding@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@_N11@Z
    MCVAPI ::EventResult onPlayerStopRiding(
        class Player& player,
        bool          exitFromPassenger,
        bool          entityIsBeingDestroyed,
        bool          switchingVehicles
    );

    // symbol: ?onPlayerTargetBlockHit@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@H@Z
    MCVAPI ::EventResult onPlayerTargetBlockHit(class Player& player, int signalStrength);

    // symbol: ?onPlayerTeleported@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerTeleported(class Player& player);

    // symbol: ?onPlayerTeleported@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@M@Z
    MCVAPI ::EventResult onPlayerTeleported(class Player&, float);

    // symbol: ?onPlayerTick@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerTick(class Player& player);

    // symbol: ?onPlayerTurn@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEAVVec2@@@Z
    MCVAPI ::EventResult onPlayerTurn(class Player& player, class Vec2& turnDelta);

    // symbol: ?onPlayerWaxOnWaxOff@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@H@Z
    MCVAPI ::EventResult onPlayerWaxOnWaxOff(class Player& player, int blockID);

    // symbol: ?onStartDestroyBlock@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@AEAE@Z
    MCVAPI ::EventResult onStartDestroyBlock(class Player& player, class BlockPos const& pos, uchar& face);

    // NOLINTEND
};
