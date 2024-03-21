#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ComparatorBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    ComparatorBlock& operator=(ComparatorBlock const&);
    ComparatorBlock(ComparatorBlock const&);
    ComparatorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ComparatorBlock@@UEAA@XZ
    virtual ~ComparatorBlock() = default;

    // vIndex: 46, symbol: ?isSignalSource@ComparatorBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 53, symbol: ?getDirectSignal@ComparatorBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    virtual int getDirectSignal(class BlockSource& region, class BlockPos const& pos, int dir) const;

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@ComparatorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 75, symbol: ?isPreservingMediumWhenPlaced@ComparatorBlock@@UEBA_NPEBVBlockLegacy@@@Z
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const*) const;

    // vIndex: 85, symbol: ?mayPlace@ComparatorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol: ?asItemInstance@ComparatorBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 104, symbol: ?triggerEvent@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@HH@Z
    virtual void triggerEvent(class BlockSource& region, class BlockPos const& pos, int b0, int b1) const;

    // vIndex: 128, symbol: ?getVariant@ComparatorBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 129, symbol: ?canSpawnOn@ComparatorBlock@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 145, symbol: ?onPlace@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@ComparatorBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@ComparatorBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 153, symbol: ?canSurvive@ComparatorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0ComparatorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI ComparatorBlock(std::string const& nameId, int id, bool on);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_installCircuit@ComparatorBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI void _installCircuit(class BlockSource& region, class BlockPos const& pos, bool loading) const;

    // symbol: ?_refreshOutputState@ComparatorBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI void _refreshOutputState(class BlockSource& region, class BlockPos const& pos, int strength) const;

    // NOLINTEND
};
