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

class BushBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BushBlock& operator=(BushBlock const&);
    BushBlock(BushBlock const&);
    BushBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BushBlock@@UEAA@XZ
    virtual ~BushBlock();

    // vIndex: 5, symbol:
    // ?getCollisionShape@BushBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@BushBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 86, symbol: ?mayPlaceOn@BushBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@BushBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 147, symbol: ?tick@BushBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 153, symbol: ?canSurvive@BushBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163, symbol: ?checkAlive@BushBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void checkAlive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 164, symbol: ?setGrowth@BushBlock@@MEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@GH@Z
    virtual class Block const& setGrowth(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    baseBlock,
        ushort,
        int updateFlags
    ) const;

    // symbol: ??0BushBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI BushBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?growCrops@BushBlock@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@W4FertilizerType@@@Z
    MCAPI bool growCrops(class BlockSource& region, class BlockPos const& pos, ::FertilizerType fType) const;

    // symbol: ?BUSH_VISUAL_SHAPE_MAX@BushBlock@@2VVec3@@B
    MCAPI static class Vec3 const BUSH_VISUAL_SHAPE_MAX;

    // symbol: ?BUSH_VISUAL_SHAPE_MIN@BushBlock@@2VVec3@@B
    MCAPI static class Vec3 const BUSH_VISUAL_SHAPE_MIN;

    // NOLINTEND
};
