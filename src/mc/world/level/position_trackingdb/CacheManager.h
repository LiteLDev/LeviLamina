#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/PositionTrackingId.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class Level;
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class CacheManager {
public:
    // CacheManager inner types define
    using TrackingRecordMap = ::std::map<::PositionTrackingId, ::std::unique_ptr<::PositionTrackingDB::TrackingRecord>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&> mLevel;
    ::ll::TypedStorage<8, 16, ::std::map<::PositionTrackingId, ::std::unique_ptr<::PositionTrackingDB::TrackingRecord>>>
        mLocalCache;
    // NOLINTEND

public:
    // prevent constructor by default
    CacheManager& operator=(CacheManager const&);
    CacheManager(CacheManager const&);
    CacheManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::gsl::not_null<::PositionTrackingDB::TrackingRecord*> createTrackingRecordInLocalCache(
        ::PositionTrackingId const& id,
        ::BlockPos const&           pos,
        ::DimensionType const&      dimension
    );
    // NOLINTEND
};

} // namespace PositionTrackingDB
