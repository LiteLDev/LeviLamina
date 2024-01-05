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
    // vIndex: 0, symbol: __gen_??1LoadOperation@PositionTrackingDB@@UEAA@XZ
    virtual ~LoadOperation() = default;

    // vIndex: 1, symbol:
    // ?tick@AsyncOperationBase@PositionTrackingDB@@UEAA_NV?$weak_ptr@VPositionTrackingDBServer@PositionTrackingDB@@@std@@AEAVTrackingRecord@2@@Z
    virtual bool tick(
        std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>,
        class PositionTrackingDB::TrackingRecord& record
    );

    // vIndex: 2, symbol: ?getDescription@LoadOperation@PositionTrackingDB@@UEBAPEBDXZ
    virtual char const* getDescription() const;

    // vIndex: 3, symbol: ?isAsync@AsyncOperationBase@PositionTrackingDB@@UEBA_NXZ
    virtual bool isAsync() const;

    // vIndex: 4, symbol: ?isComplete@AsyncOperationBase@PositionTrackingDB@@UEBA_NXZ
    virtual bool isComplete() const;

    // vIndex: 5, symbol:
    // ?_init@LoadOperation@PositionTrackingDB@@MEAA_NV?$weak_ptr@VPositionTrackingDBServer@PositionTrackingDB@@@std@@AEAVTrackingRecord@2@@Z
    virtual bool _init(
        std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>,
        class PositionTrackingDB::TrackingRecord& record
    );

    // vIndex: 6, symbol:
    // ?_tick@LoadOperation@PositionTrackingDB@@MEAA_NV?$weak_ptr@VPositionTrackingDBServer@PositionTrackingDB@@@std@@AEAVTrackingRecord@2@@Z
    virtual bool
    _tick(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&);

    // vIndex: 7, symbol:
    // ?_quit@AsyncOperationBase@PositionTrackingDB@@MEAA_NV?$weak_ptr@VPositionTrackingDBServer@PositionTrackingDB@@@std@@AEAVTrackingRecord@2@@Z
    virtual bool
    _quit(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&);

    // NOLINTEND
};

}; // namespace PositionTrackingDB
