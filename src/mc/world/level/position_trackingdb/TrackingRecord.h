#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/PositionTrackingId.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
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
    ::ll::TypedStorage<4, 4, ::PositionTrackingId>                                                   mId;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                            mPosition;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                                        mDimensionType;
    ::ll::TypedStorage<1, 1, ::PositionTrackingDB::TrackingRecord::RecordStatus>                     mStatus;
    ::ll::TypedStorage<1, 1, bool>                                                                   mDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::PositionTrackingDB::OperationBase>>> mPendingOperations;
    ::ll::TypedStorage<8, 32, ::OwnerPtr<::EntityId>>                                                mEntity;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void deserialize(::CompoundTag const& tag);
#endif

    MCAPI bool processPendingTransactions(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> parent);

    MCAPI ::CompoundTag serialize() const;
    // NOLINTEND
};

} // namespace PositionTrackingDB
