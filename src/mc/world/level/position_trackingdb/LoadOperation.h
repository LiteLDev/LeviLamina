#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<8, 16> mUnkba8c9c;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadOperation& operator=(LoadOperation const&);
    LoadOperation(LoadOperation const&);
    LoadOperation();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoadOperation() /*override*/ = default;

    // vIndex: 2
    virtual char const* getDescription() const /*override*/;

    // vIndex: 5
    virtual bool _init(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr,
        ::PositionTrackingDB::TrackingRecord&                           record
    ) /*override*/;

    // vIndex: 6
    virtual bool
    _tick(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr, ::PositionTrackingDB::TrackingRecord&) /*override*/
        ;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getDescription() const;

    MCAPI bool $_init(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr,
        ::PositionTrackingDB::TrackingRecord&                           record
    );

    MCAPI bool
    $_tick(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr, ::PositionTrackingDB::TrackingRecord&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PositionTrackingDB
