/**
 * @file  PlayerEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1513323675
     * @symbol ?onCameraSetPlayerRot@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVVec2@@@Z
     */
    MCVAPI enum class EventResult onCameraSetPlayerRot(class Player &, class Vec2 const &);
    /**
     * @hash   -345142304
     * @symbol ?onEvent@PlayerEventListener@@UEAA?AW4EventResult@@AEBUPlayerNotificationEvent@@@Z
     */
    MCVAPI enum class EventResult onEvent(struct PlayerNotificationEvent const &);
    /**
     * @hash   -1140702905
     * @symbol ?onLocalPlayerDeath@PlayerEventListener@@UEAA?AW4EventResult@@AEAVIClientInstance@@AEAVLocalPlayer@@@Z
     */
    MCVAPI enum class EventResult onLocalPlayerDeath(class IClientInstance &, class LocalPlayer &);
    /**
     * @hash   -1406771781
     * @symbol ?onLocalPlayerRespawn@PlayerEventListener@@UEAA?AW4EventResult@@AEAVIClientInstance@@AEAVLocalPlayer@@@Z
     */
    MCVAPI enum class EventResult onLocalPlayerRespawn(class IClientInstance &, class LocalPlayer &);
    /**
     * @hash   -1458904005
     * @symbol ?onPlayerAIStepBegin@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
     */
    MCVAPI enum class EventResult onPlayerAIStepBegin(class Player &);
    /**
     * @hash   -2127257079
     * @symbol ?onPlayerAIStepEnd@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
     */
    MCVAPI enum class EventResult onPlayerAIStepEnd(class Player &);
    /**
     * @hash   1920449694
     * @symbol ?onPlayerAction@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@W4PlayerActionType@@AEBVBlockPos@@H@Z
     */
    MCVAPI enum class EventResult onPlayerAction(class Player &, enum class PlayerActionType, class BlockPos const &, int);
    /**
     * @hash   1780714613
     * @symbol ?onPlayerAttackedActor@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEAVActor@@@Z
     */
    MCVAPI enum class EventResult onPlayerAttackedActor(class Player &, class Actor &);
    /**
     * @hash   -1071671563
     * @symbol ?onPlayerAuthInputApplied@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
     */
    MCVAPI enum class EventResult onPlayerAuthInputApplied(class Player &);
    /**
     * @hash   -1162778035
     * @symbol ?onPlayerAuthInputReceived@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
     */
    MCVAPI enum class EventResult onPlayerAuthInputReceived(class Player &);
    /**
     * @hash   -57619194
     * @symbol ?onPlayerAwardAchievement@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@W4AchievementIds@MinecraftEventing@@@Z
     */
    MCVAPI enum class EventResult onPlayerAwardAchievement(class Player &, enum class MinecraftEventing::AchievementIds);
    /**
     * @hash   986556380
     * @symbol ?onPlayerCaravanChanged@PlayerEventListener@@UEAA?AW4EventResult@@AEBVActor@@H@Z
     */
    MCVAPI enum class EventResult onPlayerCaravanChanged(class Actor const &, int);
    /**
     * @hash   -594517383
     * @symbol ?onPlayerCraftedItem@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemInstance@@_N22HHH22AEBV?$vector@FV?$allocator@F@std@@@std@@@Z
     */
    MCVAPI enum class EventResult onPlayerCraftedItem(class Player &, class ItemInstance const &, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const &);
    /**
     * @hash   -777801497
     * @symbol ?onPlayerCreated@PlayerEventListener@@UEAA?AW4EventResult@@AEAVLocalPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_N@Z
     */
    MCVAPI enum class EventResult onPlayerCreated(class LocalPlayer &, std::string const &, std::string const &, bool);
    /**
     * @hash   180360627
     * @symbol ?onPlayerDestroyedBlock@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@HHH@Z
     */
    MCVAPI enum class EventResult onPlayerDestroyedBlock(class Player &, int, int, int);
    /**
     * @symbol ?onPlayerDestroyedBlock@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@@Z
     */
    MCVAPI enum class EventResult onPlayerDestroyedBlock(class Player &, class Block const &);
    /**
     * @hash   1958928741
     * @symbol ?onPlayerEnchantedItem@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemStack@@AEBVItemEnchants@@@Z
     */
    MCVAPI enum class EventResult onPlayerEnchantedItem(class Player &, class ItemStack const &, class ItemEnchants const &);
    /**
     * @hash   -876203393
     * @symbol ?onPlayerEquippedArmor@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemDescriptor@@@Z
     */
    MCVAPI enum class EventResult onPlayerEquippedArmor(class Player &, class ItemDescriptor const &);
    /**
     * @hash   -1851935436
     * @symbol ?onPlayerInput@PlayerEventListener@@UEAA?AW4EventResult@@AEAUIPlayerMovementProxy@@AEAVMoveInputHandler@@@Z
     */
    MCVAPI enum class EventResult onPlayerInput(struct IPlayerMovementProxy &, class MoveInputHandler &);
    /**
     * @hash   457119108
     * @symbol ?onPlayerItemEquipped@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemInstance@@H@Z
     */
    MCVAPI enum class EventResult onPlayerItemEquipped(class Player &, class ItemInstance const &, int);
    /**
     * @hash   -181145673
     * @symbol ?onPlayerItemPlaceInteraction@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemInstance@@@Z
     */
    MCVAPI enum class EventResult onPlayerItemPlaceInteraction(class Player &, class ItemInstance const &);
    /**
     * @hash   -1723980809
     * @symbol ?onPlayerItemUseInteraction@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemInstance@@@Z
     */
    MCVAPI enum class EventResult onPlayerItemUseInteraction(class Player &, class ItemInstance const &);
    /**
     * @hash   1573510463
     * @symbol ?onPlayerMove@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
     */
    MCVAPI enum class EventResult onPlayerMove(class Player &);
    /**
     * @hash   -1846417162
     * @symbol ?onPlayerMovementAnomaly@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVVec3@@MM@Z
     */
    MCVAPI enum class EventResult onPlayerMovementAnomaly(class Player &, class Vec3 const &, float, float);
    /**
     * @hash   -472515204
     * @symbol ?onPlayerMovementCorrected@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVVec3@@MM@Z
     */
    MCVAPI enum class EventResult onPlayerMovementCorrected(class Player &, class Vec3 const &, float, float);
    /**
     * @hash   110704643
     * @symbol ?onPlayerMovementRewindCorrected@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@_K@Z
     */
    MCVAPI enum class EventResult onPlayerMovementRewindCorrected(class Player &, unsigned __int64);
    /**
     * @hash   2005825611
     * @symbol ?onPlayerNamedItem@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemDescriptor@@@Z
     */
    MCVAPI enum class EventResult onPlayerNamedItem(class Player &, class ItemDescriptor const &);
    /**
     * @hash   1838112586
     * @symbol ?onPlayerOnGround@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
     */
    MCVAPI enum class EventResult onPlayerOnGround(class Player &);
    /**
     * @hash   -1059440849
     * @symbol ?onPlayerPiglinBarter@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCVAPI enum class EventResult onPlayerPiglinBarter(class Player &, std::string const &, bool);
    /**
     * @hash   684098850
     * @symbol ?onPlayerPortalBuilt@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCVAPI enum class EventResult onPlayerPortalBuilt(class Player &, class AutomaticID<class Dimension, int>);
    /**
     * @hash   1765804559
     * @symbol ?onPlayerPortalUsed@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@V?$AutomaticID@VDimension@@H@@1@Z
     */
    MCVAPI enum class EventResult onPlayerPortalUsed(class Player &, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    /**
     * @hash   562961609
     * @symbol ?onPlayerSaved@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
     */
    MCVAPI enum class EventResult onPlayerSaved(class Player &);
    /**
     * @hash   693746335
     * @symbol ?onPlayerSlide@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
     */
    MCVAPI enum class EventResult onPlayerSlide(class Player &);
    /**
     * @hash   53685310
     * @symbol ?onPlayerStartRiding@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEAVActor@@@Z
     */
    MCVAPI enum class EventResult onPlayerStartRiding(class Player &, class Actor &);
    /**
     * @hash   134822611
     * @symbol ?onPlayerStopRiding@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@_N11@Z
     */
    MCVAPI enum class EventResult onPlayerStopRiding(class Player &, bool, bool, bool);
    /**
     * @hash   1473192246
     * @symbol ?onPlayerTargetBlockHit@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@H@Z
     */
    MCVAPI enum class EventResult onPlayerTargetBlockHit(class Player &, int);
    /**
     * @hash   -1471781754
     * @symbol ?onPlayerTeleported@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
     */
    MCVAPI enum class EventResult onPlayerTeleported(class Player &);
    /**
     * @hash   -1079542413
     * @symbol ?onPlayerTick@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@@Z
     */
    MCVAPI enum class EventResult onPlayerTick(class Player &);
    /**
     * @hash   1345935811
     * @symbol ?onPlayerTurn@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEAVVec2@@@Z
     */
    MCVAPI enum class EventResult onPlayerTurn(class Player &, class Vec2 &);
    /**
     * @hash   836303501
     * @symbol ?onPlayerWaxOnWaxOff@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@H@Z
     */
    MCVAPI enum class EventResult onPlayerWaxOnWaxOff(class Player &, int);
    /**
     * @hash   -816141461
     * @symbol ?onStartDestroyBlock@PlayerEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@AEAE@Z
     */
    MCVAPI enum class EventResult onStartDestroyBlock(class Player &, class BlockPos const &, unsigned char &);
#endif

};