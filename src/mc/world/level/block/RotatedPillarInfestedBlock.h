#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/RotatedPillarBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class RotatedPillarInfestedBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    RotatedPillarInfestedBlock& operator=(RotatedPillarInfestedBlock const&);
    RotatedPillarInfestedBlock(RotatedPillarInfestedBlock const&);
    RotatedPillarInfestedBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RotatedPillarInfestedBlock@@UEAA@XZ
    virtual ~RotatedPillarInfestedBlock() = default;

    // vIndex: 97, symbol:
    // ?spawnAfterBreak@RotatedPillarInfestedBlock@@EEBAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@AEBUResourceDropsContext@@@Z
    virtual void
    spawnAfterBreak(class BlockSource&, class Block const&, class BlockPos const&, struct ResourceDropsContext const&)
        const;

    // vIndex: 163, symbol: ?getDustColor@AnvilBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
    virtual class mce::Color getDustColor(class Block const& block) const;

    // vIndex: 164, symbol:
    // ?_iterateCandles@AbstractCandleBlock@@MEBAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
    virtual void
    _iterateCandles(class Block const&, class BlockPos const&, std::function<void(class Vec3 const&, int)> callback)
        const;

    // vIndex: 165, symbol: ?getBaseSeed@BeetrootBlock@@UEBA?BVItemInstance@@XZ
    virtual class ItemInstance const getBaseSeed() const;

    // vIndex: 166, symbol: ?onLand@AnvilBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLand(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 167, symbol: ?isFreeToFall@FallingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isFreeToFall(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 168, symbol: ?startFalling@FallingBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    // symbol:
    // ??0RotatedPillarInfestedBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI RotatedPillarInfestedBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
