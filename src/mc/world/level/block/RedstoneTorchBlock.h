#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/TorchBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class RedstoneTorchBlock : public ::TorchBlock {
public:
    // prevent constructor by default
    RedstoneTorchBlock& operator=(RedstoneTorchBlock const&);
    RedstoneTorchBlock(RedstoneTorchBlock const&);
    RedstoneTorchBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RedstoneTorchBlock@@UEAA@XZ
    virtual ~RedstoneTorchBlock() = default;

    // vIndex: 46, symbol: ?isSignalSource@RedstoneTorchBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@RedstoneTorchBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol: ?asItemInstance@RedstoneTorchBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 129, symbol: ?canSpawnOn@RedstoneTorchBlock@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 133, symbol:
    // ?animateTickBedrockLegacy@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@RedstoneTorchBlock@@UEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 145, symbol: ?onPlace@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163, symbol: ?getTickDelay@RedstoneTorchBlock@@UEAAHXZ
    virtual int getTickDelay();

    // symbol: ??0RedstoneTorchBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI RedstoneTorchBlock(std::string const& nameId, int id, bool on);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_installCircuit@RedstoneTorchBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _installCircuit(class BlockSource& source, class BlockPos const& pos) const;

    // NOLINTEND
};
