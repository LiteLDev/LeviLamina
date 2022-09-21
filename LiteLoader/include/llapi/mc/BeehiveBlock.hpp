/**
 * @file  MC/BeehiveBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FaceDirectionalActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BeehiveBlock.
 *
 */
class BeehiveBlock : public FaceDirectionalActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEEHIVEBLOCK
public:
    class BeehiveBlock& operator=(class BeehiveBlock const &) = delete;
    BeehiveBlock(class BeehiveBlock const &) = delete;
    BeehiveBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BeehiveBlock();
    /**
     * @hash   -1177856793
     * @vftbl  3
     * @symbol ?getNextBlockPermutation@BeehiveBlock@@UEBAPEBVBlock@@AEBV2@@Z
     */
    virtual class Block const * getNextBlockPermutation(class Block const &) const;
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
     * @hash   -1692070529
     * @vftbl  97
     * @symbol ?playerWillDestroy@BeehiveBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   1549391753
     * @vftbl  102
     * @symbol ?getResourceItem@BeehiveBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -402003362
     * @vftbl  103
     * @symbol ?asItemInstance@BeehiveBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   -1589843521
     * @vftbl  119
     * @symbol ?executeEvent@BeehiveBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
     */
    virtual void executeEvent(class BlockSource &, class BlockPos const &, class Block const &, std::string const &, class Actor &) const;
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
     * @hash   -641184357
     * @vftbl  128
     * @symbol ?getComparatorSignal@BeehiveBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   1141325675
     * @vftbl  147
     * @symbol ?getVariant@BeehiveBlock@@UEBAHAEBVBlock@@@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @hash   2074768467
     * @vftbl  150
     * @symbol ?getMappedFace@BeehiveBlock@@UEBAEEAEBVBlock@@@Z
     */
    virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /**
     * @hash   -575290160
     * @vftbl  152
     * @symbol ?animateTick@BeehiveBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
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
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   2090618912
     * @vftbl  179
     * @symbol ?use@BeehiveBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEEHIVEBLOCK
    /**
     * @hash   1399763443
     * @symbol ?canBeSilkTouched@BeehiveBlock@@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   -1531642603
     * @symbol ?hasComparatorSignal@BeehiveBlock@@UEBA_NXZ
     */
    MCVAPI bool hasComparatorSignal() const;
#endif
    /**
     * @hash   -232101783
     * @symbol ??0BeehiveBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI BeehiveBlock(std::string const &, int);
    /**
     * @hash   -411382495
     * @symbol ?emitHoneyComb@BeehiveBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void emitHoneyComb(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -199771768
     * @symbol ?evictAll@BeehiveBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCAPI void evictAll(class BlockSource &, class BlockPos const &, bool) const;
    /**
     * @hash   747800173
     * @symbol ?onPlayerPlace@BeehiveBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void onPlayerPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1253705152
     * @symbol ?deliverNectar@BeehiveBlock@@SAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     */
    MCAPI static void deliverNectar(class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @hash   -224545935
     * @symbol ?hasHoneyToHarvest@BeehiveBlock@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool hasHoneyToHarvest(class Block const &);
    /**
     * @hash   -344216868
     * @symbol ?resetHoneyLevel@BeehiveBlock@@SAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     */
    MCAPI static void resetHoneyLevel(class BlockSource &, class Block const &, class BlockPos const &);

//private:
    /**
     * @hash   -209962280
     * @symbol ?_fillHoneyBottle@BeehiveBlock@@AEBAXAEAVPlayer@@AEAVItemStack@@1AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _fillHoneyBottle(class Player &, class ItemStack &, class ItemStack &, class BlockSource &, class BlockPos const &) const;

private:

};