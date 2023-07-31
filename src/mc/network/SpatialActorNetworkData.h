#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpatialActorNetworkData {
public:
    // SpatialActorNetworkData inner types declare
    // clang-format off
    struct DebugSendRateModifiers;
    struct DebugSpatialPacketModifiers;
    // clang-format on

    // SpatialActorNetworkData inner types define
    struct DebugSendRateModifiers {

    public:
        // prevent constructor by default
        DebugSendRateModifiers& operator=(DebugSendRateModifiers const&) = delete;
        DebugSendRateModifiers(DebugSendRateModifiers const&)            = delete;
        DebugSendRateModifiers()                                         = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ?DEFAULT_DROP_PACKET_CHANCE\@DebugSendRateModifiers\@SpatialActorNetworkData\@\@2HA
         */
        MCAPI static int DEFAULT_DROP_PACKET_CHANCE;
        /**
         * @symbol ?DEFAULT_SEND_EVERY_N_PACKETS\@DebugSendRateModifiers\@SpatialActorNetworkData\@\@2HA
         */
        MCAPI static int DEFAULT_SEND_EVERY_N_PACKETS;
        /**
         * @symbol ?MAX_DROP_PACKET_CHANCE\@DebugSendRateModifiers\@SpatialActorNetworkData\@\@2HA
         */
        MCAPI static int MAX_DROP_PACKET_CHANCE;
        /**
         * @symbol ?MAX_SEND_EVERY_N_PACKETS\@DebugSendRateModifiers\@SpatialActorNetworkData\@\@2HA
         */
        MCAPI static int MAX_SEND_EVERY_N_PACKETS;
        /**
         * @symbol ?MIN_DROP_PACKET_CHANCE\@DebugSendRateModifiers\@SpatialActorNetworkData\@\@2HA
         */
        MCAPI static int MIN_DROP_PACKET_CHANCE;
        /**
         * @symbol ?MIN_SEND_EVERY_N_PACKETS\@DebugSendRateModifiers\@SpatialActorNetworkData\@\@2HA
         */
        MCAPI static int MIN_SEND_EVERY_N_PACKETS;
        // NOLINTEND
    };

    struct DebugSpatialPacketModifiers {

    public:
        // prevent constructor by default
        DebugSpatialPacketModifiers& operator=(DebugSpatialPacketModifiers const&) = delete;
        DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&)            = delete;
        DebugSpatialPacketModifiers()                                              = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ?getSavingsPercentage\@DebugSpatialPacketModifiers\@SpatialActorNetworkData\@\@QEBAMXZ
         */
        MCAPI float getSavingsPercentage() const;
        // NOLINTEND
    };

public:
    // prevent constructor by default
    SpatialActorNetworkData& operator=(SpatialActorNetworkData const&) = delete;
    SpatialActorNetworkData(SpatialActorNetworkData const&)            = delete;
    SpatialActorNetworkData()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SpatialActorNetworkData\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI SpatialActorNetworkData(class Actor&);
    /**
     * @symbol ?enableAutoSend\@SpatialActorNetworkData\@\@QEAAX_N\@Z
     */
    MCAPI void enableAutoSend(bool);
    /**
     * @symbol ?handleClientData\@SpatialActorNetworkData\@\@QEAAXAEBVMoveActorAbsoluteData\@\@\@Z
     */
    MCAPI void handleClientData(class MoveActorAbsoluteData const&);
    /**
     * @symbol ?isAutoSendEnabled\@SpatialActorNetworkData\@\@QEBA_NXZ
     */
    MCAPI bool isAutoSendEnabled() const;
    /**
     * @symbol ?sendUpdate\@SpatialActorNetworkData\@\@QEAAX_N00\@Z
     */
    MCAPI void sendUpdate(bool, bool, bool);
    /**
     * @symbol ?shouldSendMotionPredictionHintsPacket\@SpatialActorNetworkData\@\@QEBA_NXZ
     */
    MCAPI bool shouldSendMotionPredictionHintsPacket() const;
    /**
     * @symbol ?shouldSendUpdate\@SpatialActorNetworkData\@\@QEBA_N_N0\@Z
     */
    MCAPI bool shouldSendUpdate(bool, bool) const;
    /**
     * @symbol ?teleportEntity\@SpatialActorNetworkData\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@M\@Z
     */
    MCAPI void teleportEntity(class Vec3 const&, class Vec2 const&, float);
    /**
     * @symbol ?getDebugSpatialPacketModifiers\@SpatialActorNetworkData\@\@SAAEAUDebugSpatialPacketModifiers\@1\@XZ
     */
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers& getDebugSpatialPacketModifiers();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_findRelevantPlayersToSendUpdate\@SpatialActorNetworkData\@\@AEAA?AV?$vector\@UNetworkIdentifierWithSubId\@\@V?$allocator\@UNetworkIdentifierWithSubId\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct NetworkIdentifierWithSubId> _findRelevantPlayersToSendUpdate();
    /**
     * @symbol ?_getOptimizationScore\@SpatialActorNetworkData\@\@AEBA_KAEAVPlayer\@\@\@Z
     */
    MCAPI uint64_t _getOptimizationScore(class Player&) const;
    /**
     * @symbol ?_initializeLastSentValues\@SpatialActorNetworkData\@\@AEAAXXZ
     */
    MCAPI void _initializeLastSentValues();
    /**
     * @symbol ?_shouldUpdateBasedOptimizationOnScore\@SpatialActorNetworkData\@\@AEBA_NAEAVPlayer\@\@\@Z
     */
    MCAPI bool _shouldUpdateBasedOptimizationOnScore(class Player&) const;
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?mDebugSendRateModifiers\@SpatialActorNetworkData\@\@0UDebugSendRateModifiers\@1\@A
     */
    MCAPI static struct SpatialActorNetworkData::DebugSendRateModifiers mDebugSendRateModifiers;
    /**
     * @symbol ?mDebugSpatialPacketModifiers\@SpatialActorNetworkData\@\@0UDebugSpatialPacketModifiers\@1\@A
     */
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers mDebugSpatialPacketModifiers;
    // NOLINTEND
};
