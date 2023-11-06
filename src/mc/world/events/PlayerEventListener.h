#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ReplayCorrectionResult.h"
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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~PlayerEventListener() = default;

    // symbol: ?onCameraSetPlayerRot@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVVec2@@@Z
    MCVAPI ::EventResult onCameraSetPlayerRot(class Player&, class Vec2 const&);

    // symbol: ?onEvent@PlayerEventListener@@UEAA?AW4EventResult@@AEBUPlayerNotificationEvent@@@Z
    MCVAPI ::EventResult onEvent(struct PlayerNotificationEvent const&);

    // symbol: ?onLocalPlayerDeath@PlayerEventListener@@UEAA?AW4EventResult@@AEAVIClientInstance@@AEAVLocalPlayer@@@Z
    MCVAPI ::EventResult onLocalPlayerDeath(class IClientInstance&, class LocalPlayer&);

    // symbol: ?onLocalPlayerRespawn@PlayerEventListener@@UEAA?AW4EventResult@@AEAVIClientInstance@@AEAVLocalPlayer@@@Z
    MCVAPI ::EventResult onLocalPlayerRespawn(class IClientInstance&, class LocalPlayer&);

    // symbol: ?onPlayerAIStepBegin@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerAIStepBegin(class Player&);

    // symbol: ?onPlayerAIStepEnd@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerAIStepEnd(class Player&);

    // symbol:
    // ?onPlayerAction@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@W4PlayerActionType@@AEBVBlockPos@@H@Z
    MCVAPI ::EventResult onPlayerAction(class Player&, ::PlayerActionType, class BlockPos const&, int);

    // symbol: ?onPlayerAttackedActor@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEAVActor@@@Z
    MCVAPI ::EventResult onPlayerAttackedActor(class Player&, class Actor&);

    // symbol: ?onPlayerAuthInputApplied@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerAuthInputApplied(class Player&);

    // symbol: ?onPlayerAuthInputReceived@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerAuthInputReceived(class Player&);

    // symbol:
    // ?onPlayerAwardAchievement@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@W4AchievementIds@MinecraftEventing@@@Z
    MCVAPI ::EventResult onPlayerAwardAchievement(class Player&, ::MinecraftEventing::AchievementIds);

    // symbol: ?onPlayerCaravanChanged@PlayerEventListener@@UEAA?AW4EventResult@@AEBVActor@@H@Z
    MCVAPI ::EventResult onPlayerCaravanChanged(class Actor const&, int);

    // symbol:
    // ?onPlayerCraftedItem@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemInstance@@_N22HHH22AEBV?$vector@FV?$allocator@F@std@@@std@@@Z
    MCVAPI ::EventResult
    onPlayerCraftedItem(class Player&, class ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&);

    // symbol:
    // ?onPlayerCreated@PlayerEventListener@@UEAA?AW4EventResult@@AEAVLocalPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_N@Z
    MCVAPI ::EventResult onPlayerCreated(class LocalPlayer&, std::string const&, std::string const&, bool);

    // symbol: ?onPlayerDestroyedBlock@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@HHH@Z
    MCVAPI ::EventResult onPlayerDestroyedBlock(class Player&, int, int, int);

    // symbol: ?onPlayerDestroyedBlock@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@@Z
    MCVAPI ::EventResult onPlayerDestroyedBlock(class Player&, class Block const&);

    // symbol:
    // ?onPlayerEnchantedItem@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemStack@@AEBVItemEnchants@@@Z
    MCVAPI ::EventResult onPlayerEnchantedItem(class Player&, class ItemStack const&, class ItemEnchants const&);

    // symbol: ?onPlayerEquippedArmor@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemDescriptor@@@Z
    MCVAPI ::EventResult onPlayerEquippedArmor(class Player&, class ItemDescriptor const&);

    // symbol: ?onPlayerInput@PlayerEventListener@@UEAA?AW4EventResult@@AEAVEntityContext@@@Z
    MCVAPI ::EventResult onPlayerInput(class EntityContext&);

    // symbol: ?onPlayerItemEquipped@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemInstance@@H@Z
    MCVAPI ::EventResult onPlayerItemEquipped(class Player&, class ItemInstance const&, int);

    // symbol: ?onPlayerItemPlaceInteraction@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemInstance@@@Z
    MCVAPI ::EventResult onPlayerItemPlaceInteraction(class Player&, class ItemInstance const&);

    // symbol: ?onPlayerItemUseInteraction@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemInstance@@@Z
    MCVAPI ::EventResult onPlayerItemUseInteraction(class Player&, class ItemInstance const&);

    // symbol: ?onPlayerMove@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerMove(class Player&);

    // symbol: ?onPlayerMovementAnomaly@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVVec3@@MM@Z
    MCVAPI ::EventResult onPlayerMovementAnomaly(class Player&, class Vec3 const&, float, float);

    // symbol: ?onPlayerMovementCorrected@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVVec3@@MM@Z
    MCVAPI ::EventResult onPlayerMovementCorrected(class Player&, class Vec3 const&, float, float);

    // symbol:
    // ?onPlayerMovementRewindCorrected@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@_KW4ReplayCorrectionResult@@@Z
    MCVAPI ::EventResult onPlayerMovementRewindCorrected(class Player&, uint64, ::ReplayCorrectionResult);

    // symbol: ?onPlayerNamedItem@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemDescriptor@@@Z
    MCVAPI ::EventResult onPlayerNamedItem(class Player&, class ItemDescriptor const&);

    // symbol: ?onPlayerOnGround@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerOnGround(class Player&);

    // symbol:
    // ?onPlayerPiglinBarter@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCVAPI ::EventResult onPlayerPiglinBarter(class Player&, std::string const&, bool);

    // symbol:
    // ?onPlayerPortalBuilt@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@V?$AutomaticID@VDimension@@H@@@Z
    MCVAPI ::EventResult onPlayerPortalBuilt(class Player&, DimensionType);

    // symbol:
    // ?onPlayerPortalUsed@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
    MCVAPI ::EventResult onPlayerPortalUsed(class Player&, DimensionType, DimensionType);

    // symbol: ?onPlayerSaved@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerSaved(class Player&);

    // symbol: ?onPlayerSlide@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerSlide(class Player&);

    // symbol: ?onPlayerSmithiedItem@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemDescriptor@@@Z
    MCVAPI ::EventResult onPlayerSmithiedItem(class Player&, class ItemDescriptor const&);

    // symbol: ?onPlayerStartRiding@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEAVActor@@@Z
    MCVAPI ::EventResult onPlayerStartRiding(class Player&, class Actor&);

    // symbol: ?onPlayerStopRiding@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@_N11@Z
    MCVAPI ::EventResult onPlayerStopRiding(class Player&, bool, bool, bool);

    // symbol: ?onPlayerTargetBlockHit@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@H@Z
    MCVAPI ::EventResult onPlayerTargetBlockHit(class Player&, int);

    // symbol: ?onPlayerTeleported@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerTeleported(class Player&);

    // symbol: ?onPlayerTeleported@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@M@Z
    MCVAPI ::EventResult onPlayerTeleported(class Player&, float);

    // symbol: ?onPlayerTick@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onPlayerTick(class Player&);

    // symbol: ?onPlayerTurn@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEAVVec2@@@Z
    MCVAPI ::EventResult onPlayerTurn(class Player&, class Vec2&);

    // symbol: ?onPlayerWaxOnWaxOff@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@H@Z
    MCVAPI ::EventResult onPlayerWaxOnWaxOff(class Player&, int);

    // symbol: ?onStartDestroyBlock@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@AEAE@Z
    MCVAPI ::EventResult onStartDestroyBlock(class Player&, class BlockPos const&, uchar&);

    // NOLINTEND
};
