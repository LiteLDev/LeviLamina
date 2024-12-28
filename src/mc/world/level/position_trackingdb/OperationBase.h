#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class OperationBase {
public:
    // prevent constructor by default
    OperationBase& operator=(OperationBase const&);
    OperationBase(OperationBase const&);
    OperationBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OperationBase();

    // vIndex: 1
    virtual bool
    tick(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>, ::PositionTrackingDB::TrackingRecord&) = 0;

    // vIndex: 2
    virtual char const* getDescription() const = 0;

    // vIndex: 3
    virtual bool isAsync() const;

    // vIndex: 4
    virtual bool isComplete() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isAsync() const;

    MCAPI bool $isComplete() const;
    // NOLINTEND
};

} // namespace PositionTrackingDB
