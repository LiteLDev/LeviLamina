/**
 * @file  MC/ChorusFlowerBlock.hpp
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
 * @brief MC class ChorusFlowerBlock.
 *
 */
class ChorusFlowerBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHORUSFLOWERBLOCK
public:
    class ChorusFlowerBlock& operator=(class ChorusFlowerBlock const &) = delete;
    ChorusFlowerBlock(class ChorusFlowerBlock const &) = delete;
    ChorusFlowerBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ChorusFlowerBlock();
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   -1768268533
     * @vftbl  22
     * @symbol ?canProvideSupport@ChorusFlowerBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
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
     * @hash   1155006158
     * @vftbl  35
     * @symbol ?isWaterBlocking@ChorusFlowerBlock@@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
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
     * @hash   -46010580
     * @vftbl  62
     * @symbol ?canContainLiquid@ChorusFlowerBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
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
     * @hash   -1381955148
     * @vftbl  91
     * @symbol ?mayPlace@ChorusFlowerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1731868450
     * @vftbl  99
     * @symbol ?neighborChanged@ChorusFlowerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -529767182
     * @vftbl  101
     * @symbol ?getResourceCount@ChorusFlowerBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
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
     * @hash   -1300986628
     * @vftbl  147
     * @symbol ?getVariant@ChorusFlowerBlock@@UEBAHAEBVBlock@@@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
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
     * @hash   1444761072
     * @vftbl  173
     * @symbol ?playerDestroy@ChorusFlowerBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1193386254
     * @vftbl  174
     * @symbol ?tick@ChorusFlowerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -1365305729
     * @vftbl  175
     * @symbol ?randomTick@ChorusFlowerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -861201932
     * @vftbl  180
     * @symbol ?canSurvive@ChorusFlowerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHORUSFLOWERBLOCK
    /**
     * @hash   -159758189
     * @symbol ?waterSpreadCausesSpawn@ChorusFlowerBlock@@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @hash   -1198756102
     * @symbol ??0ChorusFlowerBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI ChorusFlowerBlock(std::string const &, int);
    /**
     * @hash   -574621493
     * @symbol ?BRANCH_DIRECTIONS@ChorusFlowerBlock@@2HB
     */
    MCAPI static int const BRANCH_DIRECTIONS;
    /**
     * @hash   -2042513500
     * @symbol ?DEAD_AGE@ChorusFlowerBlock@@2GB
     */
    MCAPI static unsigned short const DEAD_AGE;
    /**
     * @hash   -1877995459
     * @symbol ?GROW_RATE@ChorusFlowerBlock@@2HB
     */
    MCAPI static int const GROW_RATE;
    /**
     * @hash   -1947973875
     * @symbol ?generatePlant@ChorusFlowerBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@H@Z
     */
    MCAPI static void generatePlant(class BlockSource &, class BlockPos const &, class Random &, int);

//private:
    /**
     * @hash   1513633780
     * @symbol ?_placeDeadFlower@ChorusFlowerBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _placeDeadFlower(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   545030338
     * @symbol ?_placeGrownFlower@ChorusFlowerBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    MCAPI void _placeGrownFlower(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   2043605371
     * @symbol ?_growTreeRecursive@ChorusFlowerBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@1AEAVRandom@@HH@Z
     */
    MCAPI static void _growTreeRecursive(class BlockSource &, class BlockPos const &, class BlockPos const &, class Random &, int, int);

private:

};