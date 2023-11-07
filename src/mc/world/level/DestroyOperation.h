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

class DestroyOperation : public ::PositionTrackingDB::AsyncOperationBase {
public:
    // prevent constructor by default
    DestroyOperation& operator=(DestroyOperation const&);
    DestroyOperation(DestroyOperation const&);
    DestroyOperation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DestroyOperation@@@UEAA@XZ
    virtual ~DestroyOperation();

    // vIndex: 1, symbol:
    // ?tick@AsyncOperationBase@PositionTrackingDB@@UEAA_NV?$weak_ptr@VPositionTrackingDBServer@PositionTrackingDB@@@std@@AEAVTrackingRecord@2@@Z
    virtual bool
    tick(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&);

    // vIndex: 2, symbol: ?getDescription@DestroyOperation@PositionTrackingDB@@UEBAPEBDXZ
    virtual char const* getDescription() const;

    // vIndex: 3, symbol: ?isAsync@AsyncOperationBase@PositionTrackingDB@@UEBA_NXZ
    virtual bool isAsync() const;

    // vIndex: 4, symbol: ?isComplete@AsyncOperationBase@PositionTrackingDB@@UEBA_NXZ
    virtual bool isComplete() const;

    // vIndex: 5, symbol:
    // ?_init@DestroyOperation@PositionTrackingDB@@MEAA_NV?$weak_ptr@VPositionTrackingDBServer@PositionTrackingDB@@@std@@AEAVTrackingRecord@2@@Z
    virtual bool
    _init(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&);

    // vIndex: 6, symbol:
    // ?_tick@DestroyOperation@PositionTrackingDB@@MEAA_NV?$weak_ptr@VPositionTrackingDBServer@PositionTrackingDB@@@std@@AEAVTrackingRecord@2@@Z
    virtual bool
    _tick(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&);

    // vIndex: 7, symbol:
    // ?_quit@AsyncOperationBase@PositionTrackingDB@@MEAA_NV?$weak_ptr@VPositionTrackingDBServer@PositionTrackingDB@@@std@@AEAVTrackingRecord@2@@Z
    virtual bool
    _quit(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&);

    // NOLINTEND
};

}; // namespace PositionTrackingDB
