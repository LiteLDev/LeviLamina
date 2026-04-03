#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/position_trackingdb/ResultCode.h"

// auto generated forward declare list
// clang-format off
class Level;
class LevelStorage;
class PositionTrackingId;
class Scheduler;
class TaskGroup;
namespace PositionTrackingDB { class CacheManager; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class PositionTrackingDBServer : public ::std::enable_shared_from_this<::PositionTrackingDB::PositionTrackingDBServer> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>                                              mLevel;
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                          mCallbackContext;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                                       mLevelStorage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                        mAsyncTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PositionTrackingDB::CacheManager>> mLocalCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::PositionTrackingDB::TrackingRecord*>> mPendingUpdateQueue;
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

    MCAPI void
    _beginWriteTrackingRecordToLevelStorage(::PositionTrackingDB::TrackingRecord const* record, bool forceWrite);

    MCAPI void _broadcastUpdateToClients(::PositionTrackingDB::TrackingRecord const* record);

    MCAPI void _initializeNewPositionTrackerId(::PositionTrackingId& inOut, bool writeToPersistent);

    MCAPI ::PositionTrackingDB::ResultCode destroyTracker(::PositionTrackingId const& id, bool forceLocalCacheEntry);

    MCAPI ::PositionTrackingDB::ResultCode
    findTracker(::PositionTrackingId const& id, ::PositionTrackingDB::TrackingRecord** outRecord);

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
