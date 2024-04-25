#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/DiodeBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class RepeaterBlock : public ::DiodeBlock {
public:
    // prevent constructor by default
    RepeaterBlock& operator=(RepeaterBlock const&);
    RepeaterBlock(RepeaterBlock const&);
    RepeaterBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RepeaterBlock@@UEAA@XZ
    virtual ~RepeaterBlock() = default;

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@RepeaterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@RepeaterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 75, symbol: ?isPreservingMediumWhenPlaced@RepeaterBlock@@UEBA_NPEBVBlockLegacy@@@Z
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const*) const;

    // vIndex: 85, symbol: ?mayPlace@RepeaterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@RepeaterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol: ?asItemInstance@RepeaterBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@RepeaterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 142, symbol: ?onRemove@RepeaterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 145, symbol: ?onPlace@RepeaterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@RepeaterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@RepeaterBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@RepeaterBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 153, symbol: ?canSurvive@RepeaterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 164, symbol: ?isLocked@RepeaterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isLocked(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 170, symbol: ?isAlternateInput@RepeaterBlock@@MEBA_NAEBVBlock@@@Z
    virtual bool isAlternateInput(class Block const& block) const;

    // vIndex: 174, symbol: ?getTurnOnDelay@RepeaterBlock@@MEBAHAEBVBlock@@@Z
    virtual int getTurnOnDelay(class Block const& block) const;

    // vIndex: 175, symbol: ?getOnBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
    virtual class Block const* getOnBlock(class Block const* block) const;

    // vIndex: 176, symbol: ?getOffBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
    virtual class Block const* getOffBlock(class Block const* block) const;

    // symbol: ??0RepeaterBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI RepeaterBlock(std::string const& nameId, int id, bool on);

    // symbol: ?updateDelay@RepeaterBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI void updateDelay(class BlockSource& region, class BlockPos const& pos, bool doIncrement) const;

    // symbol: ?DELAY_RENDER_OFFSETS@RepeaterBlock@@2QBMB
    MCAPI static float const DELAY_RENDER_OFFSETS[];

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DELAYS@RepeaterBlock@@0QBHB
    MCAPI static int const DELAYS[];

    // NOLINTEND
};
