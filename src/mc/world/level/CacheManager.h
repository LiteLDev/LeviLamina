#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class CacheManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSITIONTRACKINGDB_CACHEMANAGER
public:
    CacheManager& operator=(CacheManager const&) = delete;
    CacheManager(CacheManager const&)            = delete;
    CacheManager()                               = delete;
#endif

public:
    /**
     * @symbol
     * ?createTrackingRecordInLocalCache\@CacheManager\@PositionTrackingDB\@\@QEAA?AV?$not_null\@PEAVTrackingRecord\@PositionTrackingDB\@\@\@gsl\@\@AEBVPositionTrackingId\@\@AEBVBlockPos\@\@AEBV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI class gsl::not_null<class PositionTrackingDB::TrackingRecord*>
    createTrackingRecordInLocalCache(class PositionTrackingId const&, class BlockPos const&, class AutomaticID<class Dimension, int> const&);
};

}; // namespace PositionTrackingDB
