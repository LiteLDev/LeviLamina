#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
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
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@SculkSensorBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@SculkSensorBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 13, symbol: ?onRemoved@SculkSensorBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onRemoved(class BlockSource& region);

    // symbol: ??0SculkSensorBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit SculkSensorBlockActor(class BlockPos const& pos);

    // symbol:
    // ??0SculkSensorBlockActor@@QEAA@W4BlockActorType@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I$$QEAV?$unique_ptr@VSculkSensorVibrationConfig@@U?$default_delete@VSculkSensorVibrationConfig@@@std@@@4@@Z
    MCAPI
    SculkSensorBlockActor(::BlockActorType type, class BlockPos const& pos, std::string const& id, uint, std::unique_ptr<class SculkSensorVibrationConfig>&&);

    // symbol: ?getLatestReceivedVibrationFrequency@SculkSensorBlockActor@@QEBAHXZ
    MCAPI int getLatestReceivedVibrationFrequency() const;

    // NOLINTEND
};
