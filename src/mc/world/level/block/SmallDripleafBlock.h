#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BushBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SmallDripleafBlock : public ::BushBlock {
public:
    // prevent constructor by default
    SmallDripleafBlock& operator=(SmallDripleafBlock const&);
    SmallDripleafBlock(SmallDripleafBlock const&);
    SmallDripleafBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SmallDripleafBlock@@UEAA@XZ
    virtual ~SmallDripleafBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@SmallDripleafBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@SmallDripleafBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 32, symbol: ?isWaterBlocking@SmallDripleafBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@SmallDripleafBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@SmallDripleafBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 79, symbol:
    // ?onFertilized@SmallDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* actor, ::FertilizerType fType)
        const;

    // vIndex: 81, symbol: ?canBeFertilized@SmallDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 85, symbol: ?mayPlace@SmallDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 86, symbol: ?mayPlaceOn@SmallDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@SmallDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 97, symbol: ?getPlacementBlock@SmallDripleafBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 135, symbol: ?init@SmallDripleafBlock@@UEAAAEAVBlockLegacy@@XZ
    virtual class BlockLegacy& init();

    // vIndex: 145, symbol: ?onPlace@SmallDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@SmallDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 153, symbol: ?canSurvive@SmallDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0SmallDripleafBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SmallDripleafBlock(std::string const& nameId, int id);

    // symbol: ?tryPlaceSmallDripleaf@SmallDripleafBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@HH@Z
    MCAPI static bool tryPlaceSmallDripleaf(class BlockSource& region, class BlockPos const& pos, int, int updateFlags);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isViablePlacePos@SmallDripleafBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _isViablePlacePos(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?placeUpperBlock@SmallDripleafBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI static void placeUpperBlock(class BlockSource& region, class BlockPos const& pos, int updateFlags);

    // NOLINTEND
};
