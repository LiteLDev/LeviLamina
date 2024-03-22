#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/AbstractCandleBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CandleCakeBlock : public ::AbstractCandleBlock {
public:
    // prevent constructor by default
    CandleCakeBlock& operator=(CandleCakeBlock const&);
    CandleCakeBlock(CandleCakeBlock const&);
    CandleCakeBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CandleCakeBlock@@UEAA@XZ
    virtual ~CandleCakeBlock() = default;

    // vIndex: 11, symbol: ?getVisualShape@CandleCakeBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 44, symbol: ?isCandleCakeBlock@CandleCakeBlock@@UEBA_NXZ
    virtual bool isCandleCakeBlock() const;

    // vIndex: 61, symbol: ?checkIsPathable@CandleCakeBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 84, symbol: ?mayPlace@CandleCakeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 92, symbol: ?neighborChanged@CandleCakeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol: ?asItemInstance@CandleCakeBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 110, symbol: ?hasComparatorSignal@CandleCakeBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@CandleCakeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 151, symbol: ?use@CandleCakeBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 153, symbol: ?canSurvive@CandleCakeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163, symbol: ?_getNumCandles@CandleCakeBlock@@MEBAHAEBVBlock@@@Z
    virtual int _getNumCandles(class Block const&) const;

    // vIndex: 164, symbol:
    // ?_iterateCandles@CandleCakeBlock@@MEBAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
    virtual void _iterateCandles(
        class Block const&                          block,
        class BlockPos const&                       pos,
        std::function<void(class Vec3 const&, int)> callback
    ) const;

    // vIndex: 165, symbol: ?_tryLightOnFire@CandleCakeBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void _tryLightOnFire(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor) const;

    // symbol: ??0CandleCakeBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CandleCakeBlock(std::string const& nameId, int id);

    // symbol: ?getCandleCakeFromCandle@CandleCakeBlock@@SAAEBVBlock@@AEBV2@@Z
    MCAPI static class Block const& getCandleCakeFromCandle(class Block const&);

    // symbol: ?getCandleFromCandleCake@CandleCakeBlock@@SAAEBVBlock@@AEBV2@@Z
    MCAPI static class Block const& getCandleFromCandleCake(class Block const&);

    // symbol: ?tryLightFire@CandleCakeBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    MCAPI static bool tryLightFire(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_forEachCandle@CandleCakeBlock@@CAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
    MCAPI static void
    _forEachCandle(class Block const&, class BlockPos const& pos, std::function<void(class Vec3 const&, int)> callback);

    // NOLINTEND
};
