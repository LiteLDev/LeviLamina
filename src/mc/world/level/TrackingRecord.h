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
    // symbol: ?getEntity@TrackingRecord@PositionTrackingDB@@QEAAAEAVEntityContext@@XZ
    MCAPI class EntityContext& getEntity();

    // symbol: ?getId@TrackingRecord@PositionTrackingDB@@QEBAAEBVPositionTrackingId@@XZ
    MCAPI class PositionTrackingId const& getId() const;

    // symbol: ?getStatus@TrackingRecord@PositionTrackingDB@@QEBA?BW4RecordStatus@12@XZ
    MCAPI ::PositionTrackingDB::TrackingRecord::RecordStatus const getStatus() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_addTransaction@TrackingRecord@PositionTrackingDB@@IEAA_NV?$weak_ptr@VPositionTrackingDBServer@PositionTrackingDB@@@std@@V?$unique_ptr@VOperationBase@PositionTrackingDB@@U?$default_delete@VOperationBase@PositionTrackingDB@@@std@@@4@@Z
    MCAPI bool _addTransaction(
        std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer> parent,
        std::unique_ptr<class PositionTrackingDB::OperationBase>          newTransaction
    );

    // symbol: ?deserialize@TrackingRecord@PositionTrackingDB@@IEAAXAEBVCompoundTag@@@Z
    MCAPI void deserialize(class CompoundTag const& tag);

    // symbol:
    // ?loadRecordFromStorage@TrackingRecord@PositionTrackingDB@@IEAA_NV?$weak_ptr@VPositionTrackingDBServer@PositionTrackingDB@@@std@@@Z
    MCAPI bool loadRecordFromStorage(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer> parent);

    // symbol: ?serialize@TrackingRecord@PositionTrackingDB@@IEBA?AVCompoundTag@@XZ
    MCAPI class CompoundTag serialize() const;

    // NOLINTEND
};

}; // namespace PositionTrackingDB
