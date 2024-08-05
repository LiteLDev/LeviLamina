#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/OperationBase.h"

// auto generated forward declare list
// clang-format off
namespace PositionTrackingDB { class OperationBase; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class AsyncOperationBase : public ::PositionTrackingDB::OperationBase {
public:
    // prevent constructor by default
    AsyncOperationBase& operator=(AsyncOperationBase const&);
    AsyncOperationBase(AsyncOperationBase const&);
    AsyncOperationBase();

public:
    // NOLINTBEGIN
    MCVAPI bool
    _quit(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer> databasePtr, class PositionTrackingDB::TrackingRecord&);

    MCVAPI bool isAsync() const;

    MCVAPI bool isComplete() const;

    MCVAPI bool tick(
        std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer> databasePtr,
        class PositionTrackingDB::TrackingRecord&                         record
    );

    // NOLINTEND
};

}; // namespace PositionTrackingDB
