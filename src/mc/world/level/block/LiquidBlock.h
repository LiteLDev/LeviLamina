#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 8, symbol: ?getAABB@LiquidBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;

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

    // vIndex: 64, symbol: ?canContainLiquid@LiquidBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 71, symbol: ?checkIsPathable@LiquidBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 84, symbol: __unk_vfn_84
    virtual void __unk_vfn_84();

    // vIndex: 92, symbol: ?mayPick@LiquidBlock@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
    virtual bool mayPick(class BlockSource const&, class Block const&, bool) const;

    // vIndex: 101, symbol: ?neighborChanged@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

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

    // vIndex: 135, symbol: ?getColor@LiquidBlock@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const&) const;

    // vIndex: 137, symbol: ?getColorAtPos@LiquidBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;

    // vIndex: 140, symbol: ?onGraphicsModeChanged@LiquidBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const&);

    // vIndex: 148, symbol: ?animateTick@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 182, symbol: ?getMapColor@LiquidBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 186, symbol: ?getResourceCount@LiquidBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
    virtual int getResourceCount(class Randomize&, class Block const&, int) const;

    // symbol: ?canBeSilkTouched@LiquidBlock@@UEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ??1LiquidBlock@@UEAA@XZ
    MCVAPI ~LiquidBlock();

    // symbol: ??0LiquidBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI LiquidBlock(std::string const&, int, class Material const&);

    // symbol: ?getTickDelay@LiquidBlock@@QEBAHAEAVBlockSource@@@Z
    MCAPI int getTickDelay(class BlockSource&) const;

    // symbol: ?getHeightFromDepth@LiquidBlock@@SAMH@Z
    MCAPI static float getHeightFromDepth(int);

    // symbol: ?handleEntityInside@LiquidBlock@@SAXAEBVIConstBlockSource@@AEBVBlockPos@@AEAVVec3@@AEBVMaterial@@@Z
    MCAPI static void
    handleEntityInside(class IConstBlockSource const&, class BlockPos const&, class Vec3&, class Material const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?emitFizzParticle@LiquidBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void emitFizzParticle(class BlockSource&, class BlockPos const&) const;

    // symbol: ?solidify@LiquidBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCAPI void solidify(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // symbol: ?trySpreadFire@LiquidBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI void trySpreadFire(class BlockSource&, class BlockPos const&, class Random&) const;

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
