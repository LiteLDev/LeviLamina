#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/AmethystBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class AmethystClusterBlock : public ::AmethystBlock {
public:
    // prevent constructor by default
    AmethystClusterBlock& operator=(AmethystClusterBlock const&);
    AmethystClusterBlock(AmethystClusterBlock const&);
    AmethystClusterBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AmethystClusterBlock@@UEAA@XZ
    virtual ~AmethystClusterBlock() = default;

    // vIndex: 11, symbol: ?getVisualShape@AmethystClusterBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 23, symbol: ?canProvideSupport@AmethystClusterBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 61, symbol: ?checkIsPathable@AmethystClusterBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 84, symbol: ?mayPlace@AmethystClusterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar facing) const;

    // vIndex: 85, symbol: ?mayPlace@AmethystClusterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@AmethystClusterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 135, symbol: ?init@AmethystClusterBlock@@UEAAAEAVBlockLegacy@@XZ
    virtual class BlockLegacy& init();

    // vIndex: 147, symbol: ?tick@AmethystClusterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 153, symbol: ?canSurvive@AmethystClusterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0AmethystClusterBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHH@Z
    MCAPI AmethystClusterBlock(std::string const& nameId, int id, int height, int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_shapeFromDirection@AmethystClusterBlock@@AEBA?AVAABB@@H@Z
    MCAPI class AABB _shapeFromDirection(int facing) const;

    // NOLINTEND
};
