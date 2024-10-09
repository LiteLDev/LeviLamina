#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/position_trackingdb/ResultCode.h"

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
    MCAPI PositionTrackingDBServer(class Level& level, class Scheduler& callbackContext);

    MCAPI class PositionTrackingId createTracker(class BlockPos const& positionToTrack, DimensionType const& dimension);

    MCAPI ::PositionTrackingDB::ResultCode
    destroyTracker(class PositionTrackingId const& id, bool forceLocalCacheEntry);

    MCAPI ::PositionTrackingDB::ResultCode
    findTracker(class PositionTrackingId const& id, class PositionTrackingDB::TrackingRecord** outRecord);

    MCAPI void onReceivePacket(class PositionTrackingDBClientRequestPacket const& packet);

    MCAPI bool tick();

    MCAPI ~PositionTrackingDBServer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addRecordToPendingUpdateQueue(class PositionTrackingDB::TrackingRecord* record);

    MCAPI void _broadcastUpdateToClients(class PositionTrackingDB::TrackingRecord const* record);

    MCAPI void _initializeNewPositionTrackerId(class PositionTrackingId& inOut, bool writeToPersistent);

    MCAPI void _updateRecordDirtyStatus(class PositionTrackingDB::TrackingRecord* record);

    // NOLINTEND
};

}; // namespace PositionTrackingDB
