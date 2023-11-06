#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class SculkSensorBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    SculkSensorBlockActor& operator=(SculkSensorBlockActor const&);
    SculkSensorBlockActor(SculkSensorBlockActor const&);
    SculkSensorBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SculkSensorBlockActor@@UEAA@XZ
    virtual ~SculkSensorBlockActor();

    // vIndex: 1, symbol: ?load@SculkSensorBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@SculkSensorBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@SculkSensorBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: ?onRemoved@SculkSensorBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onRemoved(class BlockSource&);

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // symbol: ??0SculkSensorBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit SculkSensorBlockActor(class BlockPos const&);

    // symbol:
    // ??0SculkSensorBlockActor@@QEAA@W4BlockActorType@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I$$QEAV?$unique_ptr@VSculkSensorVibrationConfig@@U?$default_delete@VSculkSensorVibrationConfig@@@std@@@4@@Z
    MCAPI
    SculkSensorBlockActor(::BlockActorType, class BlockPos const&, std::string const&, uint, std::unique_ptr<class SculkSensorVibrationConfig>&&);

    // symbol: ?getLatestReceivedVibrationFrequency@SculkSensorBlockActor@@QEBAHXZ
    MCAPI int getLatestReceivedVibrationFrequency() const;

    // NOLINTEND
};
