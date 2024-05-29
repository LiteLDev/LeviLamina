#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ResultCode.h"

// auto generated forward declare list
// clang-format off
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
    // symbol:
    // ?findTracker@PositionTrackingDBClient@PositionTrackingDB@@QEAA?AW4ResultCode@2@AEBVPositionTrackingId@@PEAPEAVTrackingRecord@2@@Z
    MCAPI ::PositionTrackingDB::ResultCode
    findTracker(class PositionTrackingId const& id, class PositionTrackingDB::TrackingRecord** outRecord);

    // NOLINTEND
};

}; // namespace PositionTrackingDB
