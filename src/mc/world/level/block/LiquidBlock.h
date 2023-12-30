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

    // vIndex: 56, symbol: ?canContainLiquid@LiquidBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 61, symbol: ?checkIsPathable@LiquidBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 83, symbol: ?mayPick@LiquidBlock@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
    virtual bool mayPick(class BlockSource const& region, class Block const& block, bool liquid) const;

    // vIndex: 92, symbol: ?neighborChanged@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

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

    // vIndex: 121, symbol: ?getColor@LiquidBlock@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const& block) const;

    // vIndex: 123, symbol: ?getColorAtPos@LiquidBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getColorAtPos(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 126, symbol: ?onGraphicsModeChanged@LiquidBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const&);

    // vIndex: 134, symbol: ?animateTickBedrockLegacy@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 147, symbol: ?onPlace@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 162, symbol: ?getMapColor@LiquidBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 165, symbol: ?getResourceCount@LiquidBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
    virtual int getResourceCount(class Randomize& random, class Block const& block, int bonusLootLevel) const;

    // symbol: ?canBeSilkTouched@LiquidBlock@@UEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ??0LiquidBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI LiquidBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?getTickDelay@LiquidBlock@@QEBAHAEAVBlockSource@@@Z
    MCAPI int getTickDelay(class BlockSource& region) const;

    // symbol: ?getHeightFromDepth@LiquidBlock@@SAMH@Z
    MCAPI static float getHeightFromDepth(int depth);

    // symbol: ?handleEntityInside@LiquidBlock@@SAXAEBVIConstBlockSource@@AEBVBlockPos@@AEAVVec3@@AEBVMaterial@@@Z
    MCAPI static void
    handleEntityInside(class IConstBlockSource const&, class BlockPos const&, class Vec3&, class Material const&);

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
    MCAPI static int getDepth(class IConstBlockSource const&, class BlockPos const&, class Material const&);

    // symbol: ?getRenderedDepth@LiquidBlock@@KAHAEBVIConstBlockSource@@AEBVBlockPos@@AEBVMaterial@@@Z
    MCAPI static int getRenderedDepth(class IConstBlockSource const&, class BlockPos const&, class Material const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_solidify@LiquidBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCAPI void _solidify(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // symbol: ?_getFlow@LiquidBlock@@CA?AVVec3@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVMaterial@@@Z
    MCAPI static class Vec3 _getFlow(class IConstBlockSource const&, class BlockPos const&, class Material const&);

    // NOLINTEND
};
