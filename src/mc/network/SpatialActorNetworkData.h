#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class MoveActorAbsoluteData;
class Player;
class Vec2;
class Vec3;
struct NetworkIdentifierWithSubId;
// clang-format on

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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk3652fb;
        ::ll::UntypedStorage<4, 4> mUnkd1ec5e;
        ::ll::UntypedStorage<1, 1> mUnk2a008d;
        // NOLINTEND

    public:
        // prevent constructor by default
        DebugSendRateModifiers& operator=(DebugSendRateModifiers const&);
        DebugSendRateModifiers(DebugSendRateModifiers const&);
        DebugSendRateModifiers();

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static int& DEFAULT_DROP_PACKET_CHANCE();

        MCAPI static int& DEFAULT_SEND_EVERY_N_PACKETS();

        MCAPI static int& MAX_DROP_PACKET_CHANCE();

        MCAPI static int& MAX_SEND_EVERY_N_PACKETS();

        MCAPI static int& MIN_DROP_PACKET_CHANCE();

        MCAPI static int& MIN_SEND_EVERY_N_PACKETS();
        // NOLINTEND
    };

    struct DebugSpatialPacketModifiers {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkcde04f;
        ::ll::UntypedStorage<8, 8> mUnk70f911;
        ::ll::UntypedStorage<8, 8> mUnka07cd9;
        ::ll::UntypedStorage<1, 1> mUnke12a67;
        ::ll::UntypedStorage<1, 1> mUnk2c6ac9;
        ::ll::UntypedStorage<4, 4> mUnke0a99e;
        ::ll::UntypedStorage<8, 8> mUnk92dc7e;
        ::ll::UntypedStorage<8, 8> mUnk70a9cd;
        ::ll::UntypedStorage<1, 1> mUnk529cf2;
        // NOLINTEND

    public:
        // prevent constructor by default
        DebugSpatialPacketModifiers& operator=(DebugSpatialPacketModifiers const&);
        DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&);
        DebugSpatialPacketModifiers();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI float getSavingsPercentage() const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3d576d;
    ::ll::UntypedStorage<1, 1>  mUnk61c3eb;
    ::ll::UntypedStorage<1, 1>  mUnkf6f1aa;
    ::ll::UntypedStorage<8, 32> mUnk662955;
    ::ll::UntypedStorage<8, 32> mUnk4f87d7;
    ::ll::UntypedStorage<8, 64> mUnk5ce137;
    // NOLINTEND

public:
    // prevent constructor by default
    SpatialActorNetworkData& operator=(SpatialActorNetworkData const&);
    SpatialActorNetworkData(SpatialActorNetworkData const&);
    SpatialActorNetworkData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SpatialActorNetworkData(::Actor& entity);

    MCAPI ::std::vector<::NetworkIdentifierWithSubId> _findRelevantPlayersToSendUpdate();

    MCAPI uint64 _getOptimizationScore(::Player& player) const;

    MCAPI bool _shouldUpdateBasedOptimizationOnScore(::Player& player) const;

    MCAPI void enableAutoSend(bool enable);

    MCAPI void handleClientData(::MoveActorAbsoluteData const& moveData);

    MCAPI bool isAutoSendEnabled() const;

    MCAPI void sendUpdate(bool forceTeleport, bool forceMoveLocalEntity, bool forceAbsoluteMovement);

    MCAPI bool shouldSendMotionPredictionHintsPacket() const;

    MCAPI bool shouldSendUpdate(bool forceTeleport, bool forceMoveLocalEntity) const;

    MCAPI void teleportEntity(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SpatialActorNetworkData::DebugSpatialPacketModifiers& getDebugSpatialPacketModifiers();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SpatialActorNetworkData::DebugSendRateModifiers& mDebugSendRateModifiers();

    MCAPI static ::SpatialActorNetworkData::DebugSpatialPacketModifiers& mDebugSpatialPacketModifiers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor& entity);
    // NOLINTEND
};
