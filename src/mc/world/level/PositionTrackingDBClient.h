#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PositionTrackingDB { class TrackingRecord; }
namespace PositionTrackingDB { enum class ResultCode; }
// clang-format on

namespace PositionTrackingDB {

class PositionTrackingDBClient {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSITIONTRACKINGDB_POSITIONTRACKINGDBCLIENT
public:
    PositionTrackingDBClient& operator=(PositionTrackingDBClient const&) = delete;
    PositionTrackingDBClient(PositionTrackingDBClient const&)            = delete;
    PositionTrackingDBClient()                                           = delete;
#endif

public:
    /**
     * @symbol
     * ?findTracker\@PositionTrackingDBClient\@PositionTrackingDB\@\@QEAA?AW4ResultCode\@2\@AEBVPositionTrackingId\@\@PEAPEAVTrackingRecord\@2\@\@Z
     */
    MCAPI enum class PositionTrackingDB::ResultCode
    findTracker(class PositionTrackingId const&, class PositionTrackingDB::TrackingRecord**);
};

}; // namespace PositionTrackingDB
