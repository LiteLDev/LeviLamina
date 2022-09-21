/**
 * @file  MC/LiquidBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LiquidBlock();
    /**
     * @hash   -2132239983
     * @vftbl  10
     * @symbol ?getAABB@LiquidBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   -166486105
     * @vftbl  62
     * @symbol ?canContainLiquid@LiquidBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   -724705867
     * @vftbl  68
     * @symbol ?checkIsPathable@LiquidBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   1394590882
     * @vftbl  89
     * @symbol ?mayPick@LiquidBlock@@UEBA_NAEBVBlockSource@@AEBVBlock@@_N@Z
     */
    virtual bool mayPick(class BlockSource const &, class Block const &, bool) const;
    /**
     * @hash   536161091
     * @vftbl  99
     * @symbol ?neighborChanged@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -1107823657
     * @vftbl  101
     * @symbol ?getResourceCount@LiquidBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   339915604
     * @vftbl  111
     * @symbol ?handleEntityInside@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@AEAVVec3@@@Z
     */
    virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /**
     * @vftbl  124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   -1318723101
     * @vftbl  136
     * @symbol ?getColor@LiquidBlock@@UEBAHAEBVBlock@@@Z
     */
    virtual int getColor(class Block const &) const;
    /**
     * @hash   -394745868
     * @vftbl  138
     * @symbol ?getColorAtPos@LiquidBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual int getColorAtPos(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1713288099
     * @vftbl  141
     * @symbol ?onGraphicsModeChanged@LiquidBlock@@UEAAXAEBUBlockGraphicsModeChangeContext@@@Z
     */
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @hash   -879371834
     * @vftbl  152
     * @symbol ?animateTick@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   1857361411
     * @vftbl  171
     * @symbol ?onPlace@LiquidBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -2070444779
     * @vftbl  187
     * @symbol ?getMapColor@LiquidBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIQUIDBLOCK
    /**
     * @hash   -1239681027
     * @symbol ?canBeSilkTouched@LiquidBlock@@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
#endif
    /**
     * @hash   580049864
     * @symbol ??0LiquidBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     */
    MCAPI LiquidBlock(std::string const &, int, class Material const &);
    /**
     * @hash   1039765537
     * @symbol ?getTickDelay@LiquidBlock@@QEBAHAEAVBlockSource@@@Z
     */
    MCAPI int getTickDelay(class BlockSource &) const;
    /**
     * @hash   1215916163
     * @symbol ?getHeightFromDepth@LiquidBlock@@SAMH@Z
     */
    MCAPI static float getHeightFromDepth(int);
    /**
     * @hash   -1703545843
     * @symbol ?handleEntityInside@LiquidBlock@@SAXAEBVIConstBlockSource@@AEBVBlockPos@@AEAVVec3@@AEBVMaterial@@@Z
     */
    MCAPI static void handleEntityInside(class IConstBlockSource const &, class BlockPos const &, class Vec3 &, class Material const &);

//protected:
    /**
     * @hash   -1729946181
     * @symbol ?emitFizzParticle@LiquidBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void emitFizzParticle(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1895171008
     * @symbol ?solidify@LiquidBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    MCAPI void solidify(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -1719916876
     * @symbol ?trySpreadFire@LiquidBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    MCAPI void trySpreadFire(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -306146857
     * @symbol ?getDepth@LiquidBlock@@KAHAEBVIConstBlockSource@@AEBVBlockPos@@AEBVMaterial@@@Z
     */
    MCAPI static int getDepth(class IConstBlockSource const &, class BlockPos const &, class Material const &);
    /**
     * @hash   120009964
     * @symbol ?getRenderedDepth@LiquidBlock@@KAHAEBVIConstBlockSource@@AEBVBlockPos@@AEBVMaterial@@@Z
     */
    MCAPI static int getRenderedDepth(class IConstBlockSource const &, class BlockPos const &, class Material const &);

//private:
    /**
     * @hash   -1768194376
     * @symbol ?_solidify@LiquidBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    MCAPI void _solidify(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -458251631
     * @symbol ?_getFlow@LiquidBlock@@CA?AVVec3@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVMaterial@@@Z
     */
    MCAPI static class Vec3 _getFlow(class IConstBlockSource const &, class BlockPos const &, class Material const &);

protected:

private:

};