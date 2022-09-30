/**
 * @file  DirectPlayerMovementProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DirectPlayerMovementProxy.
 *
 */
class DirectPlayerMovementProxy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTPLAYERMOVEMENTPROXY
public:
    class DirectPlayerMovementProxy& operator=(class DirectPlayerMovementProxy const &) = delete;
    DirectPlayerMovementProxy(class DirectPlayerMovementProxy const &) = delete;
    DirectPlayerMovementProxy() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTPLAYERMOVEMENTPROXY
    /**
     * @hash   -1932466065
     * @symbol ?_getPlayer@DirectPlayerMovementProxy@@UEAAPEAVPlayer@@XZ
     */
    MCVAPI class Player * _getPlayer();
    /**
     * @hash   1581807120
     * @symbol ?_onMovePlayerPacketNormal@DirectPlayerMovementProxy@@UEAAXAEBVVec3@@AEBVVec2@@M@Z
     */
    MCVAPI void _onMovePlayerPacketNormal(class Vec3 const &, class Vec2 const &, float);
    /**
     * @hash   -1726589690
     * @symbol ?_resetPos@DirectPlayerMovementProxy@@UEAAX_N@Z
     */
    MCVAPI void _resetPos(bool);
    /**
     * @hash   -1452195746
     * @symbol ?_setPositionMode@DirectPlayerMovementProxy@@UEAAXH@Z
     */
    MCVAPI void _setPositionMode(int);
    /**
     * @hash   1628265500
     * @symbol ?areHandsBusy@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool areHandsBusy() const;
    /**
     * @hash   558505368
     * @symbol ?checkMovementStats@DirectPlayerMovementProxy@@UEAAXAEBVVec3@@@Z
     */
    MCVAPI void checkMovementStats(class Vec3 const &);
    /**
     * @hash   306632919
     * @symbol ?fireEventPersonaEmotePlayed@DirectPlayerMovementProxy@@UEAAX_N@Z
     */
    MCVAPI void fireEventPersonaEmotePlayed(bool);
    /**
     * @hash   -626334782
     * @symbol ?getAbilities@DirectPlayerMovementProxy@@UEBAAEBVLayeredAbilities@@XZ
     */
    MCVAPI class LayeredAbilities const & getAbilities() const;
    /**
     * @hash   -366175913
     * @symbol ?getAbilityBool@DirectPlayerMovementProxy@@UEBA_NW4AbilitiesIndex@@@Z
     */
    MCVAPI bool getAbilityBool(enum class AbilitiesIndex) const;
    /**
     * @hash   1902332871
     * @symbol ?getAbilityFloat@DirectPlayerMovementProxy@@UEBAMW4AbilitiesIndex@@@Z
     */
    MCVAPI float getAbilityFloat(enum class AbilitiesIndex) const;
    /**
     * @hash   -2086644200
     * @symbol ?getBob@DirectPlayerMovementProxy@@UEBAMXZ
     */
    MCVAPI float getBob() const;
    /**
     * @hash   1602746854
     * @symbol ?getClientInstance@DirectPlayerMovementProxy@@UEAAPEAUIClientInstanceProxy@@XZ
     */
    MCVAPI struct IClientInstanceProxy * getClientInstance();
    /**
     * @hash   335354402
     * @symbol ?getClientInstance@DirectPlayerMovementProxy@@UEBAPEBUIClientInstanceProxy@@XZ
     */
    MCVAPI struct IClientInstanceProxy const * getClientInstance() const;
    /**
     * @hash   -24538168
     * @symbol ?getCurrentTick@DirectPlayerMovementProxy@@UEBAAEBUTick@@XZ
     */
    MCVAPI struct Tick const & getCurrentTick() const;
    /**
     * @hash   -1440553632
     * @symbol ?getGlidingTicks@DirectPlayerMovementProxy@@UEBAHXZ
     */
    MCVAPI int getGlidingTicks() const;
    /**
     * @hash   1026948507
     * @symbol ?getInputMode@DirectPlayerMovementProxy@@UEBA?AW4InputMode@@XZ
     */
    MCVAPI enum class InputMode getInputMode() const;
    /**
     * @hash   1712849293
     * @symbol ?getItemUseMovementModifier@DirectPlayerMovementProxy@@UEBAMXZ
     */
    MCVAPI float getItemUseMovementModifier() const;
    /**
     * @hash   739811595
     * @symbol ?getJumpRidingScale@DirectPlayerMovementProxy@@UEAAMXZ
     */
    MCVAPI float getJumpRidingScale();
    /**
     * @hash   295486626
     * @symbol ?getLastBob@DirectPlayerMovementProxy@@UEBAMXZ
     */
    MCVAPI float getLastBob() const;
    /**
     * @hash   1297333127
     * @symbol ?getLastDelta@DirectPlayerMovementProxy@@UEBA?AVVec3@@XZ
     */
    MCVAPI class Vec3 getLastDelta() const;
    /**
     * @hash   1156345251
     * @symbol ?getLastPos@DirectPlayerMovementProxy@@UEBA?AVVec3@@XZ
     */
    MCVAPI class Vec3 getLastPos() const;
    /**
     * @hash   -741851807
     * @symbol ?getLoadingState@DirectPlayerMovementProxy@@UEBA?AW4LoadingState@@XZ
     */
    MCVAPI enum class LoadingState getLoadingState() const;
    /**
     * @hash   -1080719442
     * @symbol ?getMoveInputHandler@DirectPlayerMovementProxy@@UEAAPEAVMoveInputHandler@@XZ
     */
    MCVAPI class MoveInputHandler * getMoveInputHandler();
    /**
     * @hash   -216913818
     * @symbol ?getPlayMode@DirectPlayerMovementProxy@@UEBA?AW4ClientPlayMode@@XZ
     */
    MCVAPI enum class ClientPlayMode getPlayMode() const;
    /**
     * @hash   1224582024
     * @symbol ?getPlayerPaddleForce@DirectPlayerMovementProxy@@UEBAMW4Side@@@Z
     */
    MCVAPI float getPlayerPaddleForce(enum class Side) const;
    /**
     * @hash   -1224066806
     * @symbol ?getVRMoveAdjustAngle@DirectPlayerMovementProxy@@UEBAMXZ
     */
    MCVAPI float getVRMoveAdjustAngle() const;
    /**
     * @hash   -668411710
     * @symbol ?hasMoveInput@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool hasMoveInput() const;
    /**
     * @hash   370487530
     * @symbol ?isAdventureSettingsAutoJump@DirectPlayerMovementProxy@@UEAA_NXZ
     */
    MCVAPI bool isAdventureSettingsAutoJump();
    /**
     * @hash   -1201921786
     * @symbol ?isArmorFlyEnabled@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool isArmorFlyEnabled() const;
    /**
     * @hash   -818634451
     * @symbol ?isAutoJumpEnabled@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool isAutoJumpEnabled() const;
    /**
     * @hash   1010730526
     * @symbol ?isAutoJumping@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool isAutoJumping() const;
    /**
     * @hash   1621198447
     * @symbol ?isEmoting@DirectPlayerMovementProxy@@UEAA_NXZ
     */
    MCVAPI bool isEmoting();
    /**
     * @hash   731151900
     * @symbol ?isFlying@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool isFlying() const;
    /**
     * @hash   347417685
     * @symbol ?isLocalPlayer@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool isLocalPlayer() const;
    /**
     * @hash   1996127607
     * @symbol ?isPaddling@DirectPlayerMovementProxy@@UEBA_NW4Side@@@Z
     */
    MCVAPI bool isPaddling(enum class Side) const;
    /**
     * @hash   983044356
     * @symbol ?isServerAuthoritativeMovement@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool isServerAuthoritativeMovement() const;
    /**
     * @hash   2077091704
     * @symbol ?isSleeping@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool isSleeping() const;
    /**
     * @hash   -1863225210
     * @symbol ?isSlowedByItemUse@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool isSlowedByItemUse() const;
    /**
     * @hash   1746939160
     * @symbol ?isSpectator@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool isSpectator() const;
    /**
     * @hash   -1752882192
     * @symbol ?isUsingItem@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool isUsingItem() const;
    /**
     * @hash   -2001861605
     * @symbol ?registerFramewiseActionOrStop@DirectPlayerMovementProxy@@UEAAXXZ
     */
    MCVAPI void registerFramewiseActionOrStop();
    /**
     * @hash   426973569
     * @symbol ?sendClientAuthInput@DirectPlayerMovementProxy@@UEAAXXZ
     */
    MCVAPI void sendClientAuthInput();
    /**
     * @hash   1399503860
     * @symbol ?sendInput@DirectPlayerMovementProxy@@UEAAXXZ
     */
    MCVAPI void sendInput();
    /**
     * @hash   483259187
     * @symbol ?sendPacket@DirectPlayerMovementProxy@@UEAAXAEAVPlayerActionPacket@@@Z
     */
    MCVAPI void sendPacket(class PlayerActionPacket &);
    /**
     * @hash   1871145050
     * @symbol ?sendPacket@DirectPlayerMovementProxy@@UEAAXAEAVPassengerJumpPacket@@@Z
     */
    MCVAPI void sendPacket(class PassengerJumpPacket &);
    /**
     * @hash   -2074555181
     * @symbol ?sendPlayerInput@DirectPlayerMovementProxy@@UEAAXXZ
     */
    MCVAPI void sendPlayerInput();
    /**
     * @hash   -1107071748
     * @symbol ?sendPlayerMove@DirectPlayerMovementProxy@@UEAAXXZ
     */
    MCVAPI void sendPlayerMove();
    /**
     * @hash   805717635
     * @symbol ?sendPosition@DirectPlayerMovementProxy@@UEAAXXZ
     */
    MCVAPI void sendPosition();
    /**
     * @hash   -307290705
     * @symbol ?sendRequestAbilityPacket@DirectPlayerMovementProxy@@UEAAXW4AbilitiesIndex@@_N@Z
     */
    MCVAPI void sendRequestAbilityPacket(enum class AbilitiesIndex, bool);
    /**
     * @hash   62473686
     * @symbol ?setAbilityBool@DirectPlayerMovementProxy@@UEAAXW4AbilitiesIndex@@_N@Z
     */
    MCVAPI void setAbilityBool(enum class AbilitiesIndex, bool);
    /**
     * @hash   766417950
     * @symbol ?setAbilityFloat@DirectPlayerMovementProxy@@UEAAXW4AbilitiesIndex@@M@Z
     */
    MCVAPI void setAbilityFloat(enum class AbilitiesIndex, float);
    /**
     * @hash   83622663
     * @symbol ?setAutoJumping@DirectPlayerMovementProxy@@UEAAX_N@Z
     */
    MCVAPI void setAutoJumping(bool);
    /**
     * @hash   552626957
     * @symbol ?setBob@DirectPlayerMovementProxy@@UEAAXM@Z
     */
    MCVAPI void setBob(float);
    /**
     * @hash   -2046828737
     * @symbol ?setCurrentLocalMoveVelocity@DirectPlayerMovementProxy@@UEAAXAEBVVec2@@@Z
     */
    MCVAPI void setCurrentLocalMoveVelocity(class Vec2 const &);
    /**
     * @hash   1827274565
     * @symbol ?setEmotingStatus@DirectPlayerMovementProxy@@UEAAX_N@Z
     */
    MCVAPI void setEmotingStatus(bool);
    /**
     * @hash   -1376187857
     * @symbol ?setHandsBusy@DirectPlayerMovementProxy@@UEAAX_N@Z
     */
    MCVAPI void setHandsBusy(bool);
    /**
     * @hash   502239961
     * @symbol ?setHasMoveInput@DirectPlayerMovementProxy@@UEAAX_N@Z
     */
    MCVAPI void setHasMoveInput(bool);
    /**
     * @hash   1642015211
     * @symbol ?setJumpRidingScale@DirectPlayerMovementProxy@@UEAAXM@Z
     */
    MCVAPI void setJumpRidingScale(float);
    /**
     * @hash   -1541675533
     * @symbol ?setLastBob@DirectPlayerMovementProxy@@UEAAXM@Z
     */
    MCVAPI void setLastBob(float);
    /**
     * @hash   -186488672
     * @symbol ?setLastDelta@DirectPlayerMovementProxy@@UEAAXAEBVVec3@@@Z
     */
    MCVAPI void setLastDelta(class Vec3 const &);
    /**
     * @hash   -569833980
     * @symbol ?setLastPos@DirectPlayerMovementProxy@@UEAAXAEBVVec3@@@Z
     */
    MCVAPI void setLastPos(class Vec3 const &);
    /**
     * @hash   895629237
     * @symbol ?setPlayerPaddleForce@DirectPlayerMovementProxy@@UEAAXW4Side@@M@Z
     */
    MCVAPI void setPlayerPaddleForce(enum class Side, float);
    /**
     * @hash   -1998783492
     * @symbol ?setWasAutoJumping@DirectPlayerMovementProxy@@UEAAX_N@Z
     */
    MCVAPI void setWasAutoJumping(bool);
    /**
     * @hash   -311464905
     * @symbol ?shouldSendPosition@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool shouldSendPosition() const;
    /**
     * @hash   29122882
     * @symbol ?startGliding@DirectPlayerMovementProxy@@UEAAXXZ
     */
    MCVAPI void startGliding();
    /**
     * @hash   -863961118
     * @symbol ?stopGliding@DirectPlayerMovementProxy@@UEAAXXZ
     */
    MCVAPI void stopGliding();
    /**
     * @hash   745916026
     * @symbol ?tryAsPlayer@DirectPlayerMovementProxy@@UEBAPEBUIPlayerMovementProxy@@XZ
     */
    MCVAPI struct IPlayerMovementProxy const * tryAsPlayer() const;
    /**
     * @hash   -1898952130
     * @symbol ?tryAsPlayer@DirectPlayerMovementProxy@@UEAAPEAUIPlayerMovementProxy@@XZ
     */
    MCVAPI struct IPlayerMovementProxy * tryAsPlayer();
    /**
     * @hash   -484850552
     * @symbol ?tryGetPlayerActionComponent@DirectPlayerMovementProxy@@UEAAPEAUPlayerActionComponent@@XZ
     */
    MCVAPI struct PlayerActionComponent * tryGetPlayerActionComponent();
    /**
     * @hash   1446474126
     * @symbol ?updateClientPlayerInputState@DirectPlayerMovementProxy@@UEAAXXZ
     */
    MCVAPI void updateClientPlayerInputState();
    /**
     * @hash   1685158248
     * @symbol ?updateTouch@DirectPlayerMovementProxy@@UEAAXXZ
     */
    MCVAPI void updateTouch();
    /**
     * @hash   -805847489
     * @symbol ?wasAutoJumping@DirectPlayerMovementProxy@@UEBA_NXZ
     */
    MCVAPI bool wasAutoJumping() const;
#endif

};