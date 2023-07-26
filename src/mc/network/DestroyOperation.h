#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/AsyncOperationBase.h"

// auto generated forward declare list
// clang-format off
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

namespace PositionTrackingDB {

class DestroyOperation : public ::PositionTrackingDB::AsyncOperationBase {

public:
    // prevent constructor by default
    DestroyOperation& operator=(DestroyOperation const&) = delete;
    DestroyOperation(DestroyOperation const&)            = delete;
    DestroyOperation()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?tick\@AsyncOperationBase\@PositionTrackingDB\@\@UEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@AEAVTrackingRecord\@2\@\@Z
     */
    virtual bool
    tick(class std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getDescription\@DestroyOperation\@PositionTrackingDB\@\@UEBAPEBDXZ
     */
    virtual char const* getDescription() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?isAsync\@AsyncOperationBase\@PositionTrackingDB\@\@UEBA_NXZ
     */
    virtual bool isAsync() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?isComplete\@AsyncOperationBase\@PositionTrackingDB\@\@UEBA_NXZ
     */
    virtual bool isComplete() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?_init\@DestroyOperation\@PositionTrackingDB\@\@MEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@AEAVTrackingRecord\@2\@\@Z
     */
    virtual bool
    _init(class std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?_tick\@DestroyOperation\@PositionTrackingDB\@\@MEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@AEAVTrackingRecord\@2\@\@Z
     */
    virtual bool
    _tick(class std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_quit\@AsyncOperationBase\@PositionTrackingDB\@\@MEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@AEAVTrackingRecord\@2\@\@Z
     */
    virtual bool
    _quit(class std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&); // NOLINT
};

}; // namespace PositionTrackingDB
