#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/position_trackingdb/ResultCode.h"

// auto generated forward declare list
// clang-format off
class Level;
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
    MCNAPI PositionTrackingDBServer(::Level& level, ::Scheduler& callbackContext);

    MCNAPI void _addRecordToPendingUpdateQueue(::PositionTrackingDB::TrackingRecord* record);

    MCNAPI void
    _beginWriteTrackingRecordToLevelStorage(::PositionTrackingDB::TrackingRecord const* record, bool forceWrite);

    MCNAPI void _broadcastUpdateToClients(::PositionTrackingDB::TrackingRecord const* record);

    MCNAPI void _initializeNewPositionTrackerId(::PositionTrackingId& inOut, bool writeToPersistent);

    MCNAPI ::PositionTrackingDB::ResultCode destroyTracker(::PositionTrackingId const& id, bool forceLocalCacheEntry);

    MCNAPI ::PositionTrackingDB::ResultCode
    findTracker(::PositionTrackingId const& id, ::PositionTrackingDB::TrackingRecord** outRecord);

    MCNAPI bool tick();

    MCNAPI ~PositionTrackingDBServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level& level, ::Scheduler& callbackContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PositionTrackingDB
