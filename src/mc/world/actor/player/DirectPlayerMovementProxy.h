#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DirectPlayerMovementProxy {

public:
    // prevent constructor by default
    DirectPlayerMovementProxy& operator=(DirectPlayerMovementProxy const&) = delete;
    DirectPlayerMovementProxy(DirectPlayerMovementProxy const&)            = delete;
    DirectPlayerMovementProxy()                                            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTPLAYERMOVEMENTPROXY
    /**
     * @symbol ?_applyStateToComponents\@DirectPlayerMovementProxy\@\@MEAAXXZ
     */
    MCVAPI void _applyStateToComponents(); // NOLINT
    /**
     * @symbol ?_extractStateFromComponents\@DirectPlayerMovementProxy\@\@MEAAXXZ
     */
    MCVAPI void _extractStateFromComponents(); // NOLINT
    /**
     * @symbol ?_getPlayer\@DirectPlayerMovementProxy\@\@UEAAPEAVPlayer\@\@XZ
     */
    MCVAPI class Player* _getPlayer(); // NOLINT
    /**
     * @symbol ?_onMovePlayerPacketNormal\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec3\@\@AEBVVec2\@\@M\@Z
     */
    MCVAPI void _onMovePlayerPacketNormal(class Vec3 const&, class Vec2 const&, float); // NOLINT
    /**
     * @symbol ?_resetPos\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void _resetPos(bool); // NOLINT
    /**
     * @symbol ?_setPositionMode\@DirectPlayerMovementProxy\@\@UEAAXH\@Z
     */
    MCVAPI void _setPositionMode(int); // NOLINT
    /**
     * @symbol ?areHandsBusy\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool areHandsBusy() const; // NOLINT
    /**
     * @symbol ?checkMovementStats\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec3\@\@\@Z
     */
    MCVAPI void checkMovementStats(class Vec3 const&); // NOLINT
    /**
     * @symbol ?fireEventPersonaEmotePlayed\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void fireEventPersonaEmotePlayed(bool); // NOLINT
    /**
     * @symbol ?getAbilities\@DirectPlayerMovementProxy\@\@UEBAAEBVLayeredAbilities\@\@XZ
     */
    MCVAPI class LayeredAbilities const& getAbilities() const; // NOLINT
    /**
     * @symbol ?getAbilityBool\@DirectPlayerMovementProxy\@\@UEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCVAPI bool getAbilityBool(enum class AbilitiesIndex) const; // NOLINT
    /**
     * @symbol ?getAbilityFloat\@DirectPlayerMovementProxy\@\@UEBAMW4AbilitiesIndex\@\@\@Z
     */
    MCVAPI float getAbilityFloat(enum class AbilitiesIndex) const; // NOLINT
    /**
     * @symbol ?getBob\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getBob() const; // NOLINT
    /**
     * @symbol ?getClientInstance\@DirectPlayerMovementProxy\@\@UEAAPEAUIClientInstanceProxy\@\@XZ
     */
    MCVAPI struct IClientInstanceProxy* getClientInstance(); // NOLINT
    /**
     * @symbol ?getClientInstance\@DirectPlayerMovementProxy\@\@UEBAPEBUIClientInstanceProxy\@\@XZ
     */
    MCVAPI struct IClientInstanceProxy const* getClientInstance() const; // NOLINT
    /**
     * @symbol ?getCurrentTick\@DirectPlayerMovementProxy\@\@UEBAAEBUTick\@\@XZ
     */
    MCVAPI struct Tick const& getCurrentTick() const; // NOLINT
    /**
     * @symbol ?getGlidingTicks\@DirectPlayerMovementProxy\@\@UEBAHXZ
     */
    MCVAPI int getGlidingTicks() const; // NOLINT
    /**
     * @symbol ?getItemUseMovementModifier\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getItemUseMovementModifier() const; // NOLINT
    /**
     * @symbol ?getJumpRidingScale\@DirectPlayerMovementProxy\@\@UEAAMXZ
     */
    MCVAPI float getJumpRidingScale(); // NOLINT
    /**
     * @symbol ?getLastBob\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getLastBob() const; // NOLINT
    /**
     * @symbol ?getLastDelta\@DirectPlayerMovementProxy\@\@UEBA?AVVec3\@\@XZ
     */
    MCVAPI class Vec3 getLastDelta() const; // NOLINT
    /**
     * @symbol ?getLastPos\@DirectPlayerMovementProxy\@\@UEBA?AVVec3\@\@XZ
     */
    MCVAPI class Vec3 getLastPos() const; // NOLINT
    /**
     * @symbol ?getLoadingState\@DirectPlayerMovementProxy\@\@UEBA?AW4LoadingState\@\@XZ
     */
    MCVAPI enum class LoadingState getLoadingState() const; // NOLINT
    /**
     * @symbol ?getPlayerPaddleForce\@DirectPlayerMovementProxy\@\@UEBAMW4Side\@\@\@Z
     */
    MCVAPI float getPlayerPaddleForce(enum class Side) const; // NOLINT
    /**
     * @symbol ?getSneakHeight\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getSneakHeight() const; // NOLINT
    /**
     * @symbol ?getVRMoveAdjustAngle\@DirectPlayerMovementProxy\@\@UEBAMXZ
     */
    MCVAPI float getVRMoveAdjustAngle() const; // NOLINT
    /**
     * @symbol ?isArmorFlyEnabled\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isArmorFlyEnabled() const; // NOLINT
    /**
     * @symbol ?isAutoJumpEnabled\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isAutoJumpEnabled() const; // NOLINT
    /**
     * @symbol ?isAutoJumping\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isAutoJumping() const; // NOLINT
    /**
     * @symbol ?isEmoting\@DirectPlayerMovementProxy\@\@UEAA_NXZ
     */
    MCVAPI bool isEmoting(); // NOLINT
    /**
     * @symbol ?isFlying\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isFlying() const; // NOLINT
    /**
     * @symbol ?isLocalPlayer\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isLocalPlayer() const; // NOLINT
    /**
     * @symbol ?isPaddling\@DirectPlayerMovementProxy\@\@UEBA_NW4Side\@\@\@Z
     */
    MCVAPI bool isPaddling(enum class Side) const; // NOLINT
    /**
     * @symbol ?isServerAuthoritativeMovement\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isServerAuthoritativeMovement() const; // NOLINT
    /**
     * @symbol ?isSleeping\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isSleeping() const; // NOLINT
    /**
     * @symbol ?isSlowedByItemUse\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isSlowedByItemUse() const; // NOLINT
    /**
     * @symbol ?isSpectator\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isSpectator() const; // NOLINT
    /**
     * @symbol ?isUsingItem\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool isUsingItem() const; // NOLINT
    /**
     * @symbol ?registerFramewiseActionOrStop\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void registerFramewiseActionOrStop(); // NOLINT
    /**
     * @symbol ?sendClientAuthInput\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendClientAuthInput(); // NOLINT
    /**
     * @symbol ?sendInput\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendInput(); // NOLINT
    /**
     * @symbol ?sendPacket\@DirectPlayerMovementProxy\@\@UEAAXAEAVPassengerJumpPacket\@\@\@Z
     */
    MCVAPI void sendPacket(class PassengerJumpPacket&); // NOLINT
    /**
     * @symbol ?sendPacket\@DirectPlayerMovementProxy\@\@UEAAXAEAVPlayerActionPacket\@\@\@Z
     */
    MCVAPI void sendPacket(class PlayerActionPacket&); // NOLINT
    /**
     * @symbol ?sendPlayerInput\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendPlayerInput(); // NOLINT
    /**
     * @symbol ?sendPlayerMove\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendPlayerMove(); // NOLINT
    /**
     * @symbol ?sendPosition\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void sendPosition(); // NOLINT
    /**
     * @symbol ?sendRequestAbilityPacket\@DirectPlayerMovementProxy\@\@UEAAXW4AbilitiesIndex\@\@_N\@Z
     */
    MCVAPI void sendRequestAbilityPacket(enum class AbilitiesIndex, bool); // NOLINT
    /**
     * @symbol ?setAbilityBool\@DirectPlayerMovementProxy\@\@UEAAXW4AbilitiesIndex\@\@_N\@Z
     */
    MCVAPI void setAbilityBool(enum class AbilitiesIndex, bool); // NOLINT
    /**
     * @symbol ?setAbilityFloat\@DirectPlayerMovementProxy\@\@UEAAXW4AbilitiesIndex\@\@M\@Z
     */
    MCVAPI void setAbilityFloat(enum class AbilitiesIndex, float); // NOLINT
    /**
     * @symbol ?setAutoJumping\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setAutoJumping(bool); // NOLINT
    /**
     * @symbol ?setBob\@DirectPlayerMovementProxy\@\@UEAAXM\@Z
     */
    MCVAPI void setBob(float); // NOLINT
    /**
     * @symbol ?setCurrentLocalMoveVelocity\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec2\@\@\@Z
     */
    MCVAPI void setCurrentLocalMoveVelocity(class Vec2 const&); // NOLINT
    /**
     * @symbol ?setEmotingStatus\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setEmotingStatus(bool); // NOLINT
    /**
     * @symbol ?setHandsBusy\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setHandsBusy(bool); // NOLINT
    /**
     * @symbol ?setJumpRidingScale\@DirectPlayerMovementProxy\@\@UEAAXM\@Z
     */
    MCVAPI void setJumpRidingScale(float); // NOLINT
    /**
     * @symbol ?setLastBob\@DirectPlayerMovementProxy\@\@UEAAXM\@Z
     */
    MCVAPI void setLastBob(float); // NOLINT
    /**
     * @symbol ?setLastDelta\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec3\@\@\@Z
     */
    MCVAPI void setLastDelta(class Vec3 const&); // NOLINT
    /**
     * @symbol ?setLastPos\@DirectPlayerMovementProxy\@\@UEAAXAEBVVec3\@\@\@Z
     */
    MCVAPI void setLastPos(class Vec3 const&); // NOLINT
    /**
     * @symbol ?setPlayerPaddleForce\@DirectPlayerMovementProxy\@\@UEAAXW4Side\@\@M\@Z
     */
    MCVAPI void setPlayerPaddleForce(enum class Side, float); // NOLINT
    /**
     * @symbol ?setWasAutoJumping\@DirectPlayerMovementProxy\@\@UEAAX_N\@Z
     */
    MCVAPI void setWasAutoJumping(bool); // NOLINT
    /**
     * @symbol ?shouldSendPosition\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool shouldSendPosition() const; // NOLINT
    /**
     * @symbol ?startGliding\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void startGliding(); // NOLINT
    /**
     * @symbol ?stopGliding\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void stopGliding(); // NOLINT
    /**
     * @symbol ?tryAsPlayer\@DirectPlayerMovementProxy\@\@UEAAPEAUIPlayerMovementProxy\@\@XZ
     */
    MCVAPI struct IPlayerMovementProxy* tryAsPlayer(); // NOLINT
    /**
     * @symbol ?tryAsPlayer\@DirectPlayerMovementProxy\@\@UEBAPEBUIPlayerMovementProxy\@\@XZ
     */
    MCVAPI struct IPlayerMovementProxy const* tryAsPlayer() const; // NOLINT
    /**
     * @symbol ?tryGetPlayerActionComponent\@DirectPlayerMovementProxy\@\@UEAAPEAUPlayerActionComponent\@\@XZ
     */
    MCVAPI struct PlayerActionComponent* tryGetPlayerActionComponent(); // NOLINT
    /**
     * @symbol ?updateClientPlayerInputState\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void updateClientPlayerInputState(); // NOLINT
    /**
     * @symbol ?updateTouch\@DirectPlayerMovementProxy\@\@UEAAXXZ
     */
    MCVAPI void updateTouch(); // NOLINT
    /**
     * @symbol ?wasAutoJumping\@DirectPlayerMovementProxy\@\@UEBA_NXZ
     */
    MCVAPI bool wasAutoJumping() const; // NOLINT
#endif
};
