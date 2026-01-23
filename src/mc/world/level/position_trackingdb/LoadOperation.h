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
    ::ll::UntypedStorage<8, 16> mUnkd8309d;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadOperation& operator=(LoadOperation const&);
    LoadOperation(LoadOperation const&);
    LoadOperation();

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
    MCNAPI char const* $getDescription() const;

    MCNAPI bool $_init(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr,
        ::PositionTrackingDB::TrackingRecord&                           record
    );

    MCNAPI bool
    $_tick(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>, ::PositionTrackingDB::TrackingRecord&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PositionTrackingDB
