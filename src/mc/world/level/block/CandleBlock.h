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

class CandleBlock : public ::AbstractCandleBlock {
public:
    // prevent constructor by default
    CandleBlock& operator=(CandleBlock const&);
    CandleBlock(CandleBlock const&);
    CandleBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CandleBlock@@UEAA@XZ
    virtual ~CandleBlock() = default;

    // vIndex: 11, symbol: ?getVisualShape@CandleBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 23, symbol: ?canProvideSupport@CandleBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@CandleBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 95, symbol: ?asItemInstance@CandleBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@CandleBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@CandleBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 163, symbol: ?_getNumCandles@CandleBlock@@MEBAHAEBVBlock@@@Z
    virtual int _getNumCandles(class Block const& block) const;

    // vIndex: 164, symbol:
    // ?_iterateCandles@CandleBlock@@MEBAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
    virtual void _iterateCandles(
        class Block const&                          block,
        class BlockPos const&                       pos,
        std::function<void(class Vec3 const&, int)> callback
    ) const;

    // vIndex: 165, symbol: ?_tryLightOnFire@CandleBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void _tryLightOnFire(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor) const;

    // symbol: ??0CandleBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CandleBlock(std::string const& nameId, int id);

    // symbol: ?tryLightFire@CandleBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    MCAPI static bool tryLightFire(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_forEachCandle@CandleBlock@@CAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
    MCAPI static void _forEachCandle(
        class Block const&                          block,
        class BlockPos const&                       pos,
        std::function<void(class Vec3 const&, int)> callback
    );

    // NOLINTEND
};
