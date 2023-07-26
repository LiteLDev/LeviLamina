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
    // TrackingRecord inner types declare
    // clang-format off

    // clang-format on

    // TrackingRecord inner types define
    enum class RecordStatus {};

public:
    // prevent constructor by default
    TrackingRecord& operator=(TrackingRecord const&) = delete;
    TrackingRecord(TrackingRecord const&)            = delete;
    TrackingRecord()                                 = delete;

public:
    /**
     * @symbol ?getEntity\@TrackingRecord\@PositionTrackingDB\@\@QEAAAEAVEntityContext\@\@XZ
     */
    MCAPI class EntityContext& getEntity(); // NOLINT
    /**
     * @symbol ?getId\@TrackingRecord\@PositionTrackingDB\@\@QEBAAEBVPositionTrackingId\@\@XZ
     */
    MCAPI class PositionTrackingId const& getId() const; // NOLINT
    /**
     * @symbol ?getStatus\@TrackingRecord\@PositionTrackingDB\@\@QEBA?BW4RecordStatus\@12\@XZ
     */
    MCAPI enum class PositionTrackingDB::TrackingRecord::RecordStatus const getStatus() const; // NOLINT

    // protected:
    /**
     * @symbol
     * ?_addTransaction\@TrackingRecord\@PositionTrackingDB\@\@IEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@V?$unique_ptr\@VOperationBase\@PositionTrackingDB\@\@U?$default_delete\@VOperationBase\@PositionTrackingDB\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI bool
        _addTransaction(class std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, std::unique_ptr<class PositionTrackingDB::OperationBase>); // NOLINT
    /**
     * @symbol ?deserialize\@TrackingRecord\@PositionTrackingDB\@\@IEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void deserialize(class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?loadRecordFromStorage\@TrackingRecord\@PositionTrackingDB\@\@IEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@\@Z
     */
    MCAPI bool loadRecordFromStorage(class std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>); // NOLINT
    /**
     * @symbol ?serialize\@TrackingRecord\@PositionTrackingDB\@\@IEBA?AVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag serialize() const; // NOLINT

protected:
};

}; // namespace PositionTrackingDB
