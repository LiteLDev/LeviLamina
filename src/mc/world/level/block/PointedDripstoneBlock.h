#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/DripstoneThickness.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/ParticleType.h"
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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 8, symbol:
    // ?getAABB@PointedDripstoneBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;

    // vIndex: 12, symbol: ?getVisualShape@PointedDripstoneBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 17, symbol: ?randomlyModifyPosition@PointedDripstoneBlock@@UEBA?AVVec3@@AEBVBlockPos@@@Z
    virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;

    // vIndex: 18, symbol: ?onProjectileHit@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

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

    // vIndex: 46, symbol: __unk_vfn_46
    virtual void __unk_vfn_46();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 49, symbol: __unk_vfn_49
    virtual void __unk_vfn_49();

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 84, symbol: __unk_vfn_84
    virtual void __unk_vfn_84();

    // vIndex: 94, symbol: ?mayPlace@PointedDripstoneBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 101, symbol: ?neighborChanged@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 108, symbol:
    // ?getPlacementBlock@PointedDripstoneBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: __unk_vfn_125
    virtual void __unk_vfn_125();

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // vIndex: 131, symbol: __unk_vfn_131
    virtual void __unk_vfn_131();

    // vIndex: 143, symbol: ?getVariant@PointedDripstoneBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 148, symbol: ?animateTick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 149, symbol: ?init@PointedDripstoneBlock@@UEAAAEAVBlockLegacy@@XZ
    virtual class BlockLegacy& init();

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 166, symbol: ?onFallOn@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
    virtual void onFallOn(class BlockSource&, class BlockPos const&, class Actor&, float) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 169, symbol: ?randomTick@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 175, symbol: ?canSurvive@PointedDripstoneBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 192, symbol: ?getDustColor@PointedDripstoneBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
    virtual class mce::Color getDustColor(class Block const&) const;

    // vIndex: 193, symbol:
    // ?getDustParticleName@PointedDripstoneBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string getDustParticleName(class Block const&) const;

    // vIndex: 194, symbol: __unk_vfn_194
    virtual void __unk_vfn_194();

    // vIndex: 195, symbol: ?onLand@PointedDripstoneBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLand(class BlockSource&, class BlockPos const&) const;

    // vIndex: 197, symbol: ?startFalling@PointedDripstoneBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
    virtual void startFalling(class BlockSource&, class BlockPos const&, class Block const&, bool) const;

    // symbol: ?falling@PointedDripstoneBlock@@UEBA_NXZ
    MCVAPI bool falling() const;

    // symbol: ??0PointedDripstoneBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI PointedDripstoneBlock(std::string const&, int);

    // symbol: ?addDripParticle@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@W4ParticleType@@@Z
    MCAPI static void addDripParticle(class BlockSource&, class BlockPos const&, ::ParticleType);

    // symbol: ?canGrow@PointedDripstoneBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCAPI static bool canGrow(class BlockSource&, class BlockPos const&, class BlockPos const&);

    // symbol: ?fillCauldron@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void fillCauldron(class BlockSource&, class BlockPos const&);

    // symbol:
    // ?findStalactiteTipAboveCauldron@PointedDripstoneBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static std::optional<class BlockPos>
    findStalactiteTipAboveCauldron(class BlockSource&, class BlockPos const&);

    // symbol:
    // ?getCauldronFillLiquidType@PointedDripstoneBlock@@SA?AV?$optional@W4MaterialType@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static std::optional<::MaterialType> getCauldronFillLiquidType(class BlockSource&, class BlockPos const&);

    // symbol:
    // ?getStalactiteTipBelowFillSource@PointedDripstoneBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static std::optional<class BlockPos>
    getStalactiteTipBelowFillSource(class BlockSource&, class BlockPos const&);

    // symbol: ?growStalactite@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void growStalactite(class BlockSource&, class BlockPos const&);

    // symbol: ?growStalagmite@PointedDripstoneBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void growStalagmite(class BlockSource&, class BlockPos const&);

    // symbol: ?isPointedDripstoneWithDirection@PointedDripstoneBlock@@SA_NAEBVBlock@@E@Z
    MCAPI static bool isPointedDripstoneWithDirection(class Block const&, uchar);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_updateBlockThickness@PointedDripstoneBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _updateBlockThickness(class BlockSource&, class BlockPos const&) const;

    // symbol:
    // ?_calculateDripstoneThickness@PointedDripstoneBlock@@CA?AW4DripstoneThickness@@AEAVBlockSource@@AEBVBlockPos@@E_N@Z
    MCAPI static ::DripstoneThickness
    _calculateDripstoneThickness(class BlockSource&, class BlockPos const&, uchar, bool);

    // symbol: ?_canDrip@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _canDrip(class BlockSource&, class BlockPos const&);

    // symbol: ?_canFillCauldron@PointedDripstoneBlock@@CA_NAEBVBlock@@@Z
    MCAPI static bool _canFillCauldron(class Block const&);

    // symbol: ?_canTipGrow@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _canTipGrow(class BlockSource&, class BlockPos const&);

    // symbol: ?_createDripstone@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@EW4DripstoneThickness@@@Z
    MCAPI static void _createDripstone(class BlockSource&, class BlockPos const&, uchar, ::DripstoneThickness);

    // symbol: ?_createMergedTips@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI static void _createMergedTips(class BlockSource&, class Block const&, class BlockPos const&);

    // symbol:
    // ?_findBlockVertically@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@EV?$function@$$A6A_NAEAVBlockSource@@AEBVBlockPos@@@Z@3@2H@Z
    MCAPI static std::optional<class BlockPos> _findBlockVertically(
        class BlockSource&,
        class BlockPos const&,
        uchar,
        std::function<bool(class BlockSource&, class BlockPos const&)>,
        std::function<bool(class BlockSource&, class BlockPos const&)>,
        int
    );

    // symbol:
    // ?_findRootBlock@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI static std::optional<class BlockPos> _findRootBlock(class BlockSource&, class BlockPos const&, int);

    // symbol: ?_findTip@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@EH_N@Z
    MCAPI static std::optional<class BlockPos> _findTip(class BlockSource&, class BlockPos const&, uchar, int, bool);

    // symbol:
    // ?_getBlockAboveStalactiteRoot@PointedDripstoneBlock@@CA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static std::optional<class BlockPos> _getBlockAboveStalactiteRoot(class BlockSource&, class BlockPos const&);

    // symbol: ?_getRandomBlockPositionOffset@PointedDripstoneBlock@@CA?AVVec3@@AEBVBlockPos@@@Z
    MCAPI static class Vec3 _getRandomBlockPositionOffset(class BlockPos const&);

    // symbol: ?_grow@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI static void _grow(class BlockSource&, class BlockPos const&, uchar);

    // symbol: ?_growStalagmiteBelow@PointedDripstoneBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static void _growStalagmiteBelow(class BlockSource&, class BlockPos const&);

    // symbol: ?_isStalactiteBase@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _isStalactiteBase(class BlockSource&, class BlockPos const&);

    // symbol: ?_isTip@PointedDripstoneBlock@@CA_NAEBVBlock@@E_N@Z
    MCAPI static bool _isTip(class Block const&, uchar, bool);

    // symbol: ?_isValidPointedDripstonePlacement@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI static bool _isValidPointedDripstonePlacement(class BlockSource&, class BlockPos const&, bool);

    // symbol: ?_mayPlaceHanging@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _mayPlaceHanging(class BlockSource&, class BlockPos const&);

    // symbol: ?_mayPlaceStanding@PointedDripstoneBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool _mayPlaceStanding(class BlockSource&, class BlockPos const&);

    // NOLINTEND
};
