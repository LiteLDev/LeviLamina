#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ForceSendSpatialDataValue.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/packet/MoveActorAbsoluteData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRuntimeID;
class Player;
class Vec2;
class Vec3;
struct Tick;
// clang-format on

class SpatialActorNetworkData {
public:
    // SpatialActorNetworkData inner types declare
    // clang-format off
    struct DebugSendRateModifiers;
    struct DebugSpatialPacketModifiers;
    struct PlayerUpdateTarget;
    // clang-format on

    // SpatialActorNetworkData inner types define
    struct DebugSendRateModifiers {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mSendEveryNPackets;
        ::ll::TypedStorage<4, 4, int>  mDropPacketChance;
        ::ll::TypedStorage<1, 1, bool> mDrawDebugLines;
        // NOLINTEND
    };

    struct DebugSpatialPacketModifiers {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> mCurrentSentSpatialPackets;
        ::ll::TypedStorage<8, 8, uint64> mExpectedSentSpatialPackets;
        ::ll::TypedStorage<8, 8, uint64> mCurrentSentMotionPredictionHintsPackets;
        ::ll::TypedStorage<1, 1, bool>   mUseValueOverrides;
        ::ll::TypedStorage<1, 1, bool>   mUseScoreOverride;
        ::ll::TypedStorage<4, 4, float>  mOverridemMaxOptimizedDistance;
        ::ll::TypedStorage<8, 8, uint64> mOverridemMaxDroppedTicks;
        ::ll::TypedStorage<8, 8, uint64> mOverrideScoreValue;
        ::ll::TypedStorage<1, 1, bool>   mOverridemUseMotionPredictionHints;
        // NOLINTEND
    };

    struct PlayerUpdateTarget {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 184, ::NetworkIdentifierWithSubId> mNetworkIdentifierWithSubId;
        ::ll::TypedStorage<8, 8, uint64>                         mTicks;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>                                       mEntity;
    ::ll::TypedStorage<1, 1, bool>                                           mHasInitializedLastSent;
    ::ll::TypedStorage<1, 1, bool>                                           mAutoSend;
    ::ll::TypedStorage<8, 40, ::MoveActorAbsoluteData>                       mLastSentMoveData;
    ::ll::TypedStorage<8, 40, ::MoveActorAbsoluteData>                       mLastReceivedMoveData;
    ::ll::TypedStorage<4, 4, ::ForceSendSpatialDataValue>                    mLastForceSendSpatialDataValue;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::Tick>> mLastSpatialUpdateTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    SpatialActorNetworkData& operator=(SpatialActorNetworkData const&);
    SpatialActorNetworkData(SpatialActorNetworkData const&);
    SpatialActorNetworkData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<uint64> _getOptimizationUpdateInterval(::Player& player) const;

#ifdef LL_PLAT_C
    MCAPI void handleServerData(
        ::MoveActorAbsoluteData const&                 moveData,
        ::std::chrono::steady_clock::time_point const& receiveTimepoint,
        bool                                           isPredictableProjectile
    );
#endif

    MCAPI void sendUpdate(bool forceMove, bool forceMoveLocalEntity, bool forceAbsoluteMovement, bool forceCompletion);

#ifdef LL_PLAT_C
    MCAPI void setLastReceivedMoveDataForAddedEntity(
        ::ActorRuntimeID runtimeId,
        ::Vec3           position,
        ::Vec2           rotation,
        float            yHeadRotation
    );
#endif

    MCAPI void teleportEntity(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SpatialActorNetworkData::DebugSpatialPacketModifiers& mDebugSpatialPacketModifiers();
    // NOLINTEND
};
