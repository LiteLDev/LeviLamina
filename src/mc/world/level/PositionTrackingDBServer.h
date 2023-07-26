#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class Level;
class PositionTrackingDBClientRequestPacket;
class PositionTrackingId;
class Scheduler;
namespace PositionTrackingDB { class TrackingRecord; }
namespace PositionTrackingDB { enum class ResultCode; }
// clang-format on

namespace PositionTrackingDB {

class PositionTrackingDBServer {

public:
    // prevent constructor by default
    PositionTrackingDBServer& operator=(PositionTrackingDBServer const&) = delete;
    PositionTrackingDBServer(PositionTrackingDBServer const&)            = delete;
    PositionTrackingDBServer()                                           = delete;

public:
    /**
     * @symbol ??0PositionTrackingDBServer\@PositionTrackingDB\@\@QEAA\@AEAVLevel\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI PositionTrackingDBServer(class Level&, class Scheduler&); // NOLINT
    /**
     * @symbol
     * ?createTracker\@PositionTrackingDBServer\@PositionTrackingDB\@\@QEAA?AVPositionTrackingId\@\@AEBVBlockPos\@\@AEBV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI class PositionTrackingId
    createTracker(class BlockPos const&, class AutomaticID<class Dimension, int> const&); // NOLINT
    /**
     * @symbol
     * ?destroyTracker\@PositionTrackingDBServer\@PositionTrackingDB\@\@QEAA?AW4ResultCode\@2\@AEBVPositionTrackingId\@\@_N\@Z
     */
    MCAPI enum class PositionTrackingDB::ResultCode destroyTracker(class PositionTrackingId const&, bool); // NOLINT
    /**
     * @symbol
     * ?findTracker\@PositionTrackingDBServer\@PositionTrackingDB\@\@QEAA?AW4ResultCode\@2\@AEBVPositionTrackingId\@\@PEAPEAVTrackingRecord\@2\@\@Z
     */
    MCAPI enum class PositionTrackingDB::ResultCode
    findTracker(class PositionTrackingId const&, class PositionTrackingDB::TrackingRecord**); // NOLINT
    /**
     * @symbol
     * ?onReceivePacket\@PositionTrackingDBServer\@PositionTrackingDB\@\@QEAAXAEBVPositionTrackingDBClientRequestPacket\@\@\@Z
     */
    MCAPI void onReceivePacket(class PositionTrackingDBClientRequestPacket const&); // NOLINT
    /**
     * @symbol ?tick\@PositionTrackingDBServer\@PositionTrackingDB\@\@QEAA_NXZ
     */
    MCAPI bool tick(); // NOLINT
    /**
     * @symbol ??1PositionTrackingDBServer\@PositionTrackingDB\@\@QEAA\@XZ
     */
    MCAPI ~PositionTrackingDBServer(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_addRecordToPendingUpdateQueue\@PositionTrackingDBServer\@PositionTrackingDB\@\@AEAAXPEAVTrackingRecord\@2\@\@Z
     */
    MCAPI void _addRecordToPendingUpdateQueue(class PositionTrackingDB::TrackingRecord*); // NOLINT
    /**
     * @symbol
     * ?_broadcastUpdateToClients\@PositionTrackingDBServer\@PositionTrackingDB\@\@AEAAXPEBVTrackingRecord\@2\@\@Z
     */
    MCAPI void _broadcastUpdateToClients(class PositionTrackingDB::TrackingRecord const*); // NOLINT
    /**
     * @symbol
     * ?_initializeNewPositionTrackerId\@PositionTrackingDBServer\@PositionTrackingDB\@\@AEAAXAEAVPositionTrackingId\@\@_N\@Z
     */
    MCAPI void _initializeNewPositionTrackerId(class PositionTrackingId&, bool); // NOLINT
    /**
     * @symbol
     * ?_updateRecordDirtyStatus\@PositionTrackingDBServer\@PositionTrackingDB\@\@AEAAXPEAVTrackingRecord\@2\@\@Z
     */
    MCAPI void _updateRecordDirtyStatus(class PositionTrackingDB::TrackingRecord*); // NOLINT

private:
};

}; // namespace PositionTrackingDB
