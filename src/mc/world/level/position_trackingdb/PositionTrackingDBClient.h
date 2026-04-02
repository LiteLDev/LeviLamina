#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/position_trackingdb/ResultCode.h"

// auto generated forward declare list
// clang-format off
class Level;
class PositionTrackingId;
namespace PositionTrackingDB { class CacheManager; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class PositionTrackingDBClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>                                              mLevel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PositionTrackingDB::CacheManager>> mLocalCache;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionTrackingDBClient& operator=(PositionTrackingDBClient const&);
    PositionTrackingDBClient(PositionTrackingDBClient const&);
    PositionTrackingDBClient();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PositionTrackingDB::ResultCode
    findTracker(::PositionTrackingId const& id, ::PositionTrackingDB::TrackingRecord** outRecord);
    // NOLINTEND
};

} // namespace PositionTrackingDB
