#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/DripstoneThickness.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/ParticleType.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/item/FallingBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { struct BlockFallOnEvent; }
namespace mce { class Color; }
// clang-format on

class PointedDripstoneBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    PointedDripstoneBlock& operator=(PointedDripstoneBlock const&);
    PointedDripstoneBlock(PointedDripstoneBlock const&);
    PointedDripstoneBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PointedDripstoneBlock@@UEAA@XZ
    virtual ~PointedDripstoneBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@PointedDripstoneBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@PointedDripstoneBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 11, symbol: ?getVisualShape@PointedDripstoneBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 16, symbol: ?randomlyModifyPosition@PointedDripstoneBlock@@UEBA?AVVec3@@AEBVBlockPos@@@Z
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    // vIndex: 17, symbol: ?onProjectileHit@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    virtual void
    onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const& projectile) const;

    // vIndex: 85, symbol: ?mayPlace@PointedDripstoneBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 97, symbol:
    // ?getPlacementBlock@PointedDripstoneBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 128, symbol: ?getVariant@PointedDripstoneBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 133, symbol:
    // ?animateTickBedrockLegacy@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 135, symbol: ?init@PointedDripstoneBlock@@UEAAAEAVBlockLegacy@@XZ
    virtual class BlockLegacy& init();

    // vIndex: 141, symbol: ?_addHardCodedBlockComponents@PointedDripstoneBlock@@MEAAXAEBVExperiments@@@Z
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 147, symbol: ?tick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 148, symbol: ?randomTick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 153, symbol: ?canSurvive@PointedDripstoneBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163, symbol: ?getDustColor@PointedDripstoneBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
    virtual class mce::Color getDustColor(class Block const& block) const;

    // vIndex: 164, symbol:
    // ?getDustParticleName@PointedDripstoneBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string getDustParticleName(class Block const&) const;

    // vIndex: 165, symbol: ?falling@PointedDripstoneBlock@@UEBA_NXZ
    virtual bool falling() const;

    // vIndex: 166, symbol: ?onLand@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLand(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 168, symbol: ?startFalling@PointedDripstoneBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    // symbol: ??0PointedDripstoneBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI PointedDripstoneBlock(std::string const& nameId, int id);

    // symbol: ?onFallOn@PointedDripstoneBlock@@QEBAXAEAUBlockFallOnEvent@BlockEvents@@@Z
    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent&) const;

    // symbol: ?addDripParticle@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@W4ParticleType@@@Z
    MCAPI static void
    addDripParticle(class BlockSource& region, class BlockPos const& pos, ::ParticleType particleType);

    // symbol: ?canGrow@PointedDripstoneBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCAPI static bool canGrow(class BlockSource& region, class BlockPos const& pos, class BlockPos const&);

    // symbol: ?fillCauldron@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void fillCauldron(class BlockSource& region, class BlockPos const& pos);

    // symbol:
    // ?findStalactiteTipAboveCauldron@PointedDripstoneBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static std::optional<class BlockPos>
    findStalactiteTipAboveCauldron(class BlockSource& region, class BlockPos const&);

    // symbol:
    // ?getCauldronFillLiquidType@PointedDripstoneBlock@@SA?AV?$optional@W4MaterialType@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static std::optional<::MaterialType>
    getCauldronFillLiquidType(class BlockSource& region, class BlockPos const& pos);

    // symbol:
    // ?getStalactiteTipBelowFillSource@PointedDripstoneBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static std::optional<class BlockPos>
    getStalactiteTipBelowFillSource(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?growStalactite@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void growStalactite(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?growStalagmite@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void growStalagmite(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?isPointedDripstoneWithDirection@PointedDripstoneBlock@@SA_NAEBVBlock@@E@Z
    MCAPI static bool isPointedDripstoneWithDirection(class Block const& block, uchar);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_updateBlockThickness@PointedDripstoneBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _updateBlockThickness(class BlockSource& region, class BlockPos const& pos) const;

    // symbol:
    // ?_calculateDripstoneThickness@PointedDripstoneBlock@@CA?AW4DripstoneThickness@@AEAVBlockSource@@AEBVBlockPos@@E_N@Z
    MCAPI static ::DripstoneThickness
    _calculateDripstoneThickness(class BlockSource& region, class BlockPos const& pos, uchar, bool);

    // symbol: ?_canDrip@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _canDrip(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?_canFillCauldron@PointedDripstoneBlock@@CA_NAEBVBlock@@@Z
    MCAPI static bool _canFillCauldron(class Block const& block);

    // symbol: ?_canTipGrow@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _canTipGrow(class BlockSource& region, class BlockPos const&);

    // symbol: ?_createDripstone@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@EW4DripstoneThickness@@@Z
    MCAPI static void _createDripstone(
        class BlockSource&    region,
        class BlockPos const& pos,
        uchar                 direction,
        ::DripstoneThickness  thickness
    );

    // symbol: ?_createMergedTips@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI static void _createMergedTips(class BlockSource& region, class Block const&, class BlockPos const&);

    // symbol:
    // ?_findBlockVertically@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@EV?$function@$$A6A_NAEAVBlockSource@@AEBVBlockPos@@@Z@3@2H@Z
    MCAPI static std::optional<class BlockPos> _findBlockVertically(
        class BlockSource&    region,
        class BlockPos const& pos,
        uchar,
        std::function<bool(class BlockSource&, class BlockPos const&)>,
        std::function<bool(class BlockSource&, class BlockPos const&)>,
        int
    );

    // symbol:
    // ?_findRootBlock@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI static std::optional<class BlockPos>
    _findRootBlock(class BlockSource& region, class BlockPos const& pos, int);

    // symbol: ?_findTip@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@EH_N@Z
    MCAPI static std::optional<class BlockPos>
    _findTip(class BlockSource& region, class BlockPos const& pos, uchar, int, bool);

    // symbol:
    // ?_getBlockAboveStalactiteRoot@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static std::optional<class BlockPos>
    _getBlockAboveStalactiteRoot(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?_getRandomBlockPositionOffset@PointedDripstoneBlock@@CA?AVVec3@@AEBVBlockPos@@@Z
    MCAPI static class Vec3 _getRandomBlockPositionOffset(class BlockPos const& pos);

    // symbol: ?_grow@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI static void _grow(class BlockSource& region, class BlockPos const&, uchar);

    // symbol: ?_growStalagmiteBelow@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void _growStalagmiteBelow(class BlockSource& region, class BlockPos const&);

    // symbol: ?_isStalactiteBase@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _isStalactiteBase(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?_isTip@PointedDripstoneBlock@@CA_NAEBVBlock@@E_N@Z
    MCAPI static bool _isTip(class Block const& block, uchar, bool);

    // symbol: ?_isValidPointedDripstonePlacement@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI static bool _isValidPointedDripstonePlacement(class BlockSource& region, class BlockPos const& pos, bool);

    // symbol: ?_mayPlaceHanging@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _mayPlaceHanging(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?_mayPlaceStanding@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _mayPlaceStanding(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
