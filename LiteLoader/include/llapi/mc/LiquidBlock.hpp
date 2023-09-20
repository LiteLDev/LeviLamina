/**
 * @file  LiquidBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LiquidBlock.
 *
 */
class LiquidBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDBLOCK
public:
    class LiquidBlock& operator=(class LiquidBlock const &) = delete;
    LiquidBlock(class LiquidBlock const &) = delete;
    LiquidBlock() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 6
     * @symbol ?getCollisionShape\@LiquidBlock\@\@UEBA?AVAABB\@\@AEBVBlock\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@V?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual class AABB getCollisionShape(class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
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
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 63
     * @symbol ?canContainLiquid\@LiquidBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl 70
     * @symbol ?checkIsPathable\@LiquidBlock\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 91
     * @symbol ?mayPick\@LiquidBlock\@\@UEBA_NAEBVBlockSource\@\@AEBVBlock\@\@_N\@Z
     */
    virtual bool mayPick(class BlockSource const &, class Block const &, bool) const;
    /**
     * @vftbl 100
     * @symbol ?neighborChanged\@LiquidBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 122
     * @symbol __unk_vfn_122
     */
    virtual void __unk_vfn_122();
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
     * @vftbl 127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl 130
     * @symbol __unk_vfn_130
     */
    virtual void __unk_vfn_130();
    /**
     * @vftbl 134
     * @symbol ?getColor\@LiquidBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getColor(class Block const &) const;
    /**
     * @vftbl 136
     * @symbol ?getColorAtPos\@LiquidBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int getColorAtPos(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 139
     * @symbol ?onGraphicsModeChanged\@LiquidBlock\@\@UEAAXAEBUBlockGraphicsModeChangeContext\@\@\@Z
     */
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /**
     * @vftbl 147
     * @symbol ?animateTickBedrockLegacy\@LiquidBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void animateTickBedrockLegacy(class BlockSource &, class BlockPos const &, class Random &) const;
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
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
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
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl 186
     * @symbol ?getResourceCount\@LiquidBlock\@\@UEBAHAEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
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
     * @symbol ??0LiquidBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HAEBVMaterial\@\@\@Z
     */
    MCAPI LiquidBlock(std::string const &, int, class Material const &);
    /**
     * @symbol ?getTickDelay\@LiquidBlock\@\@QEBAHAEAVBlockSource\@\@\@Z
     */
    MCAPI int getTickDelay(class BlockSource &) const;
    /**
     * @symbol ?getHeightFromDepth\@LiquidBlock\@\@SAMH\@Z
     */
    MCAPI static float getHeightFromDepth(int);
    /**
     * @symbol ?handleEntityInside\@LiquidBlock\@\@SAXAEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEAVVec3\@\@AEBVMaterial\@\@\@Z
     */
    MCAPI static void handleEntityInside(class IConstBlockSource const &, class BlockPos const &, class Vec3 &, class Material const &);

//protected:
    /**
     * @symbol ?emitFizzParticle\@LiquidBlock\@\@IEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void emitFizzParticle(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?solidify\@LiquidBlock\@\@IEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void solidify(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @symbol ?trySpreadFire\@LiquidBlock\@\@IEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void trySpreadFire(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ?getDepth\@LiquidBlock\@\@KAHAEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVMaterial\@\@\@Z
     */
    MCAPI static int getDepth(class IConstBlockSource const &, class BlockPos const &, class Material const &);
    /**
     * @symbol ?getRenderedDepth\@LiquidBlock\@\@KAHAEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVMaterial\@\@\@Z
     */
    MCAPI static int getRenderedDepth(class IConstBlockSource const &, class BlockPos const &, class Material const &);

//private:
    /**
     * @symbol ?_solidify\@LiquidBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void _solidify(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @symbol ?_getFlow\@LiquidBlock\@\@CA?AVVec3\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVMaterial\@\@\@Z
     */
    MCAPI static class Vec3 _getFlow(class IConstBlockSource const &, class BlockPos const &, class Material const &);

protected:

private:

};
