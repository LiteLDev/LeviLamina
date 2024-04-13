#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CampfireBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    CampfireBlock& operator=(CampfireBlock const&);
    CampfireBlock(CampfireBlock const&);
    CampfireBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CampfireBlock@@UEAA@XZ
    virtual ~CampfireBlock() = default;

    // vIndex: 20, symbol: ?hasVariableLighting@CampfireBlock@@UEBA_NXZ
    virtual bool hasVariableLighting() const;

    // vIndex: 23, symbol: ?canProvideSupport@CampfireBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 32, symbol: ?isWaterBlocking@CampfireBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@CampfireBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@CampfireBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 61, symbol: ?checkIsPathable@CampfireBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor& entity, class BlockPos const&, class BlockPos const& pathPos) const;

    // vIndex: 85, symbol: ?mayPlace@CampfireBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@CampfireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 95, symbol: ?asItemInstance@CampfireBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 129, symbol: ?canSpawnOn@CampfireBlock@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@CampfireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 136, symbol: ?getLightEmission@CampfireBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 142, symbol: ?onRemove@CampfireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 145, symbol: ?onPlace@CampfireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 151, symbol: ?use@CampfireBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 162, symbol: ?entityInside@CampfireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // symbol: ??0CampfireBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N_N@Z
    MCAPI CampfireBlock(std::string const& nameId, int id, bool spawnRandomParticles, bool);

    // symbol: ?isLit@CampfireBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isLit(class Block const& block);

    // symbol: ?tryDouseFire@CampfireBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@_N@Z
    MCAPI static bool
    tryDouseFire(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor, bool needsWater);

    // symbol: ?tryLightFire@CampfireBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    MCAPI static bool tryLightFire(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor);

    // NOLINTEND
};
