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
    enum class RecordStatus : uchar {
        Ok            = 0,
        PendingUpdate = 1,
        Deleted       = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3f87cd;
    ::ll::UntypedStorage<4, 12> mUnkc27600;
    ::ll::UntypedStorage<4, 4>  mUnk87b7c4;
    ::ll::UntypedStorage<1, 1>  mUnka37564;
    ::ll::UntypedStorage<1, 1>  mUnkdf665c;
    ::ll::UntypedStorage<8, 24> mUnkf5c6e6;
    ::ll::UntypedStorage<8, 32> mUnkb58566;
    // NOLINTEND

public:
    // prevent constructor by default
    TrackingRecord& operator=(TrackingRecord const&);
    TrackingRecord(TrackingRecord const&);
    TrackingRecord();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _addTransaction(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> parent,
        ::std::unique_ptr<::PositionTrackingDB::OperationBase>          newTransaction
    );

    MCAPI void deserialize(::CompoundTag const& tag);

    MCAPI ::EntityContext& getEntity();

    MCFOLD ::PositionTrackingId const& getId() const;

    MCAPI ::PositionTrackingDB::TrackingRecord::RecordStatus const getStatus() const;

    MCAPI bool loadRecordFromStorage(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> parent);

    MCAPI ::CompoundTag serialize() const;
    // NOLINTEND
};

} // namespace PositionTrackingDB
