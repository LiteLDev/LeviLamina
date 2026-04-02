#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/position_trackingdb/OperationBase.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class UpdateOperation : public ::PositionTrackingDB::OperationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>     mUpdatedPosition;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UpdateOperation() /*override*/ = default;

    virtual bool tick(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>,
        ::PositionTrackingDB::TrackingRecord&
    ) /*override*/;

    virtual char const* getDescription() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PositionTrackingDB
