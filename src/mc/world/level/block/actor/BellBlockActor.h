#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/actor/BlockActor.h"

class BellBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    BellBlockActor& operator=(BellBlockActor const&);
    BellBlockActor(BellBlockActor const&);
    BellBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BellBlockActor@@UEAA@XZ
    virtual ~BellBlockActor() = default;

    // vIndex: 1, symbol: ?load@BellBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@BellBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@BellBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@BellBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@BellBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ?ejectItem@BellBlockActor@@QEBAXAEBVBlockPos@@AEAVActor@@@Z
    MCAPI void ejectItem(class BlockPos const& pos, class Actor& actor) const;

    // symbol: ?isRinging@BellBlockActor@@QEBA_NXZ
    MCAPI bool isRinging() const;

    // symbol: ?ring@BellBlockActor@@QEAA_NW4Type@Direction@@AEAVBlockSource@@PEAVActor@@_N@Z
    MCAPI bool
    ring(::Direction::Type direction, class BlockSource& region, class Actor* sourceActor, bool alarmNearbyDwellers);

    // NOLINTEND
};
