#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/world/level/position_trackingdb/AsyncOperationBase.h"

// auto generated forward declare list
// clang-format off
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class DestroyOperation : public ::PositionTrackingDB::AsyncOperationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>> mStorageTaskHandle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DestroyOperation() /*override*/ = default;

    virtual char const* getDescription() const /*override*/;

    virtual bool _init(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>,
        ::PositionTrackingDB::TrackingRecord&
    ) /*override*/;

    virtual bool _tick(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>,
        ::PositionTrackingDB::TrackingRecord&
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PositionTrackingDB
