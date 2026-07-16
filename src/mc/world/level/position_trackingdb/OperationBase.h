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
    // virtual functions
    // NOLINTBEGIN
    virtual ~OperationBase() = default;

    virtual bool
    tick(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer>, ::PositionTrackingDB::TrackingRecord&) = 0;

    virtual char const* getDescription() const = 0;

    virtual bool isAsync() const;

    virtual bool isComplete() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PositionTrackingDB
