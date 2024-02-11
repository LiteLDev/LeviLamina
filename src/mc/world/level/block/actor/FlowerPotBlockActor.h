#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class FlowerPotBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    FlowerPotBlockActor& operator=(FlowerPotBlockActor const&);
    FlowerPotBlockActor(FlowerPotBlockActor const&);
    FlowerPotBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FlowerPotBlockActor@@UEAA@XZ
    virtual ~FlowerPotBlockActor() = default;

    // vIndex: 1, symbol: ?load@FlowerPotBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@FlowerPotBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 8, symbol: ?onChanged@FlowerPotBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource& region);

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@FlowerPotBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@FlowerPotBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ??0FlowerPotBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit FlowerPotBlockActor(class BlockPos const& pos);

    // symbol: ?getPlantItem@FlowerPotBlockActor@@QEBAPEBVBlock@@XZ
    MCAPI class Block const* getPlantItem() const;

    // symbol: ?setPlantItem@FlowerPotBlockActor@@QEAAXPEBVBlock@@@Z
    MCAPI void setPlantItem(class Block const* plant);

    // NOLINTEND
};
