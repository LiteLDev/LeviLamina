#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

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
    CacheManager& operator=(CacheManager const&);
    CacheManager(CacheManager const&);
    CacheManager();

public:
    // NOLINTBEGIN
    MCAPI gsl::not_null<class PositionTrackingDB::TrackingRecord*> createTrackingRecordInLocalCache(
        class PositionTrackingId const& id,
        class BlockPos const&           pos,
        DimensionType const&            dimension
    );

    // NOLINTEND
};

}; // namespace PositionTrackingDB
