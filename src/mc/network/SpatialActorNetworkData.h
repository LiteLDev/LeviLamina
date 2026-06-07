#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRuntimeID;
class MoveActorAbsoluteData;
class MoveActorDeltaData;
class Player;
class Vec2;
class Vec3;
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
        MCNAPI static int& DEFAULT_DROP_PACKET_CHANCE();

        MCNAPI static int& DEFAULT_SEND_EVERY_N_PACKETS();
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
#ifdef LL_PLAT_S
        MCNAPI float getSavingsPercentage() const;
#endif
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
    ::ll::UntypedStorage<4, 4>  mUnkec90d2;
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
    MCNAPI explicit SpatialActorNetworkData(::Actor& entity);

    MCNAPI uint64 _getOptimizationScore(::Player& player) const;

    MCNAPI bool _shouldUpdateBasedOptimizationOnScore(::Player& player) const;

#ifdef LL_PLAT_C
    MCNAPI bool didTeleportEntity(::MoveActorAbsoluteData const& moveData);
#endif

    MCNAPI void enableAutoSend(bool enable);

    MCNAPI ::Vec3 getLastSentPositionForAddingEntity();

    MCNAPI ::Vec2 getLastSentRotationForAddingEntity();

    MCNAPI float getLastSentYBodyRotationForAddingEntity();

    MCNAPI float getLastSentYHeadRotationForAddingEntity();

#ifdef LL_PLAT_C
    MCNAPI void handleServerData(
        ::MoveActorAbsoluteData const&                 moveData,
        ::std::chrono::steady_clock::time_point const& receiveTimepoint,
        bool                                           isPredictableActor
    );

    MCNAPI void handleServerData(
        ::MoveActorDeltaData const&                    moveData,
        ::std::chrono::steady_clock::time_point const& receiveTimepoint,
        bool                                           isPredictableActor
    );
#endif

    MCNAPI bool isAutoSendEnabled() const;

    MCNAPI bool isOptimizationsEnabled() const;

    MCNAPI void sendUpdate(bool forceMove, bool forceMoveLocalEntity, bool forceAbsoluteMovement, bool forceCompletion);

#ifdef LL_PLAT_C
    MCNAPI void setLastReceivedMoveDataForAddedEntity(
        ::ActorRuntimeID runtimeId,
        ::Vec3           position,
        ::Vec2           rotation,
        float            yHeadRotation
    );
#endif

    MCNAPI bool shouldSendMotionPredictionHintsPacket() const;

    MCNAPI bool shouldSendUpdate(bool forceMove, bool forceMoveLocalEntity) const;

    MCNAPI void teleportEntity(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);

    MCNAPI ~SpatialActorNetworkData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::SpatialActorNetworkData::DebugSpatialPacketModifiers& getDebugSpatialPacketModifiers();
#endif

    MCNAPI static bool isPredictedMovementComponentEnabled();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SpatialActorNetworkData::DebugSendRateModifiers& mDebugSendRateModifiers();

    MCNAPI static ::SpatialActorNetworkData::DebugSpatialPacketModifiers& mDebugSpatialPacketModifiers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor& entity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
