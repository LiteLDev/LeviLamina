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

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 27, symbol: __unk_vfn_27
    virtual void __unk_vfn_27();

    // vIndex: 28, symbol: __unk_vfn_28
    virtual void __unk_vfn_28();

    // vIndex: 29, symbol: __unk_vfn_29
    virtual void __unk_vfn_29();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 85, symbol: ?mayPlace@PointedDripstoneBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 98, symbol:
    // ?getPlacementBlock@PointedDripstoneBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 129, symbol: ?getVariant@PointedDripstoneBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 134, symbol:
    // ?animateTickBedrockLegacy@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 136, symbol: ?init@PointedDripstoneBlock@@UEAAAEAVBlockLegacy@@XZ
    virtual class BlockLegacy& init();

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 148, symbol: ?onFallOn@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
    virtual void
    onFallOn(class BlockSource& region, class BlockPos const& pos, class Actor& actor, float fallDistance) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 151, symbol: ?randomTick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 156, symbol: ?canSurvive@PointedDripstoneBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 168, symbol: ?getDustColor@PointedDripstoneBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
    virtual class mce::Color getDustColor(class Block const& block) const;

    // vIndex: 169, symbol:
    // ?getDustParticleName@PointedDripstoneBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string getDustParticleName(class Block const&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 171, symbol: ?onLand@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLand(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 173, symbol: ?startFalling@PointedDripstoneBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    // symbol: ?falling@PointedDripstoneBlock@@UEBA_NXZ
    MCVAPI bool falling() const;

    // symbol: ??0PointedDripstoneBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI PointedDripstoneBlock(std::string const& nameId, int);

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
