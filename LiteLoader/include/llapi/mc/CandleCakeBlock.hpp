/**
 * @file  MC/CandleCakeBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "AbstractCandleBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CandleCakeBlock.
 *
 */
class CandleCakeBlock : public AbstractCandleBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANDLECAKEBLOCK
public:
    class CandleCakeBlock& operator=(class CandleCakeBlock const &) = delete;
    CandleCakeBlock(class CandleCakeBlock const &) = delete;
    CandleCakeBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CandleCakeBlock();
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
     * @hash   2108258716
     * @vftbl  68
     * @symbol ?checkIsPathable@CandleCakeBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
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
     * @hash   370438099
     * @vftbl  90
     * @symbol ?mayPlace@CandleCakeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   2085721210
     * @vftbl  99
     * @symbol ?neighborChanged@CandleCakeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -1280230826
     * @vftbl  102
     * @symbol ?getResourceItem@CandleCakeBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -893508885
     * @vftbl  103
     * @symbol ?asItemInstance@CandleCakeBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
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
     * @hash   -573066098
     * @vftbl  128
     * @symbol ?getComparatorSignal@CandleCakeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   -828146558
     * @vftbl  144
     * @symbol ?getVisualShape@CandleCakeBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
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
     * @hash   1615819964
     * @vftbl  173
     * @symbol ?playerDestroy@CandleCakeBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -331087091
     * @vftbl  179
     * @symbol ?use@CandleCakeBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -1476942136
     * @vftbl  180
     * @symbol ?canSurvive@CandleCakeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
    /**
     * @hash   1847719543
     * @vftbl  192
     * @symbol ?_getNumCandles@CandleCakeBlock@@MEBAHAEBVBlock@@@Z
     */
    virtual int _getNumCandles(class Block const &) const;
    /**
     * @hash   -172907522
     * @vftbl  193
     * @symbol ?_iterateCandles@CandleCakeBlock@@MEBAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
     */
    virtual void _iterateCandles(class Block const &, class BlockPos const &, class std::function<void (class Vec3 const &, int)>) const;
    /**
     * @hash   -1719648555
     * @vftbl  194
     * @symbol ?_tryLightOnFire@CandleCakeBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     */
    virtual void _tryLightOnFire(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  196
     * @symbol __unk_vfn_196
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  197
     * @symbol __unk_vfn_197
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  198
     * @symbol __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl  199
     * @symbol __unk_vfn_199
     */
    virtual void __unk_vfn_199();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CANDLECAKEBLOCK
    /**
     * @hash   1625741112
     * @symbol ?canBeSilkTouched@CandleCakeBlock@@EEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   1153723752
     * @symbol ?hasComparatorSignal@CandleCakeBlock@@UEBA_NXZ
     */
    MCVAPI bool hasComparatorSignal() const;
    /**
     * @hash   -284105874
     * @symbol ?isCandleCakeBlock@CandleCakeBlock@@UEBA_NXZ
     */
    MCVAPI bool isCandleCakeBlock() const;
#endif
    /**
     * @hash   -898543658
     * @symbol ??0CandleCakeBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI CandleCakeBlock(std::string const &, int);
    /**
     * @hash   -1097464950
     * @symbol ?getCandleCakeFromCandle@CandleCakeBlock@@SAAEBVBlock@@AEBV2@@Z
     */
    MCAPI static class Block const & getCandleCakeFromCandle(class Block const &);
    /**
     * @hash   -1648643558
     * @symbol ?getCandleFromCandleCake@CandleCakeBlock@@SAAEBVBlock@@AEBV2@@Z
     */
    MCAPI static class Block const & getCandleFromCandleCake(class Block const &);
    /**
     * @hash   -1558696676
     * @symbol ?tryLightFire@CandleCakeBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     */
    MCAPI static bool tryLightFire(class BlockSource &, class BlockPos const &, class Actor *);

//private:
    /**
     * @hash   622024928
     * @symbol ?_popCandle@CandleCakeBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _popCandle(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1581601954
     * @symbol ?_forEachCandle@CandleCakeBlock@@CAXAEBVBlock@@AEBVBlockPos@@V?$function@$$A6AXAEBVVec3@@H@Z@std@@@Z
     */
    MCAPI static void _forEachCandle(class Block const &, class BlockPos const &, class std::function<void (class Vec3 const &, int)>);

private:

};