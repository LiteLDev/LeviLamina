#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class LodestoneBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    LodestoneBlockActor& operator=(LodestoneBlockActor const&);
    LodestoneBlockActor(LodestoneBlockActor const&);
    LodestoneBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LodestoneBlockActor@@UEAA@XZ
    virtual ~LodestoneBlockActor() = default;

    // vIndex: 1, symbol: ?load@LodestoneBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@LodestoneBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@LodestoneBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 13, symbol: ?onRemoved@LodestoneBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onRemoved(class BlockSource& region);

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@LodestoneBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@LodestoneBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ??0LodestoneBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit LodestoneBlockActor(class BlockPos const& pos);

    // symbol: ?getTrackingHandle@LodestoneBlockActor@@QEBAAEBVPositionTrackingId@@XZ
    MCAPI class PositionTrackingId const& getTrackingHandle() const;

    // symbol: ?hasTrackingHandle@LodestoneBlockActor@@QEBA_NXZ
    MCAPI bool hasTrackingHandle() const;

    // symbol: ?setTrackingHandle@LodestoneBlockActor@@QEAA_NAEBVPositionTrackingId@@@Z
    MCAPI bool setTrackingHandle(class PositionTrackingId const& h);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?sTagName_Handle@LodestoneBlockActor@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sTagName_Handle;

    // NOLINTEND
};
