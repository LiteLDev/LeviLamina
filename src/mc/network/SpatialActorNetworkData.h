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
        DebugSendRateModifiers& operator=(DebugSendRateModifiers const&);
        DebugSendRateModifiers(DebugSendRateModifiers const&);
        DebugSendRateModifiers();

    public:
        // NOLINTBEGIN
        // symbol: ?DEFAULT_DROP_PACKET_CHANCE@DebugSendRateModifiers@SpatialActorNetworkData@@2HA
        MCAPI static int DEFAULT_DROP_PACKET_CHANCE;

        // symbol: ?DEFAULT_SEND_EVERY_N_PACKETS@DebugSendRateModifiers@SpatialActorNetworkData@@2HA
        MCAPI static int DEFAULT_SEND_EVERY_N_PACKETS;

        // symbol: ?MAX_DROP_PACKET_CHANCE@DebugSendRateModifiers@SpatialActorNetworkData@@2HA
        MCAPI static int MAX_DROP_PACKET_CHANCE;

        // symbol: ?MAX_SEND_EVERY_N_PACKETS@DebugSendRateModifiers@SpatialActorNetworkData@@2HA
        MCAPI static int MAX_SEND_EVERY_N_PACKETS;

        // symbol: ?MIN_DROP_PACKET_CHANCE@DebugSendRateModifiers@SpatialActorNetworkData@@2HA
        MCAPI static int MIN_DROP_PACKET_CHANCE;

        // symbol: ?MIN_SEND_EVERY_N_PACKETS@DebugSendRateModifiers@SpatialActorNetworkData@@2HA
        MCAPI static int MIN_SEND_EVERY_N_PACKETS;

        // NOLINTEND
    };

    struct DebugSpatialPacketModifiers {
    public:
        // prevent constructor by default
        DebugSpatialPacketModifiers& operator=(DebugSpatialPacketModifiers const&);
        DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&);
        DebugSpatialPacketModifiers();
    };

public:
    // prevent constructor by default
    SpatialActorNetworkData& operator=(SpatialActorNetworkData const&);
    SpatialActorNetworkData(SpatialActorNetworkData const&);
    SpatialActorNetworkData();

public:
    // NOLINTBEGIN
    // symbol: ??0SpatialActorNetworkData@@QEAA@AEAVActor@@@Z
    MCAPI explicit SpatialActorNetworkData(class Actor& entity);

    // symbol: ?enableAutoSend@SpatialActorNetworkData@@QEAAX_N@Z
    MCAPI void enableAutoSend(bool enable);

    // symbol: ?getLastSentPositionForAddingEntity@SpatialActorNetworkData@@QEAA?AVVec3@@XZ
    MCAPI class Vec3 getLastSentPositionForAddingEntity();

    // symbol: ?getLastSentRotationForAddingEntity@SpatialActorNetworkData@@QEAA?AVVec2@@XZ
    MCAPI class Vec2 getLastSentRotationForAddingEntity();

    // symbol: ?getLastSentYBodyRotationForAddingEntity@SpatialActorNetworkData@@QEAAMXZ
    MCAPI float getLastSentYBodyRotationForAddingEntity();

    // symbol: ?getLastSentYHeadRotationForAddingEntity@SpatialActorNetworkData@@QEAAMXZ
    MCAPI float getLastSentYHeadRotationForAddingEntity();

    // symbol: ?handleClientData@SpatialActorNetworkData@@QEAAXAEBVMoveActorAbsoluteData@@@Z
    MCAPI void handleClientData(class MoveActorAbsoluteData const& moveData);

    // symbol: ?isAutoSendEnabled@SpatialActorNetworkData@@QEBA_NXZ
    MCAPI bool isAutoSendEnabled() const;

    // symbol: ?sendUpdate@SpatialActorNetworkData@@QEAAX_N00@Z
    MCAPI void sendUpdate(bool forceTeleport, bool forceMoveLocalEntity, bool forceAbsoluteMovement);

    // symbol: ?shouldSendMotionPredictionHintsPacket@SpatialActorNetworkData@@QEBA_NXZ
    MCAPI bool shouldSendMotionPredictionHintsPacket() const;

    // symbol: ?shouldSendUpdate@SpatialActorNetworkData@@QEBA_N_N0@Z
    MCAPI bool shouldSendUpdate(bool forceTeleport, bool forceMoveLocalEntity) const;

    // symbol: ?teleportEntity@SpatialActorNetworkData@@QEAAXAEBVVec3@@AEBVVec2@@M@Z
    MCAPI void teleportEntity(class Vec3 const& pos, class Vec2 const& rot, float yHeadRot);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_findRelevantPlayersToSendUpdate@SpatialActorNetworkData@@AEAA?AV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@XZ
    MCAPI std::vector<struct NetworkIdentifierWithSubId> _findRelevantPlayersToSendUpdate();

    // symbol: ?_getOptimizationScore@SpatialActorNetworkData@@AEBA_KAEAVPlayer@@@Z
    MCAPI uint64 _getOptimizationScore(class Player& player) const;

    // symbol: ?_initializeLastSentValues@SpatialActorNetworkData@@AEAAXXZ
    MCAPI void _initializeLastSentValues();

    // symbol: ?_shouldUpdateBasedOptimizationOnScore@SpatialActorNetworkData@@AEBA_NAEAVPlayer@@@Z
    MCAPI bool _shouldUpdateBasedOptimizationOnScore(class Player& player) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mDebugSendRateModifiers@SpatialActorNetworkData@@0UDebugSendRateModifiers@1@A
    MCAPI static struct SpatialActorNetworkData::DebugSendRateModifiers mDebugSendRateModifiers;

    // symbol: ?mDebugSpatialPacketModifiers@SpatialActorNetworkData@@0UDebugSpatialPacketModifiers@1@A
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers mDebugSpatialPacketModifiers;

    // NOLINTEND
};
