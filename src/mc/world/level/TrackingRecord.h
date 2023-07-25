#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSITIONTRACKINGDB_TRACKINGRECORD
public:
    TrackingRecord& operator=(TrackingRecord const&) = delete;
    TrackingRecord(TrackingRecord const&)            = delete;
    TrackingRecord()                                 = delete;
#endif

public:
    /**
     * @symbol ?getEntity\@TrackingRecord\@PositionTrackingDB\@\@QEAAAEAVEntityContext\@\@XZ
     */
    MCAPI class EntityContext& getEntity();
    /**
     * @symbol ?getId\@TrackingRecord\@PositionTrackingDB\@\@QEBAAEBVPositionTrackingId\@\@XZ
     */
    MCAPI class PositionTrackingId const& getId() const;
    /**
     * @symbol ?getStatus\@TrackingRecord\@PositionTrackingDB\@\@QEBA?BW4RecordStatus\@12\@XZ
     */
    MCAPI enum class PositionTrackingDB::TrackingRecord::RecordStatus const getStatus() const;

    // protected:
    /**
     * @symbol
     * ?_addTransaction\@TrackingRecord\@PositionTrackingDB\@\@IEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@V?$unique_ptr\@VOperationBase\@PositionTrackingDB\@\@U?$default_delete\@VOperationBase\@PositionTrackingDB\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI bool
        _addTransaction(class std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, std::unique_ptr<class PositionTrackingDB::OperationBase>);
    /**
     * @symbol ?deserialize\@TrackingRecord\@PositionTrackingDB\@\@IEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void deserialize(class CompoundTag const&);
    /**
     * @symbol
     * ?loadRecordFromStorage\@TrackingRecord\@PositionTrackingDB\@\@IEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@\@Z
     */
    MCAPI bool loadRecordFromStorage(class std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>);
    /**
     * @symbol ?serialize\@TrackingRecord\@PositionTrackingDB\@\@IEBA?AVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag serialize() const;

protected:
};

}; // namespace PositionTrackingDB
