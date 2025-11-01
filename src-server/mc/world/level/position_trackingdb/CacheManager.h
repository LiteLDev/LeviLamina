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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk948f80;
    ::ll::UntypedStorage<8, 16> mUnkaec1ce;
    // NOLINTEND

public:
    // prevent constructor by default
    CacheManager& operator=(CacheManager const&);
    CacheManager(CacheManager const&);
    CacheManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::gsl::not_null<::PositionTrackingDB::TrackingRecord*> createTrackingRecordInLocalCache(::PositionTrackingId const& id, ::BlockPos const& pos, ::DimensionType const& dimension);
    // NOLINTEND

};

}
