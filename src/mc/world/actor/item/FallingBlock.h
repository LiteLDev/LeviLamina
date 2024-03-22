#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class FallingBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    FallingBlock& operator=(FallingBlock const&);
    FallingBlock(FallingBlock const&);
    FallingBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FallingBlock@@UEAA@XZ
    virtual ~FallingBlock();

    // vIndex: 92, symbol: ?neighborChanged@FallingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@FallingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 145, symbol: ?onPlace@FallingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@FallingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 163, symbol: ?getDustColor@AnvilBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
    virtual class mce::Color getDustColor(class Block const& block) const = 0;

    // vIndex: 164, symbol:
    // ?getDustParticleName@AnvilBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string getDustParticleName(class Block const&) const = 0;

    // vIndex: 165, symbol: ?falling@FallingBlock@@UEBA_NXZ
    virtual bool falling() const;

    // vIndex: 166, symbol: ?onLand@FallingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLand(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 167, symbol: ?isFreeToFall@FallingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isFreeToFall(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 168, symbol: ?startFalling@FallingBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    // symbol: ??0FallingBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI FallingBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?triggerFallCheck@FallingBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void triggerFallCheck(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_tickBlocksAround2D@FallingBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    MCAPI void
    _tickBlocksAround2D(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock) const;

    // symbol: ?checkSlide@FallingBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void checkSlide(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
