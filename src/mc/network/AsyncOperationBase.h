#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class AsyncOperationBase {

public:
    // prevent constructor by default
    AsyncOperationBase& operator=(AsyncOperationBase const&) = delete;
    AsyncOperationBase(AsyncOperationBase const&)            = delete;
    AsyncOperationBase()                                     = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POSITIONTRACKINGDB_ASYNCOPERATIONBASE
    /**
     * @symbol
     * ?_quit\@AsyncOperationBase\@PositionTrackingDB\@\@MEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@AEAVTrackingRecord\@2\@\@Z
     */
    MCVAPI bool
    _quit(class std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&); // NOLINT
    /**
     * @symbol ?isAsync\@AsyncOperationBase\@PositionTrackingDB\@\@UEBA_NXZ
     */
    MCVAPI bool isAsync() const; // NOLINT
    /**
     * @symbol ?isComplete\@AsyncOperationBase\@PositionTrackingDB\@\@UEBA_NXZ
     */
    MCVAPI bool isComplete() const; // NOLINT
    /**
     * @symbol
     * ?tick\@AsyncOperationBase\@PositionTrackingDB\@\@UEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@AEAVTrackingRecord\@2\@\@Z
     */
    MCVAPI bool
    tick(class std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&); // NOLINT
#endif
};

}; // namespace PositionTrackingDB
