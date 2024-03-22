#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/BigDripleafTilt.h"
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

class BigDripleafBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BigDripleafBlock& operator=(BigDripleafBlock const&);
    BigDripleafBlock(BigDripleafBlock const&);
    BigDripleafBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BigDripleafBlock@@UEAA@XZ
    virtual ~BigDripleafBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@BigDripleafBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11, symbol: ?getVisualShape@BigDripleafBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 17, symbol: ?onProjectileHit@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    virtual void
    onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    // vIndex: 32, symbol: ?isWaterBlocking@BigDripleafBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@BigDripleafBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@BigDripleafBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 61, symbol: ?checkIsPathable@BigDripleafBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor& entity, class BlockPos const&, class BlockPos const& pathPos) const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 79, symbol:
    // ?onFertilized@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 81, symbol: ?canBeFertilized@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 86, symbol: ?mayPlaceOn@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 135, symbol: ?init@BigDripleafBlock@@UEAAAEAVBlockLegacy@@XZ
    virtual class BlockLegacy& init();

    // vIndex: 145, symbol: ?onPlace@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 153, symbol: ?canSurvive@BigDripleafBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 162, symbol: ?entityInside@BigDripleafBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // symbol: ??0BigDripleafBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BigDripleafBlock(std::string const& nameId, int id);

    // symbol: ?placeWithRandomHeight@BigDripleafBlock@@SAXAEAVBlockSource@@AEAVRandom@@VBlockPos@@H@Z
    MCAPI static void
    placeWithRandomHeight(class BlockSource& region, class Random& random, class BlockPos, int facing);

    // symbol: ?MAX_DRIPLEAF_GROWTH_HEIGHT@BigDripleafBlock@@2HB
    MCAPI static int const MAX_DRIPLEAF_GROWTH_HEIGHT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findHeadPos@BigDripleafBlock@@AEBA?AVBlockPos@@AEAVBlockSource@@V2@@Z
    MCAPI class BlockPos _findHeadPos(class BlockSource& region, class BlockPos pos) const;

    // symbol: ?_resetTilt@BigDripleafBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _resetTilt(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_setTiltAndScheduleTick@BigDripleafBlock@@AEBAXW4BigDripleafTilt@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _setTiltAndScheduleTick(::BigDripleafTilt, class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
