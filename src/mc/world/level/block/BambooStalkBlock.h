#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/LeafSize.h"
#include "mc/enums/ShapeType.h"
#include "mc/enums/StalkThickness.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BambooStalkBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BambooStalkBlock& operator=(BambooStalkBlock const&);
    BambooStalkBlock(BambooStalkBlock const&);
    BambooStalkBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BambooStalkBlock@@UEAA@XZ
    virtual ~BambooStalkBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@BambooStalkBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@BambooStalkBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 11, symbol: ?getVisualShape@BambooStalkBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 16, symbol: ?randomlyModifyPosition@BambooStalkBlock@@UEBA?AVVec3@@AEBVBlockPos@@@Z
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    // vIndex: 32, symbol: ?isWaterBlocking@BambooStalkBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 49, symbol: ?isValidAuxValue@BambooStalkBlock@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 56, symbol: ?canContainLiquid@BambooStalkBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 79, symbol:
    // ?onFertilized@BambooStalkBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 80, symbol: ?mayConsumeFertilizer@BambooStalkBlock@@UEBA_NAEAVBlockSource@@@Z
    virtual bool mayConsumeFertilizer(class BlockSource& region) const;

    // vIndex: 81, symbol: ?canBeFertilized@BambooStalkBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 85, symbol: ?mayPlace@BambooStalkBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@BambooStalkBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 97, symbol: ?getPlacementBlock@BambooStalkBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const& by, class BlockPos const& pos, uchar, class Vec3 const&, int) const;

    // vIndex: 145, symbol: ?onPlace@BambooStalkBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@BambooStalkBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 148, symbol: ?randomTick@BambooStalkBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 153, symbol: ?canSurvive@BambooStalkBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0BambooStalkBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BambooStalkBlock(std::string const& nameId, int id);

    // symbol: ?getMaxHeight@BambooStalkBlock@@SAHAEBVBlockPos@@@Z
    MCAPI static int getMaxHeight(class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_determineNewBlockState@BambooStalkBlock@@AEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI class Block const& _determineNewBlockState(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_getLeafSize@BambooStalkBlock@@AEBA?AW4LeafSize@@AEBVBlock@@@Z
    MCAPI ::LeafSize _getLeafSize(class Block const& block) const;

    // symbol: ?_getShape@BambooStalkBlock@@AEBAAEBVAABB@@AEBVBlockPos@@AEBVBlock@@AEAV2@@Z
    MCAPI class AABB const& _getShape(class BlockPos const&, class Block const&, class AABB&) const;

    // symbol: ?_getStalkThickness@BambooStalkBlock@@AEBA?AW4StalkThickness@@AEBVBlock@@@Z
    MCAPI ::StalkThickness _getStalkThickness(class Block const& block) const;

    // NOLINTEND
};
