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

class AbstractCandleBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    AbstractCandleBlock& operator=(AbstractCandleBlock const&);
    AbstractCandleBlock(AbstractCandleBlock const&);
    AbstractCandleBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AbstractCandleBlock@@UEAA@XZ
    virtual ~AbstractCandleBlock();

    // vIndex: 20, symbol: ?hasVariableLighting@AbstractCandleBlock@@UEBA_NXZ
    virtual bool hasVariableLighting() const;

    // vIndex: 32, symbol: ?isWaterBlocking@AbstractCandleBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 56, symbol: ?canContainLiquid@AbstractCandleBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 92, symbol: ?neighborChanged@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 133, symbol:
    // ?animateTickBedrockLegacy@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 136, symbol: ?getLightEmission@AbstractCandleBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 147, symbol: ?tick@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 160, symbol:
    // ?_onHitByActivatingAttack@AbstractCandleBlock@@EEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void _onHitByActivatingAttack(class BlockSource&, class BlockPos const&, class Actor*) const;

    // vIndex: 162, symbol: ?entityInside@AbstractCandleBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // vIndex: 163, symbol: ?_getNumCandles@AbstractCandleBlock@@MEBAHAEBVBlock@@@Z
    virtual int _getNumCandles(class Block const&) const;

    // vIndex: 164, symbol:
    // ?_iterateCandles@AbstractCandleBlock@@MEBAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
    virtual void
    _iterateCandles(class Block const&, class BlockPos const&, std::function<void(class Vec3 const&, int)> callback)
        const;

    // vIndex: 165, symbol: ?_tryLightOnFire@AbstractCandleBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void _tryLightOnFire(class BlockSource&, class BlockPos const&, class Actor*) const;

    // symbol:
    // ??0AbstractCandleBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI AbstractCandleBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_checkForWaterlogging@AbstractCandleBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _checkForWaterlogging(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_extinguish@AbstractCandleBlock@@IEBAXPEAVActor@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void
    _extinguish(class Actor*, class Block const& block, class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_canBeLit@AbstractCandleBlock@@KA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _canBeLit(class Block const& block, class BlockSource& region, class BlockPos const& pos);

    // symbol: ?_isLit@AbstractCandleBlock@@KA_NAEBVBlock@@@Z
    MCAPI static bool _isLit(class Block const& block);

    // NOLINTEND
};
