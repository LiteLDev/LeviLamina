/**
 * @file  PlayerEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerEventListener.
 *
 */
class PlayerEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYEREVENTLISTENER
public:
    class PlayerEventListener& operator=(class PlayerEventListener const &) = delete;
    PlayerEventListener(class PlayerEventListener const &) = delete;
    PlayerEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYEREVENTLISTENER
    /**
     * @symbol ?onCameraSetPlayerRot\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVVec2\@\@\@Z
     */
    MCVAPI enum class EventResult onCameraSetPlayerRot(class Player &, class Vec2 const &);
    /**
     * @symbol ?onEvent\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEBUPlayerNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerNotificationEvent const &);
    /**
     * @symbol ?onLocalPlayerDeath\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVIClientInstance\@\@AEAVLocalPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLocalPlayerDeath(class IClientInstance &, class LocalPlayer &);
    /**
     * @symbol ?onLocalPlayerRespawn\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVIClientInstance\@\@AEAVLocalPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLocalPlayerRespawn(class IClientInstance &, class LocalPlayer &);
    /**
     * @symbol ?onPlayerAIStepBegin\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAIStepBegin(class Player &);
    /**
     * @symbol ?onPlayerAIStepEnd\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAIStepEnd(class Player &);
    /**
     * @symbol ?onPlayerAction\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@W4PlayerActionType\@\@AEBVBlockPos\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerAction(class Player &, enum class PlayerActionType, class BlockPos const &, int);
    /**
     * @symbol ?onPlayerAttackedActor\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAttackedActor(class Player &, class Actor &);
    /**
     * @symbol ?onPlayerAuthInputApplied\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAuthInputApplied(class Player &);
    /**
     * @symbol ?onPlayerAuthInputReceived\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAuthInputReceived(class Player &);
    /**
     * @symbol ?onPlayerAwardAchievement\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@W4AchievementIds\@MinecraftEventing\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAwardAchievement(class Player &, enum class MinecraftEventing::AchievementIds);
    /**
     * @symbol ?onPlayerCaravanChanged\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEBVActor\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerCaravanChanged(class Actor const &, int);
    /**
     * @symbol ?onPlayerCraftedItem\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemInstance\@\@_N22HHH22AEBV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerCraftedItem(class Player &, class ItemInstance const &, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const &);
    /**
     * @symbol ?onPlayerCreated\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVLocalPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1_N\@Z
     */
    MCVAPI enum class EventResult onPlayerCreated(class LocalPlayer &, std::string const &, std::string const &, bool);
    /**
     * @symbol ?onPlayerDestroyedBlock\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@HHH\@Z
     */
    MCVAPI enum class EventResult onPlayerDestroyedBlock(class Player &, int, int, int);
    /**
     * @symbol ?onPlayerDestroyedBlock\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlock\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerDestroyedBlock(class Player &, class Block const &);
    /**
     * @symbol ?onPlayerEnchantedItem\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemStack\@\@AEBVItemEnchants\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerEnchantedItem(class Player &, class ItemStack const &, class ItemEnchants const &);
    /**
     * @symbol ?onPlayerEquippedArmor\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerEquippedArmor(class Player &, class ItemDescriptor const &);
    /**
     * @symbol ?onPlayerInput\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAUIPlayerMovementProxy\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerInput(struct IPlayerMovementProxy &);
    /**
     * @symbol ?onPlayerItemEquipped\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemInstance\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerItemEquipped(class Player &, class ItemInstance const &, int);
    /**
     * @symbol ?onPlayerItemPlaceInteraction\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerItemPlaceInteraction(class Player &, class ItemInstance const &);
    /**
     * @symbol ?onPlayerItemUseInteraction\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerItemUseInteraction(class Player &, class ItemInstance const &);
    /**
     * @symbol ?onPlayerMove\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerMove(class Player &);
    /**
     * @symbol ?onPlayerMovementAnomaly\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI enum class EventResult onPlayerMovementAnomaly(class Player &, class Vec3 const &, float, float);
    /**
     * @symbol ?onPlayerMovementCorrected\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI enum class EventResult onPlayerMovementCorrected(class Player &, class Vec3 const &, float, float);
    /**
     * @symbol ?onPlayerMovementRewindCorrected\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@_K\@Z
     */
    MCVAPI enum class EventResult onPlayerMovementRewindCorrected(class Player &, unsigned __int64);
    /**
     * @symbol ?onPlayerNamedItem\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerNamedItem(class Player &, class ItemDescriptor const &);
    /**
     * @symbol ?onPlayerOnGround\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerOnGround(class Player &);
    /**
     * @symbol ?onPlayerPiglinBarter\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI enum class EventResult onPlayerPiglinBarter(class Player &, std::string const &, bool);
    /**
     * @symbol ?onPlayerPortalBuilt\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerPortalBuilt(class Player &, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?onPlayerPortalUsed\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    MCVAPI enum class EventResult onPlayerPortalUsed(class Player &, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?onPlayerSaved\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerSaved(class Player &);
    /**
     * @symbol ?onPlayerSlide\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerSlide(class Player &);
    /**
     * @symbol ?onPlayerSmithiedItem\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerSmithiedItem(class Player &, class ItemDescriptor const &);
    /**
     * @symbol ?onPlayerStartRiding\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerStartRiding(class Player &, class Actor &);
    /**
     * @symbol ?onPlayerStopRiding\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@_N11\@Z
     */
    MCVAPI enum class EventResult onPlayerStopRiding(class Player &, bool, bool, bool);
    /**
     * @symbol ?onPlayerTargetBlockHit\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerTargetBlockHit(class Player &, int);
    /**
     * @symbol ?onPlayerTeleported\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerTeleported(class Player &);
    /**
     * @symbol ?onPlayerTick\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerTick(class Player &);
    /**
     * @symbol ?onPlayerTurn\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEAVVec2\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerTurn(class Player &, class Vec2 &);
    /**
     * @symbol ?onPlayerWaxOnWaxOff\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerWaxOnWaxOff(class Player &, int);
    /**
     * @symbol ?onStartDestroyBlock\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@AEAE\@Z
     */
    MCVAPI enum class EventResult onStartDestroyBlock(class Player &, class BlockPos const &, unsigned char &);
#endif

};
