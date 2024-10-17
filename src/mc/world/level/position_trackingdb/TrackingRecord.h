#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class EntityContext;
class PositionTrackingId;
namespace PositionTrackingDB { class OperationBase; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
// clang-format on

namespace PositionTrackingDB {

class TrackingRecord {
public:
    // TrackingRecord inner types define
    enum class RecordStatus {};

public:
    // prevent constructor by default
    TrackingRecord& operator=(TrackingRecord const&);
    TrackingRecord(TrackingRecord const&);
    TrackingRecord();

public:
    // NOLINTBEGIN
    MCAPI class EntityContext& getEntity();

    MCAPI class PositionTrackingId const& getId() const;

    MCAPI ::PositionTrackingDB::TrackingRecord::RecordStatus const getStatus() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _addTransaction(
        std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer> parent,
        std::unique_ptr<class PositionTrackingDB::OperationBase>          newTransaction
    );

    MCAPI void deserialize(class CompoundTag const& tag);

    MCAPI bool loadRecordFromStorage(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer> parent);

    MCAPI class CompoundTag serialize() const;

    // NOLINTEND
};

}; // namespace PositionTrackingDB
