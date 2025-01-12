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
    ::ll::UntypedStorage<4, 4> mUnka19bdb;
    ::ll::UntypedStorage<1, 1> mUnkc5b4c7;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncOperationBase& operator=(AsyncOperationBase const&);
    AsyncOperationBase(AsyncOperationBase const&);
    AsyncOperationBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool tick(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr,
        ::PositionTrackingDB::TrackingRecord&                           record
    ) /*override*/;

    // vIndex: 3
    virtual bool isAsync() const /*override*/;

    // vIndex: 4
    virtual bool isComplete() const /*override*/;

    // vIndex: 5
    virtual bool
    _init(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>, ::PositionTrackingDB::TrackingRecord&);

    // vIndex: 6
    virtual bool
    _tick(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>, ::PositionTrackingDB::TrackingRecord&);

    // vIndex: 7
    virtual bool
    _quit(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr, ::PositionTrackingDB::TrackingRecord&);

    // vIndex: 0
    virtual ~AsyncOperationBase() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    $_quit(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> databasePtr, ::PositionTrackingDB::TrackingRecord&);
    // NOLINTEND
};

} // namespace PositionTrackingDB
