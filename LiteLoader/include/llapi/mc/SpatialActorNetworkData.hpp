/**
 * @file  SpatialActorNetworkData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1248355204
     * @symbol ??0SpatialActorNetworkData@@QEAA@AEAVActor@@@Z
     */
    MCAPI SpatialActorNetworkData(class Actor &);
    /**
     * @hash   -1125768726
     * @symbol ?enableAutoSend@SpatialActorNetworkData@@QEAAX_N@Z
     */
    MCAPI void enableAutoSend(bool);
    /**
     * @hash   -2077269118
     * @symbol ?getLastSentPositionForAddingEntity@SpatialActorNetworkData@@QEAA?AVVec3@@XZ
     */
    MCAPI class Vec3 getLastSentPositionForAddingEntity();
    /**
     * @hash   511393050
     * @symbol ?getLastSentRotationForAddingEntity@SpatialActorNetworkData@@QEAA?AVVec2@@XZ
     */
    MCAPI class Vec2 getLastSentRotationForAddingEntity();
    /**
     * @hash   -934741688
     * @symbol ?getLastSentYBodyRotationForAddingEntity@SpatialActorNetworkData@@QEAAMXZ
     */
    MCAPI float getLastSentYBodyRotationForAddingEntity();
    /**
     * @hash   1660005356
     * @symbol ?getLastSentYHeadRotationForAddingEntity@SpatialActorNetworkData@@QEAAMXZ
     */
    MCAPI float getLastSentYHeadRotationForAddingEntity();
    /**
     * @hash   -1619401314
     * @symbol ?handleClientData@SpatialActorNetworkData@@QEAAXAEBVMoveActorAbsoluteData@@@Z
     */
    MCAPI void handleClientData(class MoveActorAbsoluteData const &);
    /**
     * @hash   142903872
     * @symbol ?isAutoSendEnabled@SpatialActorNetworkData@@QEBA_NXZ
     */
    MCAPI bool isAutoSendEnabled() const;
    /**
     * @hash   -1340390038
     * @symbol ?sendUpdate@SpatialActorNetworkData@@QEAAX_N00@Z
     */
    MCAPI void sendUpdate(bool, bool, bool);
    /**
     * @hash   -1781343376
     * @symbol ?shouldSendMotionPredictionHintsPacket@SpatialActorNetworkData@@QEBA_NXZ
     */
    MCAPI bool shouldSendMotionPredictionHintsPacket() const;
    /**
     * @hash   -646096847
     * @symbol ?shouldSendUpdate@SpatialActorNetworkData@@QEBA_N_N0@Z
     */
    MCAPI bool shouldSendUpdate(bool, bool) const;
    /**
     * @hash   -1164140394
     * @symbol ?teleportEntity@SpatialActorNetworkData@@QEAAXAEBVVec3@@AEBVVec2@@M@Z
     */
    MCAPI void teleportEntity(class Vec3 const &, class Vec2 const &, float);
    /**
     * @hash   -2035741936
     * @symbol ?getDebugSpatialPacketModifiers@SpatialActorNetworkData@@SAAEAUDebugSpatialPacketModifiers@1@XZ
     */
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers & getDebugSpatialPacketModifiers();

//private:
    /**
     * @hash   57024019
     * @symbol ?_findRelevantPlayersToSendUpdate@SpatialActorNetworkData@@AEAA?AV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct NetworkIdentifierWithSubId> _findRelevantPlayersToSendUpdate();
    /**
     * @symbol ?_getOptimizationScore@SpatialActorNetworkData@@AEBA_KAEAVPlayer@@@Z
     */
    MCAPI unsigned __int64 _getOptimizationScore(class Player &) const;
    /**
     * @hash   1045500324
     * @symbol ?_initializeLastSentValues@SpatialActorNetworkData@@AEAAXXZ
     */
    MCAPI void _initializeLastSentValues();
    /**
     * @symbol ?_shouldUpdateBasedOptimizationOnScore@SpatialActorNetworkData@@AEBA_NAEAVPlayer@@@Z
     */
    MCAPI bool _shouldUpdateBasedOptimizationOnScore(class Player &) const;

private:
    /**
     * @hash   -1001975811
     * @symbol ?mDebugSendRateModifiers@SpatialActorNetworkData@@0UDebugSendRateModifiers@1@A
     */
    MCAPI static struct SpatialActorNetworkData::DebugSendRateModifiers mDebugSendRateModifiers;
    /**
     * @hash   1708951951
     * @symbol ?mDebugSpatialPacketModifiers@SpatialActorNetworkData@@0UDebugSpatialPacketModifiers@1@A
     */
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers mDebugSpatialPacketModifiers;

};