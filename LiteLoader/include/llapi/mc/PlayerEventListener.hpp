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
     * @hash   1619264315
     * @symbol  ?onCameraSetPlayerRot\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVVec2\@\@\@Z
     */
    MCVAPI enum class EventResult onCameraSetPlayerRot(class Player &, class Vec2 const &);
    /**
     * @hash   -239201664
     * @symbol  ?onEvent\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEBUPlayerNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerNotificationEvent const &);
    /**
     * @hash   -1034762265
     * @symbol  ?onLocalPlayerDeath\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVIClientInstance\@\@AEAVLocalPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLocalPlayerDeath(class IClientInstance &, class LocalPlayer &);
    /**
     * @hash   -1300831141
     * @symbol  ?onLocalPlayerRespawn\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVIClientInstance\@\@AEAVLocalPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLocalPlayerRespawn(class IClientInstance &, class LocalPlayer &);
    /**
     * @hash   -1352963365
     * @symbol  ?onPlayerAIStepBegin\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAIStepBegin(class Player &);
    /**
     * @hash   -2021316439
     * @symbol  ?onPlayerAIStepEnd\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAIStepEnd(class Player &);
    /**
     * @hash   2026390334
     * @symbol  ?onPlayerAction\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@W4PlayerActionType\@\@AEBVBlockPos\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerAction(class Player &, enum class PlayerActionType, class BlockPos const &, int);
    /**
     * @hash   1886655253
     * @symbol  ?onPlayerAttackedActor\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAttackedActor(class Player &, class Actor &);
    /**
     * @hash   -965730923
     * @symbol  ?onPlayerAuthInputApplied\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAuthInputApplied(class Player &);
    /**
     * @hash   -1056837395
     * @symbol  ?onPlayerAuthInputReceived\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAuthInputReceived(class Player &);
    /**
     * @hash   48321446
     * @symbol  ?onPlayerAwardAchievement\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@W4AchievementIds\@MinecraftEventing\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerAwardAchievement(class Player &, enum class MinecraftEventing::AchievementIds);
    /**
     * @hash   1092497020
     * @symbol  ?onPlayerCaravanChanged\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEBVActor\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerCaravanChanged(class Actor const &, int);
    /**
     * @hash   -488576743
     * @symbol  ?onPlayerCraftedItem\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemInstance\@\@_N22HHH22AEBV?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerCraftedItem(class Player &, class ItemInstance const &, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const &);
    /**
     * @hash   -671860857
     * @symbol  ?onPlayerCreated\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVLocalPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1_N\@Z
     */
    MCVAPI enum class EventResult onPlayerCreated(class LocalPlayer &, std::string const &, std::string const &, bool);
    /**
     * @hash   286301267
     * @symbol  ?onPlayerDestroyedBlock\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@HHH\@Z
     */
    MCVAPI enum class EventResult onPlayerDestroyedBlock(class Player &, int, int, int);
    /**
     * @hash   -1803270176
     * @symbol  ?onPlayerDestroyedBlock\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlock\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerDestroyedBlock(class Player &, class Block const &);
    /**
     * @hash   2064869381
     * @symbol  ?onPlayerEnchantedItem\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemStack\@\@AEBVItemEnchants\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerEnchantedItem(class Player &, class ItemStack const &, class ItemEnchants const &);
    /**
     * @hash   -770262753
     * @symbol  ?onPlayerEquippedArmor\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerEquippedArmor(class Player &, class ItemDescriptor const &);
    /**
     * @hash   -1745994796
     * @symbol  ?onPlayerInput\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAUIPlayerMovementProxy\@\@AEAVMoveInputHandler\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerInput(struct IPlayerMovementProxy &, class MoveInputHandler &);
    /**
     * @hash   563059748
     * @symbol  ?onPlayerItemEquipped\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemInstance\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerItemEquipped(class Player &, class ItemInstance const &, int);
    /**
     * @hash   -75205033
     * @symbol  ?onPlayerItemPlaceInteraction\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerItemPlaceInteraction(class Player &, class ItemInstance const &);
    /**
     * @hash   -1618040169
     * @symbol  ?onPlayerItemUseInteraction\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemInstance\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerItemUseInteraction(class Player &, class ItemInstance const &);
    /**
     * @hash   1679451103
     * @symbol  ?onPlayerMove\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerMove(class Player &);
    /**
     * @hash   -1740476522
     * @symbol  ?onPlayerMovementAnomaly\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI enum class EventResult onPlayerMovementAnomaly(class Player &, class Vec3 const &, float, float);
    /**
     * @hash   -366574564
     * @symbol  ?onPlayerMovementCorrected\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI enum class EventResult onPlayerMovementCorrected(class Player &, class Vec3 const &, float, float);
    /**
     * @hash   216645283
     * @symbol  ?onPlayerMovementRewindCorrected\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@_K\@Z
     */
    MCVAPI enum class EventResult onPlayerMovementRewindCorrected(class Player &, unsigned __int64);
    /**
     * @hash   2111766251
     * @symbol  ?onPlayerNamedItem\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemDescriptor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerNamedItem(class Player &, class ItemDescriptor const &);
    /**
     * @hash   1944053226
     * @symbol  ?onPlayerOnGround\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerOnGround(class Player &);
    /**
     * @hash   -953500209
     * @symbol  ?onPlayerPiglinBarter\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI enum class EventResult onPlayerPiglinBarter(class Player &, std::string const &, bool);
    /**
     * @hash   790039490
     * @symbol  ?onPlayerPortalBuilt\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerPortalBuilt(class Player &, class AutomaticID<class Dimension, int>);
    /**
     * @hash   1871745199
     * @symbol  ?onPlayerPortalUsed\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    MCVAPI enum class EventResult onPlayerPortalUsed(class Player &, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    /**
     * @hash   668902249
     * @symbol  ?onPlayerSaved\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerSaved(class Player &);
    /**
     * @hash   799686975
     * @symbol  ?onPlayerSlide\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerSlide(class Player &);
    /**
     * @hash   159625950
     * @symbol  ?onPlayerStartRiding\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerStartRiding(class Player &, class Actor &);
    /**
     * @hash   240763251
     * @symbol  ?onPlayerStopRiding\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@_N11\@Z
     */
    MCVAPI enum class EventResult onPlayerStopRiding(class Player &, bool, bool, bool);
    /**
     * @hash   1579132886
     * @symbol  ?onPlayerTargetBlockHit\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerTargetBlockHit(class Player &, int);
    /**
     * @hash   -1365841114
     * @symbol  ?onPlayerTeleported\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerTeleported(class Player &);
    /**
     * @hash   -973601773
     * @symbol  ?onPlayerTick\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerTick(class Player &);
    /**
     * @hash   1451876451
     * @symbol  ?onPlayerTurn\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEAVVec2\@\@\@Z
     */
    MCVAPI enum class EventResult onPlayerTurn(class Player &, class Vec2 &);
    /**
     * @hash   942244141
     * @symbol  ?onPlayerWaxOnWaxOff\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@H\@Z
     */
    MCVAPI enum class EventResult onPlayerWaxOnWaxOff(class Player &, int);
    /**
     * @hash   -710200821
     * @symbol  ?onStartDestroyBlock\@PlayerEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVBlockPos\@\@AEAE\@Z
     */
    MCVAPI enum class EventResult onStartDestroyBlock(class Player &, class BlockPos const &, unsigned char &);
#endif

};