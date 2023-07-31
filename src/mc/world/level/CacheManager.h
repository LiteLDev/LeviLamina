#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class PositionTrackingId;
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class CacheManager {

public:
    // prevent constructor by default
    CacheManager& operator=(CacheManager const&) = delete;
    CacheManager(CacheManager const&)            = delete;
    CacheManager()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?createTrackingRecordInLocalCache\@CacheManager\@PositionTrackingDB\@\@QEAA?AV?$not_null\@PEAVTrackingRecord\@PositionTrackingDB\@\@\@gsl\@\@AEBVPositionTrackingId\@\@AEBVBlockPos\@\@AEBV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI class gsl::not_null<class PositionTrackingDB::TrackingRecord*>
    createTrackingRecordInLocalCache(class PositionTrackingId const&, class BlockPos const&, class AutomaticID<class Dimension, int> const&);
    // NOLINTEND
};

}; // namespace PositionTrackingDB
