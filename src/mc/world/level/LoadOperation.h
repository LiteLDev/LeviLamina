#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/AsyncOperationBase.h"

// auto generated forward declare list
// clang-format off
namespace PositionTrackingDB { class AsyncOperationBase; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class LoadOperation : public ::PositionTrackingDB::AsyncOperationBase {
public:
    // prevent constructor by default
    LoadOperation& operator=(LoadOperation const&);
    LoadOperation(LoadOperation const&);
    LoadOperation();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoadOperation() = default;

    // vIndex: 1
    virtual bool tick(
        std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>,
        class PositionTrackingDB::TrackingRecord& record
    );

    // vIndex: 2
    virtual char const* getDescription() const;

    // vIndex: 3
    virtual bool isAsync() const;

    // vIndex: 4
    virtual bool isComplete() const;

    // vIndex: 5
    virtual bool _init(
        std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>,
        class PositionTrackingDB::TrackingRecord& record
    );

    // vIndex: 6
    virtual bool
    _tick(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&);

    // vIndex: 7
    virtual bool
    _quit(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&);

    // NOLINTEND
};

}; // namespace PositionTrackingDB
