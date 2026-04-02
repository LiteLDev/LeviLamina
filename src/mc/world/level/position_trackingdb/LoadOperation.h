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

class LoadOperation : public ::PositionTrackingDB::AsyncOperationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>> mTaskHandle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LoadOperation() /*override*/ = default;

    virtual char const* getDescription() const /*override*/;

    virtual bool _init(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr,
        ::PositionTrackingDB::TrackingRecord&                           record
    ) /*override*/;

    virtual bool _tick(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>,
        ::PositionTrackingDB::TrackingRecord&
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getDescription() const;

    MCAPI bool $_init(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr,
        ::PositionTrackingDB::TrackingRecord&                           record
    );

    MCFOLD bool
    $_tick(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>, ::PositionTrackingDB::TrackingRecord&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PositionTrackingDB
