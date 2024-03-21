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

class LiquidBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    LiquidBlock& operator=(LiquidBlock const&);
    LiquidBlock(LiquidBlock const&);
    LiquidBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LiquidBlock@@UEAA@XZ
    virtual ~LiquidBlock();

    // vIndex: 5, symbol:
    // ?getCollisionShape@LiquidBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 56, symbol: ?canContainLiquid@LiquidBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 61, symbol: ?checkIsPathable@LiquidBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 83, symbol: ?mayPick@LiquidBlock@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
    virtual bool mayPick(class BlockSource const& region, class Block const& block, bool liquid) const;

    // vIndex: 92, symbol: ?neighborChanged@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 120, symbol: ?getColor@LiquidBlock@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const& block) const;

    // vIndex: 122, symbol: ?getColorAtPos@LiquidBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getColorAtPos(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 125, symbol: ?onGraphicsModeChanged@LiquidBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 145, symbol: ?onPlace@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 159, symbol: ?getMapColor@LiquidBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // symbol: ??0LiquidBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI LiquidBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?getTickDelay@LiquidBlock@@QEBAHAEAVBlockSource@@@Z
    MCAPI int getTickDelay(class BlockSource& region) const;

    // symbol: ?getHeightFromDepth@LiquidBlock@@SAMH@Z
    MCAPI static float getHeightFromDepth(int depth);

    // symbol: ?handleEntityInside@LiquidBlock@@SAXAEBVIConstBlockSource@@AEBVBlockPos@@AEAVVec3@@AEBVMaterial@@@Z
    MCAPI static void handleEntityInside(
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class Vec3&                    current,
        class Material const&          material
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?emitFizzParticle@LiquidBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void emitFizzParticle(class BlockSource& region, class BlockPos const& p) const;

    // symbol: ?solidify@LiquidBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCAPI void
    solidify(class BlockSource& region, class BlockPos const& pos, class BlockPos const& changedNeighbor) const;

    // symbol: ?trySpreadFire@LiquidBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI void trySpreadFire(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ?getDepth@LiquidBlock@@KAHAEBVIConstBlockSource@@AEBVBlockPos@@AEBVMaterial@@@Z
    MCAPI static int
    getDepth(class IConstBlockSource const& region, class BlockPos const& pos, class Material const& material);

    // symbol: ?getRenderedDepth@LiquidBlock@@KAHAEBVIConstBlockSource@@AEBVBlockPos@@AEBVMaterial@@@Z
    MCAPI static int
    getRenderedDepth(class IConstBlockSource const& region, class BlockPos const& pos, class Material const& material);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_solidify@LiquidBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCAPI void
    _solidify(class BlockSource& region, class BlockPos const& pos, class BlockPos const& changedNeighbor) const;

    // symbol: ?_getFlow@LiquidBlock@@CA?AVVec3@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVMaterial@@@Z
    MCAPI static class Vec3
    _getFlow(class IConstBlockSource const& region, class BlockPos const& pos, class Material const& material);

    // NOLINTEND
};
