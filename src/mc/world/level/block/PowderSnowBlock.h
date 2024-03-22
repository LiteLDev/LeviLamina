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
namespace BlockEvents { struct BlockFallOnEvent; }
namespace mce { class Color; }
// clang-format on

class PowderSnowBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    PowderSnowBlock& operator=(PowderSnowBlock const&);
    PowderSnowBlock(PowderSnowBlock const&);
    PowderSnowBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PowderSnowBlock@@UEAA@XZ
    virtual ~PowderSnowBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@PowderSnowBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 23, symbol: ?canProvideSupport@PowderSnowBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 25, symbol: ?canConnect@PowderSnowBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 32, symbol: ?isWaterBlocking@PowderSnowBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 54, symbol: ?canBeDestroyedByWaterSpread@PowderSnowBlock@@UEBA_NXZ
    virtual bool canBeDestroyedByWaterSpread() const;

    // vIndex: 56, symbol: ?canContainLiquid@PowderSnowBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@PowderSnowBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 95, symbol: ?asItemInstance@PowderSnowBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 116, symbol: ?causesFreezeEffect@PowderSnowBlock@@UEBA_NXZ
    virtual bool causesFreezeEffect() const;

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@PowderSnowBlock@@MEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // symbol:
    // ??0PowderSnowBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI PowderSnowBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?onFallOn@PowderSnowBlock@@QEBAXAEAUBlockFallOnEvent@BlockEvents@@@Z
    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent&) const;

    // symbol: ?canWalkOnTop@PowderSnowBlock@@SA_NAEBVGetCollisionShapeInterface@@@Z
    MCAPI static bool canWalkOnTop(class GetCollisionShapeInterface const& actor);

    // symbol: ?clearFire@PowderSnowBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    MCAPI static void clearFire(class BlockSource& region, class BlockPos const& pos, class Block const& block);

    // symbol: ?spawnPowderSnowParticles@PowderSnowBlock@@SAXAEAVLevel@@AEBVBlockPos@@@Z
    MCAPI static void spawnPowderSnowParticles(class Level& level, class BlockPos const& pos);

    // NOLINTEND
};
