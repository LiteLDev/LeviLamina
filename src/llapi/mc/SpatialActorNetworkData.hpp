/**
 * @file  SpatialActorNetworkData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpatialActorNetworkData.
 *
 */
class SpatialActorNetworkData {

#define AFTER_EXTRA
// Add Member There
public:
struct DebugSpatialPacketModifiers {
    DebugSpatialPacketModifiers() = delete;
    DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&) = delete;
    DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&&) = delete;
};
struct DebugSendRateModifiers {
    DebugSendRateModifiers() = delete;
    DebugSendRateModifiers(DebugSendRateModifiers const&) = delete;
    DebugSendRateModifiers(DebugSendRateModifiers const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPATIALACTORNETWORKDATA
public:
    class SpatialActorNetworkData& operator=(class SpatialActorNetworkData const &) = delete;
    SpatialActorNetworkData(class SpatialActorNetworkData const &) = delete;
    SpatialActorNetworkData() = delete;
#endif

public:
    /**
     * @symbol  ??0SpatialActorNetworkData\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI SpatialActorNetworkData(class Actor &);
    /**
     * @symbol  ?enableAutoSend\@SpatialActorNetworkData\@\@QEAAX_N\@Z
     */
    MCAPI void enableAutoSend(bool);
    /**
     * @symbol  ?getLastSentPositionForAddingEntity\@SpatialActorNetworkData\@\@QEAA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getLastSentPositionForAddingEntity();
    /**
     * @symbol  ?getLastSentRotationForAddingEntity\@SpatialActorNetworkData\@\@QEAA?AVVec2\@\@XZ
     */
    MCAPI class Vec2 getLastSentRotationForAddingEntity();
    /**
     * @symbol  ?getLastSentYBodyRotationForAddingEntity\@SpatialActorNetworkData\@\@QEAAMXZ
     */
    MCAPI float getLastSentYBodyRotationForAddingEntity();
    /**
     * @symbol  ?getLastSentYHeadRotationForAddingEntity\@SpatialActorNetworkData\@\@QEAAMXZ
     */
    MCAPI float getLastSentYHeadRotationForAddingEntity();
    /**
     * @symbol  ?handleClientData\@SpatialActorNetworkData\@\@QEAAXAEBVMoveActorAbsoluteData\@\@\@Z
     */
    MCAPI void handleClientData(class MoveActorAbsoluteData const &);
    /**
     * @symbol  ?isAutoSendEnabled\@SpatialActorNetworkData\@\@QEBA_NXZ
     */
    MCAPI bool isAutoSendEnabled() const;
    /**
     * @symbol  ?sendUpdate\@SpatialActorNetworkData\@\@QEAAX_N00\@Z
     */
    MCAPI void sendUpdate(bool, bool, bool);
    /**
     * @symbol  ?shouldSendMotionPredictionHintsPacket\@SpatialActorNetworkData\@\@QEBA_NXZ
     */
    MCAPI bool shouldSendMotionPredictionHintsPacket() const;
    /**
     * @symbol  ?shouldSendUpdate\@SpatialActorNetworkData\@\@QEBA_N_N0\@Z
     */
    MCAPI bool shouldSendUpdate(bool, bool) const;
    /**
     * @symbol  ?teleportEntity\@SpatialActorNetworkData\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@M\@Z
     */
    MCAPI void teleportEntity(class Vec3 const &, class Vec2 const &, float);
    /**
     * @symbol  ?getDebugSpatialPacketModifiers\@SpatialActorNetworkData\@\@SAAEAUDebugSpatialPacketModifiers\@1\@XZ
     */
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers & getDebugSpatialPacketModifiers();

//private:
    /**
     * @symbol  ?_findRelevantPlayersToSendUpdate\@SpatialActorNetworkData\@\@AEAA?AV?$vector\@UNetworkIdentifierWithSubId\@\@V?$allocator\@UNetworkIdentifierWithSubId\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct NetworkIdentifierWithSubId> _findRelevantPlayersToSendUpdate();
    /**
     * @symbol  ?_getOptimizationScore\@SpatialActorNetworkData\@\@AEBA_KAEAVPlayer\@\@\@Z
     */
    MCAPI unsigned __int64 _getOptimizationScore(class Player &) const;
    /**
     * @symbol  ?_initializeLastSentValues\@SpatialActorNetworkData\@\@AEAAXXZ
     */
    MCAPI void _initializeLastSentValues();
    /**
     * @symbol  ?_shouldUpdateBasedOptimizationOnScore\@SpatialActorNetworkData\@\@AEBA_NAEAVPlayer\@\@\@Z
     */
    MCAPI bool _shouldUpdateBasedOptimizationOnScore(class Player &) const;

private:
    /**
     * @symbol  ?mDebugSendRateModifiers\@SpatialActorNetworkData\@\@0UDebugSendRateModifiers\@1\@A
     */
    MCAPI static struct SpatialActorNetworkData::DebugSendRateModifiers mDebugSendRateModifiers;
    /**
     * @symbol  ?mDebugSpatialPacketModifiers\@SpatialActorNetworkData\@\@0UDebugSpatialPacketModifiers\@1\@A
     */
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers mDebugSpatialPacketModifiers;

};