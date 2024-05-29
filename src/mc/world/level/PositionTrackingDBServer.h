#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ResultCode.h"
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
// clang-format on

namespace PositionTrackingDB {

class PositionTrackingDBServer {
public:
    // prevent constructor by default
    PositionTrackingDBServer& operator=(PositionTrackingDBServer const&);
    PositionTrackingDBServer(PositionTrackingDBServer const&);
    PositionTrackingDBServer();

public:
    // NOLINTBEGIN
    // symbol: ??0PositionTrackingDBServer@PositionTrackingDB@@QEAA@AEAVLevel@@AEAVScheduler@@@Z
    MCAPI PositionTrackingDBServer(class Level& level, class Scheduler& callbackContext);

    // symbol:
    // ?createTracker@PositionTrackingDBServer@PositionTrackingDB@@QEAA?AVPositionTrackingId@@AEBVBlockPos@@AEBV?$AutomaticID@VDimension@@H@@@Z
    MCAPI class PositionTrackingId createTracker(class BlockPos const& positionToTrack, DimensionType const& dimension);

    // symbol:
    // ?destroyTracker@PositionTrackingDBServer@PositionTrackingDB@@QEAA?AW4ResultCode@2@AEBVPositionTrackingId@@_N@Z
    MCAPI ::PositionTrackingDB::ResultCode
    destroyTracker(class PositionTrackingId const& id, bool forceLocalCacheEntry);

    // symbol:
    // ?findTracker@PositionTrackingDBServer@PositionTrackingDB@@QEAA?AW4ResultCode@2@AEBVPositionTrackingId@@PEAPEAVTrackingRecord@2@@Z
    MCAPI ::PositionTrackingDB::ResultCode
    findTracker(class PositionTrackingId const& id, class PositionTrackingDB::TrackingRecord** outRecord);

    // symbol:
    // ?onReceivePacket@PositionTrackingDBServer@PositionTrackingDB@@QEAAXAEBVPositionTrackingDBClientRequestPacket@@@Z
    MCAPI void onReceivePacket(class PositionTrackingDBClientRequestPacket const& packet);

    // symbol: ?tick@PositionTrackingDBServer@PositionTrackingDB@@QEAA_NXZ
    MCAPI bool tick();

    // symbol: ??1PositionTrackingDBServer@PositionTrackingDB@@QEAA@XZ
    MCAPI ~PositionTrackingDBServer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addRecordToPendingUpdateQueue@PositionTrackingDBServer@PositionTrackingDB@@AEAAXPEAVTrackingRecord@2@@Z
    MCAPI void _addRecordToPendingUpdateQueue(class PositionTrackingDB::TrackingRecord* record);

    // symbol: ?_broadcastUpdateToClients@PositionTrackingDBServer@PositionTrackingDB@@AEAAXPEBVTrackingRecord@2@@Z
    MCAPI void _broadcastUpdateToClients(class PositionTrackingDB::TrackingRecord const* record);

    // symbol:
    // ?_initializeNewPositionTrackerId@PositionTrackingDBServer@PositionTrackingDB@@AEAAXAEAVPositionTrackingId@@_N@Z
    MCAPI void _initializeNewPositionTrackerId(class PositionTrackingId& inOut, bool writeToPersistent);

    // symbol: ?_updateRecordDirtyStatus@PositionTrackingDBServer@PositionTrackingDB@@AEAAXPEAVTrackingRecord@2@@Z
    MCAPI void _updateRecordDirtyStatus(class PositionTrackingDB::TrackingRecord* record);

    // NOLINTEND
};

}; // namespace PositionTrackingDB
