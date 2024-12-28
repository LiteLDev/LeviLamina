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

class PositionTrackingDBServer : public ::std::enable_shared_from_this<::PositionTrackingDB::PositionTrackingDBServer> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb10319;
    ::ll::UntypedStorage<8, 8>  mUnka9fff9;
    ::ll::UntypedStorage<8, 8>  mUnk6c1d34;
    ::ll::UntypedStorage<8, 8>  mUnk9cff21;
    ::ll::UntypedStorage<8, 8>  mUnk5448f9;
    ::ll::UntypedStorage<8, 24> mUnk791b46;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionTrackingDBServer& operator=(PositionTrackingDBServer const&);
    PositionTrackingDBServer(PositionTrackingDBServer const&);
    PositionTrackingDBServer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PositionTrackingDBServer(::Level& level, ::Scheduler& callbackContext);

    MCAPI void _addRecordToPendingUpdateQueue(::PositionTrackingDB::TrackingRecord* record);

    MCAPI void _broadcastUpdateToClients(::PositionTrackingDB::TrackingRecord const* record);

    MCAPI void _initializeNewPositionTrackerId(::PositionTrackingId& inOut, bool writeToPersistent);

    MCAPI void _updateRecordDirtyStatus(::PositionTrackingDB::TrackingRecord* record);

    MCAPI ::PositionTrackingId createTracker(::BlockPos const& positionToTrack, ::DimensionType const& dimension);

    MCAPI ::PositionTrackingDB::ResultCode destroyTracker(::PositionTrackingId const& id, bool forceLocalCacheEntry);

    MCAPI ::PositionTrackingDB::ResultCode
    findTracker(::PositionTrackingId const& id, ::PositionTrackingDB::TrackingRecord** outRecord);

    MCAPI void onReceivePacket(::PositionTrackingDBClientRequestPacket const& packet);

    MCAPI bool tick();

    MCAPI ~PositionTrackingDBServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Level& level, ::Scheduler& callbackContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace PositionTrackingDB
