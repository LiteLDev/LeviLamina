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
        MCAPI static int DEFAULT_DROP_PACKET_CHANCE;

        MCAPI static int DEFAULT_SEND_EVERY_N_PACKETS;

        MCAPI static int MAX_DROP_PACKET_CHANCE;

        MCAPI static int MAX_SEND_EVERY_N_PACKETS;

        MCAPI static int MIN_DROP_PACKET_CHANCE;

        MCAPI static int MIN_SEND_EVERY_N_PACKETS;

        // NOLINTEND
    };

    struct DebugSpatialPacketModifiers {
    public:
        // prevent constructor by default
        DebugSpatialPacketModifiers& operator=(DebugSpatialPacketModifiers const&);
        DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&);
        DebugSpatialPacketModifiers();

    public:
        // NOLINTBEGIN
        MCAPI float getSavingsPercentage() const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    SpatialActorNetworkData& operator=(SpatialActorNetworkData const&);
    SpatialActorNetworkData(SpatialActorNetworkData const&);
    SpatialActorNetworkData();

public:
    // NOLINTBEGIN
    MCAPI explicit SpatialActorNetworkData(class Actor& entity);

    MCAPI void enableAutoSend(bool enable);

    MCAPI void handleClientData(class MoveActorAbsoluteData const& moveData);

    MCAPI bool isAutoSendEnabled() const;

    MCAPI void sendUpdate(bool forceTeleport, bool forceMoveLocalEntity, bool forceAbsoluteMovement);

    MCAPI bool shouldSendMotionPredictionHintsPacket() const;

    MCAPI bool shouldSendUpdate(bool forceTeleport, bool forceMoveLocalEntity) const;

    MCAPI void teleportEntity(class Vec3 const& pos, class Vec2 const& rot, float yHeadRot);

    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers& getDebugSpatialPacketModifiers();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::vector<struct NetworkIdentifierWithSubId> _findRelevantPlayersToSendUpdate();

    MCAPI uint64 _getOptimizationScore(class Player& player) const;

    MCAPI void _initializeLastSentValues();

    MCAPI bool _shouldUpdateBasedOptimizationOnScore(class Player& player) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static struct SpatialActorNetworkData::DebugSendRateModifiers mDebugSendRateModifiers;

    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers mDebugSpatialPacketModifiers;

    // NOLINTEND
};
