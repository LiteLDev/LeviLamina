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

class AsyncOperationBase : public ::PositionTrackingDB::OperationBase {
public:
    // AsyncOperationBase inner types define
    enum class InternalState : int {
        Init     = 0,
        Tick     = 1,
        Quit     = 2,
        Complete = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PositionTrackingDB::AsyncOperationBase::InternalState> mInternalState;
    ::ll::TypedStorage<1, 1, bool>                                                    mErrored;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool tick(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr,
        ::PositionTrackingDB::TrackingRecord&                           record
    ) /*override*/;

    virtual bool isAsync() const /*override*/;

    virtual bool isComplete() const /*override*/;

    virtual bool _init(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr,
        ::PositionTrackingDB::TrackingRecord&                           record
    );

    virtual bool
    _tick(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>, ::PositionTrackingDB::TrackingRecord&);

    virtual bool
    _quit(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>, ::PositionTrackingDB::TrackingRecord&);

    virtual ~AsyncOperationBase() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $tick(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr,
        ::PositionTrackingDB::TrackingRecord&                           record
    );

    MCFOLD bool $isAsync() const;

    MCAPI bool $isComplete() const;

    MCAPI bool
    $_quit(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>, ::PositionTrackingDB::TrackingRecord&);


    // NOLINTEND
};

} // namespace PositionTrackingDB
