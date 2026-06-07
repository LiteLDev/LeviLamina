#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/PositionTrackingId.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class EntityContext;
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
    MCAPI bool _addTransaction(
        ::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> parent,
        ::std::unique_ptr<::PositionTrackingDB::OperationBase>          newTransaction
    );

    MCAPI void deserialize(::CompoundTag const& tag);

#ifdef LL_PLAT_C
    MCFOLD ::DimensionType const& getDimensionType() const;
#endif

    MCAPI ::EntityContext& getEntity();

    MCFOLD ::PositionTrackingId const& getId() const;

#ifdef LL_PLAT_C
    MCFOLD ::BlockPos const& getPosition() const;
#endif

    MCAPI ::PositionTrackingDB::TrackingRecord::RecordStatus const getStatus() const;

    MCAPI bool processPendingTransactions(::std::weak_ptr<::PositionTrackingDB::PositionTrackingDBServer> parent);

    MCAPI ::CompoundTag serialize() const;
    // NOLINTEND
};

} // namespace PositionTrackingDB
