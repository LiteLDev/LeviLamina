#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/position_trackingdb/OperationBase.h"

// auto generated forward declare list
// clang-format off
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class UpdateOperation : public ::PositionTrackingDB::OperationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnke09c99;
    ::ll::UntypedStorage<4, 4> mUnk1a37d7;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateOperation& operator=(UpdateOperation const&);
    UpdateOperation(UpdateOperation const&);
    UpdateOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateOperation() /*override*/ = default;

    // vIndex: 1
    virtual bool tick(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>, ::PositionTrackingDB::TrackingRecord&) /*override*/;

    // vIndex: 2
    virtual char const* getDescription() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
