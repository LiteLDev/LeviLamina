#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LiquidBlock : public ::BlockLegacy {

public:
    // prevent constructor by default
    LiquidBlock& operator=(LiquidBlock const&) = delete;
    LiquidBlock(LiquidBlock const&)            = delete;
    LiquidBlock()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 8
     * @symbol
     * ?getAABB\@LiquidBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl 43
     * @symbol __unk_vfn_43
     */
    virtual void __unk_vfn_43();
    /**
     * @vftbl 44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl 46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl 47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl 48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl 49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl 50
     * @symbol __unk_vfn_50
     */
    virtual void __unk_vfn_50();
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 56
     * @symbol __unk_vfn_56
     */
    virtual void __unk_vfn_56();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 63
     * @symbol __unk_vfn_63
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl 64
     * @symbol ?canContainLiquid\@LiquidBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl 71
     * @symbol ?checkIsPathable\@LiquidBlock\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl 92
     * @symbol ?mayPick\@LiquidBlock\@\@UEBA_NAEBVBlockSource\@\@AEBVBlock\@\@_N\@Z
     */
    virtual bool mayPick(class BlockSource const&, class Block const&, bool) const;
    /**
     * @vftbl 101
     * @symbol ?neighborChanged\@LiquidBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 123
     * @symbol __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl 124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl 125
     * @symbol __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl 128
     * @symbol __unk_vfn_128
     */
    virtual void __unk_vfn_128();
    /**
     * @vftbl 131
     * @symbol __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl 135
     * @symbol ?getColor\@LiquidBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getColor(class Block const&) const;
    /**
     * @vftbl 137
     * @symbol ?getColorAtPos\@LiquidBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 140
     * @symbol ?onGraphicsModeChanged\@LiquidBlock\@\@UEAAXAEBUBlockGraphicsModeChangeContext\@\@\@Z
     */
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const&);
    /**
     * @vftbl 148
     * @symbol ?animateTick\@LiquidBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @vftbl 153
     * @symbol __unk_vfn_153
     */
    virtual void __unk_vfn_153();
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 163
     * @symbol __unk_vfn_163
     */
    virtual void __unk_vfn_163();
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 165
     * @symbol ?onPlace\@LiquidBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171();
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 182
     * @symbol ?getMapColor\@LiquidBlock\@\@UEBA?AVColor\@mce\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl 186
     * @symbol ?getResourceCount\@LiquidBlock\@\@UEBAHAEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual int getResourceCount(class Randomize&, class Block const&, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIQUIDBLOCK
    /**
     * @symbol ?canBeSilkTouched\@LiquidBlock\@\@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LiquidBlock();
#endif
    /**
     * @symbol
     * ??0LiquidBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVMaterial\@\@\@Z
     */
    MCAPI LiquidBlock(std::string const&, int, class Material const&);
    /**
     * @symbol ?getHeightFromDepth\@LiquidBlock\@\@SAMH\@Z
     */
    MCAPI static float getHeightFromDepth(int);
    /**
     * @symbol ?getTickDelay\@LiquidBlock\@\@QEBAHAEAVBlockSource\@\@\@Z
     */
    MCAPI int getTickDelay(class BlockSource&) const;
    /**
     * @symbol
     * ?handleEntityInside\@LiquidBlock\@\@SAXAEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAVVec3\@\@AEBVMaterial\@\@\@Z
     */
    MCAPI static void
    handleEntityInside(class IConstBlockSource const&, class BlockPos const&, class Vec3&, class Material const&);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?emitFizzParticle\@LiquidBlock\@\@IEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void emitFizzParticle(class BlockSource&, class BlockPos const&) const;
    /**
     * @symbol ?getDepth\@LiquidBlock\@\@KAHAEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVMaterial\@\@\@Z
     */
    MCAPI static int getDepth(class IConstBlockSource const&, class BlockPos const&, class Material const&);
    /**
     * @symbol ?getRenderedDepth\@LiquidBlock\@\@KAHAEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVMaterial\@\@\@Z
     */
    MCAPI static int getRenderedDepth(class IConstBlockSource const&, class BlockPos const&, class Material const&);
    /**
     * @symbol ?solidify\@LiquidBlock\@\@IEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void solidify(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /**
     * @symbol ?trySpreadFire\@LiquidBlock\@\@IEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void trySpreadFire(class BlockSource&, class BlockPos const&, class Random&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_getFlow\@LiquidBlock\@\@CA?AVVec3\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVMaterial\@\@\@Z
     */
    MCAPI static class Vec3 _getFlow(class IConstBlockSource const&, class BlockPos const&, class Material const&);
    /**
     * @symbol ?_solidify\@LiquidBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void _solidify(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    // NOLINTEND
};
