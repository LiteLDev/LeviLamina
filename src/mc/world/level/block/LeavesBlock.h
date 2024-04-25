#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LeavesBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    LeavesBlock& operator=(LeavesBlock const&);
    LeavesBlock(LeavesBlock const&);
    LeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LeavesBlock@@UEAA@XZ
    virtual ~LeavesBlock();

    // vIndex: 23, symbol: ?canProvideSupport@LeavesBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 24, symbol: ?canProvideMultifaceSupport@LeavesBlock@@UEBA_NAEBVBlock@@E@Z
    virtual bool canProvideMultifaceSupport(class Block const&, uchar) const;

    // vIndex: 56, symbol: ?canContainLiquid@LeavesBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@LeavesBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 97, symbol: ?getPlacementBlock@LeavesBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int itemValue) const;

    // vIndex: 121, symbol: ?getColor@LeavesBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 124, symbol: ?isSeasonTinted@LeavesBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isSeasonTinted(class Block const& block, class BlockSource& region, class BlockPos const& p) const;

    // vIndex: 125, symbol: ?onGraphicsModeChanged@LeavesBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 142, symbol: ?onRemove@LeavesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148, symbol: ?randomTick@LeavesBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 155, symbol:
    // ?getRenderLayer@LeavesBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const&, class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 159, symbol: ?getMapColor@LeavesBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // symbol:
    // ??0LeavesBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$WeakPtr@$$CBVBlockLegacy@@@@@Z
    MCAPI LeavesBlock(std::string const& nameId, int id, class WeakPtr<class BlockLegacy const> sapling);

    // symbol: ?getSeasonsColor@LeavesBlock@@QEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@HH@Z
    MCAPI class mce::Color
    getSeasonsColor(class BlockSource& region, class BlockPos const& pos, int startColumn, int endColumn) const;

    // symbol: ?runDecay@LeavesBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI static void runDecay(class BlockSource& region, class BlockPos const& pos, int range);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_isTransparent@LeavesBlock@@KA_NAEBVBlock@@AEBW4BlockProperty@@@Z
    MCAPI static bool _isTransparent(class Block const& block, ::BlockProperty const&);

    // NOLINTEND
};
