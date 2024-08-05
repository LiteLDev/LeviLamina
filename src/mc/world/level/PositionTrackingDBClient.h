#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ResultCode.h"

// auto generated forward declare list
// clang-format off
class Level;
class PositionTrackingId;
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class PositionTrackingDBClient {
public:
    // prevent constructor by default
    PositionTrackingDBClient& operator=(PositionTrackingDBClient const&);
    PositionTrackingDBClient(PositionTrackingDBClient const&);
    PositionTrackingDBClient();

public:
    // NOLINTBEGIN
    MCAPI explicit PositionTrackingDBClient(class Level& level);

    MCAPI ::PositionTrackingDB::ResultCode
    findTracker(class PositionTrackingId const& id, class PositionTrackingDB::TrackingRecord** outRecord);

    MCAPI ~PositionTrackingDBClient();

    // NOLINTEND
};

}; // namespace PositionTrackingDB
