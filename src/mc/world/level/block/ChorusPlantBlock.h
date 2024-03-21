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

class ChorusPlantBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ChorusPlantBlock& operator=(ChorusPlantBlock const&);
    ChorusPlantBlock(ChorusPlantBlock const&);
    ChorusPlantBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ChorusPlantBlock@@UEAA@XZ
    virtual ~ChorusPlantBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@ChorusPlantBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@ChorusPlantBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 23, symbol: ?canProvideSupport@ChorusPlantBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 32, symbol: ?isWaterBlocking@ChorusPlantBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@ChorusPlantBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@ChorusPlantBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 61, symbol: ?checkIsPathable@ChorusPlantBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 85, symbol: ?mayPlace@ChorusPlantBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@ChorusPlantBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 147, symbol: ?tick@ChorusPlantBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 153, symbol: ?canSurvive@ChorusPlantBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0ChorusPlantBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ChorusPlantBlock(std::string const& nameId, int id);

    // symbol: ?canGrowChorus@ChorusPlantBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool canGrowChorus(class Block const& block);

    // symbol: ?PLANT_ITEM_DIMENSION@ChorusPlantBlock@@2MB
    MCAPI static float const PLANT_ITEM_DIMENSION;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getShape@ChorusPlantBlock@@AEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    MCAPI class AABB const& _getShape(class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // NOLINTEND
};
