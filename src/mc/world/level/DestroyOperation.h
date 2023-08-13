#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/AsyncOperationBase.h"

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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?tick\@AsyncOperationBase\@PositionTrackingDB\@\@UEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@AEAVTrackingRecord\@2\@\@Z
     */
    virtual bool
    tick(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&);
    /**
     * @vftbl 2
     * @symbol ?getDescription\@DestroyOperation\@PositionTrackingDB\@\@UEBAPEBDXZ
     */
    virtual char const* getDescription() const;
    /**
     * @vftbl 3
     * @symbol ?isAsync\@AsyncOperationBase\@PositionTrackingDB\@\@UEBA_NXZ
     */
    virtual bool isAsync() const;
    /**
     * @vftbl 4
     * @symbol ?isComplete\@AsyncOperationBase\@PositionTrackingDB\@\@UEBA_NXZ
     */
    virtual bool isComplete() const;
    /**
     * @vftbl 5
     * @symbol
     * ?_init\@DestroyOperation\@PositionTrackingDB\@\@MEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@AEAVTrackingRecord\@2\@\@Z
     */
    virtual bool
    _init(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&);
    /**
     * @vftbl 6
     * @symbol
     * ?_tick\@DestroyOperation\@PositionTrackingDB\@\@MEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@AEAVTrackingRecord\@2\@\@Z
     */
    virtual bool
    _tick(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&);
    /**
     * @vftbl 7
     * @symbol
     * ?_quit\@AsyncOperationBase\@PositionTrackingDB\@\@MEAA_NV?$weak_ptr\@VPositionTrackingDBServer\@PositionTrackingDB\@\@\@std\@\@AEAVTrackingRecord\@2\@\@Z
     */
    virtual bool
    _quit(std::weak_ptr<class PositionTrackingDB::PositionTrackingDBServer>, class PositionTrackingDB::TrackingRecord&);
    // NOLINTEND
};

}; // namespace PositionTrackingDB
