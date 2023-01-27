/**
 * @file  DirectPlayerMovementProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1234431442
     * @symbol  ?_applyStateToComponents\@DirectPlayerMovementProxy\@\@MEAAXXZ
     */
    MCVAPI void _applyStateToComponents();
    /**
     * @hash   1292354282
     * @symbol  ?_extractStateFromComponents\@DirectPlayerMovementProxy\@\@MEAAXXZ
     */
    MCVAPI void _extractStateFromComponents();
    /**
     * @hash   -1828693441
     * @symbol  ?_getPlayer\@DirectPlayerMovementProxy\@\@UEAAPEAVPlayer\@\@XZ
     */
    MCVAPI class Player * _getPlayer();
    /**
     * @hash   900281296
     * @symbol  ?_onMovePlayerPacketNormal\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec3\@\@AEBVVec2\@\@M\@Z
     */
    MCVAPI void _onMovePlayerPacketNormal(class Vec3 const &, class Vec2 const &, float);
    /**
     * @hash   1886990166
     * @symbol  ?_resetPos\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void _resetPos(bool);
    /**
     * @hash   -2133475554
     * @symbol  ?_setPositionMode\@DirectPlayerMovementProxy\@\@UEAAXH\@Z
     */
    MCVAPI void _setPositionMode(int);
    /**
     * @hash   947416220
     * @symbol  ?areHandsBusy\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool areHandsBusy() const;
    /**
     * @hash   -121159960
     * @symbol  ?checkMovementStats\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec3\@\@\@Z
     */
    MCVAPI void checkMovementStats(class Vec3 const &);
    /**
     * @hash   398519895
     * @symbol  ?fireEventPersonaEmotePlayed\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventPersonaEmotePlayed(bool);
    /**
     * @hash   -1305400446
     * @symbol  ?getAbilities\@DirectPlayerMovementProxy\@\@UEBAAEBVLayeredAbilities\@\@XZ
     */
    MCVAPI class LayeredAbilities const & getAbilities() const;
    /**
     * @hash   -1045241577
     * @symbol  ?getAbilityBool\@DirectPlayerMovementProxy\@\@UEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCVAPI bool getAbilityBool(enum class AbilitiesIndex) const;
    /**
     * @hash   1223267207
     * @symbol  ?getAbilityFloat\@DirectPlayerMovementProxy\@\@UEBAMW4AbilitiesIndex\@\@\@Z
     */
    MCVAPI float getAbilityFloat(enum class AbilitiesIndex) const;
    /**
     * @hash   1529334312
     * @symbol  ?getBob\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getBob() const;
    /**
     * @hash   431977186
     * @symbol  ?getClientInstance\@DirectPlayerMovementProxy\@\@UEBAPEBUIClientInstanceProxy\@\@XZ
     */
    MCVAPI struct IClientInstanceProxy const * getClientInstance() const;
    /**
     * @hash   1699369638
     * @symbol  ?getClientInstance\@DirectPlayerMovementProxy\@\@UEAAPEAUIClientInstanceProxy\@\@XZ
     */
    MCVAPI struct IClientInstanceProxy * getClientInstance();
    /**
     * @hash   -703511576
     * @symbol  ?getCurrentTick\@DirectPlayerMovementProxy\@\@UEBAAEBUTick\@\@XZ
     */
    MCVAPI struct Tick const & getCurrentTick() const;
    /**
     * @hash   -2119465536
     * @symbol  ?getGlidingTicks\@DirectPlayerMovementProxy\@\@UEBAHXZ
     */
    MCVAPI int getGlidingTicks() const;
    /**
     * @hash   348036603
     * @symbol  ?getInputMode\@DirectPlayerMovementProxy\@\@UEBA?AW4InputMode\@\@XZ
     */
    MCVAPI enum class InputMode getInputMode() const;
    /**
     * @hash   1033998893
     * @symbol  ?getItemUseMovementModifier\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getItemUseMovementModifier() const;
    /**
     * @hash   1037537083
     * @symbol  ?getJumpRidingScale\@DirectPlayerMovementProxy\@\@UEAAMXZ
     */
    MCVAPI float getJumpRidingScale();
    /**
     * @hash   -383363774
     * @symbol  ?getLastBob\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getLastBob() const;
    /**
     * @hash   563175255
     * @symbol  ?getLastDelta\@DirectPlayerMovementProxy\@\@UEBA?AVVec3\@\@XZ
     */
    MCVAPI class Vec3 getLastDelta() const;
    /**
     * @hash   422187379
     * @symbol  ?getLastPos\@DirectPlayerMovementProxy\@\@UEBA?AVVec3\@\@XZ
     */
    MCVAPI class Vec3 getLastPos() const;
    /**
     * @hash   -645229023
     * @symbol  ?getLoadingState\@DirectPlayerMovementProxy\@\@UEBA?AW4LoadingState\@\@XZ
     */
    MCVAPI enum class LoadingState getLoadingState() const;
    /**
     * @hash   -1759539090
     * @symbol  ?getMoveInputHandler\@DirectPlayerMovementProxy\@\@UEAAPEAVMoveInputHandler\@\@XZ
     */
    MCVAPI class MoveInputHandler * getMoveInputHandler();
    /**
     * @hash   -895671962
     * @symbol  ?getPlayMode\@DirectPlayerMovementProxy\@\@UEBA?AW4ClientPlayMode\@\@XZ
     */
    MCVAPI enum class ClientPlayMode getPlayMode() const;
    /**
     * @hash   545854632
     * @symbol  ?getPlayerPaddleForce\@DirectPlayerMovementProxy\@\@UEBAMW4Side\@\@\@Z
     */
    MCVAPI float getPlayerPaddleForce(enum class Side) const;
    /**
     * @hash   -1902548182
     * @symbol  ?getVRMoveAdjustAngle\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getVRMoveAdjustAngle() const;
    /**
     * @hash   -1346447182
     * @symbol  ?hasMoveInput\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool hasMoveInput() const;
    /**
     * @hash   -307517190
     * @symbol  ?isAdventureSettingsAutoJump\@DirectPlayerMovementProxy\@\@UEAA_NXZ
     */
    MCVAPI bool isAdventureSettingsAutoJump();
    /**
     * @hash   -1879926506
     * @symbol  ?isArmorFlyEnabled\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isArmorFlyEnabled() const;
    /**
     * @hash   -1496639171
     * @symbol  ?isAutoJumpEnabled\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isAutoJumpEnabled() const;
    /**
     * @hash   332741182
     * @symbol  ?isAutoJumping\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isAutoJumping() const;
    /**
     * @hash   943270607
     * @symbol  ?isEmoting\@DirectPlayerMovementProxy\@\@UEAA_NXZ
     */
    MCVAPI bool isEmoting();
    /**
     * @hash   53254812
     * @symbol  ?isFlying\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isFlying() const;
    /**
     * @hash   -330279515
     * @symbol  ?isLocalPlayer\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isLocalPlayer() const;
    /**
     * @hash   1318445783
     * @symbol  ?isPaddling\@DirectPlayerMovementProxy\@\@UEBA_NW4Side\@\@\@Z
     */
    MCVAPI bool isPaddling(enum class Side) const;
    /**
     * @hash   305454788
     * @symbol  ?isServerAuthoritativeMovement\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isServerAuthoritativeMovement() const;
    /**
     * @hash   1388323784
     * @symbol  ?isSleeping\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isSleeping() const;
    /**
     * @hash   1754183270
     * @symbol  ?isSlowedByItemUse\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isSlowedByItemUse() const;
    /**
     * @hash   1069380344
     * @symbol  ?isSpectator\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isSpectator() const;
    /**
     * @hash   1864572416
     * @symbol  ?isUsingItem\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isUsingItem() const;
    /**
     * @hash   -1909974629
     * @symbol  ?registerFramewiseActionOrStop\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void registerFramewiseActionOrStop();
    /**
     * @hash   518860545
     * @symbol  ?sendClientAuthInput\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendClientAuthInput();
    /**
     * @hash   1491390836
     * @symbol  ?sendInput\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendInput();
    /**
     * @hash   -192531389
     * @symbol  ?sendPacket\@DirectPlayerMovementProxy\@\@UEAAXAEAVPlayerActionPacket\@\@\@Z
     */
    MCVAPI void sendPacket(class PlayerActionPacket &);
    /**
     * @hash   1195354474
     * @symbol  ?sendPacket\@DirectPlayerMovementProxy\@\@UEAAXAEAVPassengerJumpPacket\@\@\@Z
     */
    MCVAPI void sendPacket(class PassengerJumpPacket &);
    /**
     * @hash   1544621539
     * @symbol  ?sendPlayerInput\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendPlayerInput();
    /**
     * @hash   -1782831572
     * @symbol  ?sendPlayerMove\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendPlayerMove();
    /**
     * @hash   897604611
     * @symbol  ?sendPosition\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendPosition();
    /**
     * @hash   -983050529
     * @symbol  ?sendRequestAbilityPacket\@DirectPlayerMovementProxy\@\@UEAAXW4AbilitiesIndex\@\@_N\@Z
     */
    MCVAPI void sendRequestAbilityPacket(enum class AbilitiesIndex, bool);
    /**
     * @hash   -613270762
     * @symbol  ?setAbilityBool\@DirectPlayerMovementProxy\@\@UEAAXW4AbilitiesIndex\@\@_N\@Z
     */
    MCVAPI void setAbilityBool(enum class AbilitiesIndex, bool);
    /**
     * @hash   90673502
     * @symbol  ?setAbilityFloat\@DirectPlayerMovementProxy\@\@UEAAXW4AbilitiesIndex\@\@M\@Z
     */
    MCVAPI void setAbilityFloat(enum class AbilitiesIndex, float);
    /**
     * @hash   -592167913
     * @symbol  ?setAutoJumping\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setAutoJumping(bool);
    /**
     * @hash   -123148243
     * @symbol  ?setBob\@DirectPlayerMovementProxy\@\@UEAAXM\@Z
     */
    MCVAPI void setBob(float);
    /**
     * @hash   -1954941761
     * @symbol  ?setCurrentLocalMoveVelocity\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec2\@\@\@Z
     */
    MCVAPI void setCurrentLocalMoveVelocity(class Vec2 const &);
    /**
     * @hash   1151591621
     * @symbol  ?setEmotingStatus\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setEmotingStatus(bool);
    /**
     * @hash   -2051855425
     * @symbol  ?setHandsBusy\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setHandsBusy(bool);
    /**
     * @hash   -173243095
     * @symbol  ?setHasMoveInput\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setHasMoveInput(bool);
    /**
     * @hash   1733902187
     * @symbol  ?setJumpRidingScale\@DirectPlayerMovementProxy\@\@UEAAXM\@Z
     */
    MCVAPI void setJumpRidingScale(float);
    /**
     * @hash   2077808707
     * @symbol  ?setLastBob\@DirectPlayerMovementProxy\@\@UEAAXM\@Z
     */
    MCVAPI void setLastBob(float);
    /**
     * @hash   -94601696
     * @symbol  ?setLastDelta\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec3\@\@\@Z
     */
    MCVAPI void setLastDelta(class Vec3 const &);
    /**
     * @hash   -477947004
     * @symbol  ?setLastPos\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec3\@\@\@Z
     */
    MCVAPI void setLastPos(class Vec3 const &);
    /**
     * @hash   220084677
     * @symbol  ?setPlayerPaddleForce\@DirectPlayerMovementProxy\@\@UEAAXW4Side\@\@M\@Z
     */
    MCVAPI void setPlayerPaddleForce(enum class Side, float);
    /**
     * @hash   -1906896516
     * @symbol  ?setWasAutoJumping\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setWasAutoJumping(bool);
    /**
     * @hash   -986886457
     * @symbol  ?shouldSendPosition\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool shouldSendPosition() const;
    /**
     * @hash   -646636942
     * @symbol  ?startGliding\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void startGliding();
    /**
     * @hash   -1539536430
     * @symbol  ?stopGliding\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void stopGliding();
    /**
     * @hash   842538810
     * @symbol  ?tryAsPlayer\@DirectPlayerMovementProxy\@\@UEBAPEBUIPlayerMovementProxy\@\@XZ
     */
    MCVAPI struct IPlayerMovementProxy const * tryAsPlayer() const;
    /**
     * @hash   -1802329346
     * @symbol  ?tryAsPlayer\@DirectPlayerMovementProxy\@\@UEAAPEAUIPlayerMovementProxy\@\@XZ
     */
    MCVAPI struct IPlayerMovementProxy * tryAsPlayer();
    /**
     * @hash   -1161148536
     * @symbol  ?tryGetPlayerActionComponent\@DirectPlayerMovementProxy\@\@UEAAPEAUPlayerActionComponent\@\@XZ
     */
    MCVAPI struct PlayerActionComponent * tryGetPlayerActionComponent();
    /**
     * @hash   1538361102
     * @symbol  ?updateClientPlayerInputState\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void updateClientPlayerInputState();
    /**
     * @hash   1009106280
     * @symbol  ?updateTouch\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void updateTouch();
    /**
     * @hash   -705226945
     * @symbol  ?wasAutoJumping\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool wasAutoJumping() const;
#endif

};