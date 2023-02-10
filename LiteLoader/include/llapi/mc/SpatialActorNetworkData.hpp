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
     * @hash   -1111262788
     * @symbol  ??0SpatialActorNetworkData\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI SpatialActorNetworkData(class Actor &);
    /**
     * @hash   -988537926
     * @symbol  ?enableAutoSend\@SpatialActorNetworkData\@\@QEAAX_N\@Z
     */
    MCAPI void enableAutoSend(bool);
    /**
     * @hash   -1940038318
     * @symbol  ?getLastSentPositionForAddingEntity\@SpatialActorNetworkData\@\@QEAA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getLastSentPositionForAddingEntity();
    /**
     * @hash   648623850
     * @symbol  ?getLastSentRotationForAddingEntity\@SpatialActorNetworkData\@\@QEAA?AVVec2\@\@XZ
     */
    MCAPI class Vec2 getLastSentRotationForAddingEntity();
    /**
     * @hash   -797510888
     * @symbol  ?getLastSentYBodyRotationForAddingEntity\@SpatialActorNetworkData\@\@QEAAMXZ
     */
    MCAPI float getLastSentYBodyRotationForAddingEntity();
    /**
     * @hash   1797236156
     * @symbol  ?getLastSentYHeadRotationForAddingEntity\@SpatialActorNetworkData\@\@QEAAMXZ
     */
    MCAPI float getLastSentYHeadRotationForAddingEntity();
    /**
     * @hash   -1482170514
     * @symbol  ?handleClientData\@SpatialActorNetworkData\@\@QEAAXAEBVMoveActorAbsoluteData\@\@\@Z
     */
    MCAPI void handleClientData(class MoveActorAbsoluteData const &);
    /**
     * @hash   279827152
     * @symbol  ?isAutoSendEnabled\@SpatialActorNetworkData\@\@QEBA_NXZ
     */
    MCAPI bool isAutoSendEnabled() const;
    /**
     * @hash   -1203159238
     * @symbol  ?sendUpdate\@SpatialActorNetworkData\@\@QEAAX_N00\@Z
     */
    MCAPI void sendUpdate(bool, bool, bool);
    /**
     * @hash   -1644066448
     * @symbol  ?shouldSendMotionPredictionHintsPacket\@SpatialActorNetworkData\@\@QEBA_NXZ
     */
    MCAPI bool shouldSendMotionPredictionHintsPacket() const;
    /**
     * @hash   -508819919
     * @symbol  ?shouldSendUpdate\@SpatialActorNetworkData\@\@QEBA_N_N0\@Z
     */
    MCAPI bool shouldSendUpdate(bool, bool) const;
    /**
     * @hash   -1027432378
     * @symbol  ?teleportEntity\@SpatialActorNetworkData\@\@QEAAXAEBVVec3\@\@AEBVVec2\@\@M\@Z
     */
    MCAPI void teleportEntity(class Vec3 const &, class Vec2 const &, float);
    /**
     * @hash   -1898511136
     * @symbol  ?getDebugSpatialPacketModifiers\@SpatialActorNetworkData\@\@SAAEAUDebugSpatialPacketModifiers\@1\@XZ
     */
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers & getDebugSpatialPacketModifiers();

//private:
    /**
     * @hash   194131811
     * @symbol  ?_findRelevantPlayersToSendUpdate\@SpatialActorNetworkData\@\@AEAA?AV?$vector\@UNetworkIdentifierWithSubId\@\@V?$allocator\@UNetworkIdentifierWithSubId\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct NetworkIdentifierWithSubId> _findRelevantPlayersToSendUpdate();
    /**
     * @hash   -1760608475
     * @symbol  ?_getOptimizationScore\@SpatialActorNetworkData\@\@AEBA_KAEAVPlayer\@\@\@Z
     */
    MCAPI unsigned __int64 _getOptimizationScore(class Player &) const;
    /**
     * @hash   1182561988
     * @symbol  ?_initializeLastSentValues\@SpatialActorNetworkData\@\@AEAAXXZ
     */
    MCAPI void _initializeLastSentValues();
    /**
     * @hash   1340459965
     * @symbol  ?_shouldUpdateBasedOptimizationOnScore\@SpatialActorNetworkData\@\@AEBA_NAEAVPlayer\@\@\@Z
     */
    MCAPI bool _shouldUpdateBasedOptimizationOnScore(class Player &) const;

private:
    /**
     * @hash   105588221
     * @symbol  ?mDebugSendRateModifiers\@SpatialActorNetworkData\@\@0UDebugSendRateModifiers\@1\@A
     */
    MCAPI static struct SpatialActorNetworkData::DebugSendRateModifiers mDebugSendRateModifiers;
    /**
     * @hash   -1478451313
     * @symbol  ?mDebugSpatialPacketModifiers\@SpatialActorNetworkData\@\@0UDebugSpatialPacketModifiers\@1\@A
     */
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers mDebugSpatialPacketModifiers;

};