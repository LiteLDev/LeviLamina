#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"
#include "mc/world/AutomaticID.h"

class PlayerEventListener {

public:
    // prevent constructor by default
    PlayerEventListener& operator=(PlayerEventListener const&) = delete;
    PlayerEventListener(PlayerEventListener const&)            = delete;
    PlayerEventListener()                                      = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYEREVENTLISTENER
    /**
     * @symbol ?onCameraSetPlayerRot\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVVec2\@\@\@Z
     */
    MCVAPI enum class EventResult onCameraSetPlayerRot(class Player&, class Vec2 const&); // NOLINT
    /**
     * @symbol ?onEvent\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEBUPlayerNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerNotificationEvent const&); // NOLINT
    /**
     * @symbol
     * ?onLocalPlayerDeath\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVIClientInstance\@\@AEAVLocalPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLocalPlayerDeath(class IClientInstance&, class LocalPlayer&); // NOLINT
    /**
     * @symbol
     * ?onLocalPlayerRespawn\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVIClientInstance\@\@AEAVLocalPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLocalPlayerRespawn(class IClientInstance&, class LocalPlayer&); // NOLINT
    /**
     * @symbol ?onPlayerAIStepBegin\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAIStepBegin(class Player&); // NOLINT
    /**
     * @symbol ?onPlayerAIStepEnd\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAIStepEnd(class Player&); // NOLINT
    /**
     * @symbol
     * ?onPlayerAction\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@W4PlayerActionType\@\@AEBVBlockPos\@\@H\@Z
     */
    MCVAPI enum class EventResult
    onPlayerAction(class Player&, enum class PlayerActionType, class BlockPos const&, int); // NOLINT
    /**
     * @symbol ?onPlayerAttackedActor\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAttackedActor(class Player&, class Actor&); // NOLINT
    /**
     * @symbol ?onPlayerAuthInputApplied\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAuthInputApplied(class Player&); // NOLINT
    /**
     * @symbol ?onPlayerAuthInputReceived\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAuthInputReceived(class Player&); // NOLINT
    /**
     * @symbol
     * ?onPlayerAwardAchievement\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@W4AchievementIds\@MinecraftEventing\@\@\@Z
     */
    MCVAPI enum class EventResult
    onPlayerAwardAchievement(class Player&, enum class MinecraftEventing::AchievementIds); // NOLINT
    /**
     * @symbol ?onPlayerCaravanChanged\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEBVActor\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerCaravanChanged(class Actor const&, int); // NOLINT
    /**
     * @symbol
     * ?onPlayerCraftedItem\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemInstance\@\@_N22HHH22AEBV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult
    onPlayerCraftedItem(class Player&, class ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&); // NOLINT
    /**
     * @symbol
     * ?onPlayerCreated\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVLocalPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1_N\@Z
     */
    MCVAPI enum class EventResult
    onPlayerCreated(class LocalPlayer&, std::string const&, std::string const&, bool); // NOLINT
    /**
     * @symbol ?onPlayerDestroyedBlock\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@HHH\@Z
     */
    MCVAPI enum class EventResult onPlayerDestroyedBlock(class Player&, int, int, int); // NOLINT
    /**
     * @symbol ?onPlayerDestroyedBlock\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlock\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerDestroyedBlock(class Player&, class Block const&); // NOLINT
    /**
     * @symbol
     * ?onPlayerEnchantedItem\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemStack\@\@AEBVItemEnchants\@\@\@Z
     */
    MCVAPI enum class EventResult
    onPlayerEnchantedItem(class Player&, class ItemStack const&, class ItemEnchants const&); // NOLINT
    /**
     * @symbol
     * ?onPlayerEquippedArmor\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerEquippedArmor(class Player&, class ItemDescriptor const&); // NOLINT
    /**
     * @symbol ?onPlayerInput\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAUIPlayerMovementProxy\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerInput(struct IPlayerMovementProxy&); // NOLINT
    /**
     * @symbol
     * ?onPlayerItemEquipped\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemInstance\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerItemEquipped(class Player&, class ItemInstance const&, int); // NOLINT
    /**
     * @symbol
     * ?onPlayerItemPlaceInteraction\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerItemPlaceInteraction(class Player&, class ItemInstance const&); // NOLINT
    /**
     * @symbol
     * ?onPlayerItemUseInteraction\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerItemUseInteraction(class Player&, class ItemInstance const&); // NOLINT
    /**
     * @symbol ?onPlayerMove\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerMove(class Player&); // NOLINT
    /**
     * @symbol ?onPlayerMovementAnomaly\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI enum class EventResult onPlayerMovementAnomaly(class Player&, class Vec3 const&, float, float); // NOLINT
    /**
     * @symbol ?onPlayerMovementCorrected\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI enum class EventResult onPlayerMovementCorrected(class Player&, class Vec3 const&, float, float); // NOLINT
    /**
     * @symbol ?onPlayerMovementRewindCorrected\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@_K\@Z
     */
    MCVAPI enum class EventResult onPlayerMovementRewindCorrected(class Player&, unsigned __int64); // NOLINT
    /**
     * @symbol ?onPlayerNamedItem\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerNamedItem(class Player&, class ItemDescriptor const&); // NOLINT
    /**
     * @symbol ?onPlayerOnGround\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerOnGround(class Player&); // NOLINT
    /**
     * @symbol
     * ?onPlayerPiglinBarter\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI enum class EventResult onPlayerPiglinBarter(class Player&, std::string const&, bool); // NOLINT
    /**
     * @symbol
     * ?onPlayerPortalBuilt\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerPortalBuilt(class Player&, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol
     * ?onPlayerPortalUsed\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    MCVAPI enum class EventResult
    onPlayerPortalUsed(class Player&, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol ?onPlayerSaved\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerSaved(class Player&); // NOLINT
    /**
     * @symbol ?onPlayerSlide\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerSlide(class Player&); // NOLINT
    /**
     * @symbol
     * ?onPlayerSmithiedItem\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerSmithiedItem(class Player&, class ItemDescriptor const&); // NOLINT
    /**
     * @symbol ?onPlayerStartRiding\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerStartRiding(class Player&, class Actor&); // NOLINT
    /**
     * @symbol ?onPlayerStopRiding\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@_N11\@Z
     */
    MCVAPI enum class EventResult onPlayerStopRiding(class Player&, bool, bool, bool); // NOLINT
    /**
     * @symbol ?onPlayerTargetBlockHit\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerTargetBlockHit(class Player&, int); // NOLINT
    /**
     * @symbol ?onPlayerTeleported\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerTeleported(class Player&); // NOLINT
    /**
     * @symbol ?onPlayerTick\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerTick(class Player&); // NOLINT
    /**
     * @symbol ?onPlayerTurn\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEAVVec2\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerTurn(class Player&, class Vec2&); // NOLINT
    /**
     * @symbol ?onPlayerWaxOnWaxOff\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerWaxOnWaxOff(class Player&, int); // NOLINT
    /**
     * @symbol ?onStartDestroyBlock\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@AEAE\@Z
     */
    MCVAPI enum class EventResult onStartDestroyBlock(class Player&, class BlockPos const&, unsigned char&); // NOLINT
#endif
};
