/**
 * @file  CandleCakeBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~CandleCakeBlock();
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @symbol  __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol  __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol  __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol  __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol  __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol  __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol  __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol  __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol  __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol  __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol  __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol  __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol  __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol  __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @symbol  __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol  __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   -2086810708
     * @vftbl  69
     * @symbol  ?checkIsPathable\@CandleCakeBlock\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @symbol  __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @hash   1097446131
     * @vftbl  91
     * @symbol  ?mayPlace\@CandleCakeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -1481561510
     * @vftbl  99
     * @symbol  ?neighborChanged\@CandleCakeBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -489439342
     * @vftbl  103
     * @symbol  ?asItemInstance\@CandleCakeBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@PEBVBlockActor\@\@\@Z
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @symbol  __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  123
     * @symbol  __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @symbol  __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @symbol  __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @hash   154618478
     * @vftbl  127
     * @symbol  ?getComparatorSignal\@CandleCakeBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@E\@Z
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  131
     * @symbol  __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @hash   -100461982
     * @vftbl  143
     * @symbol  ?getVisualShape\@CandleCakeBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  156
     * @symbol  __unk_vfn_156
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  165
     * @symbol  __unk_vfn_165
     */
    virtual void __unk_vfn_165();
    /**
     * @vftbl  166
     * @symbol  __unk_vfn_166
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @symbol  __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  170
     * @symbol  __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  174
     * @symbol  __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @hash   396658989
     * @vftbl  177
     * @symbol  ?use\@CandleCakeBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -749964856
     * @vftbl  178
     * @symbol  ?canSurvive\@CandleCakeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  185
     * @symbol  __unk_vfn_185
     */
    virtual void __unk_vfn_185();
    /**
     * @hash   -1951432004
     * @vftbl  186
     * @symbol  ?playerDestroy\@CandleCakeBlock\@\@UEBAXAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -552546250
     * @vftbl  187
     * @symbol  ?getResourceItem\@CandleCakeBlock\@\@UEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   1953660183
     * @vftbl  193
     * @symbol  ?_getNumCandles\@CandleCakeBlock\@\@MEBAHAEBVBlock\@\@\@Z
     */
    virtual int _getNumCandles(class Block const &) const;
    /**
     * @hash   554223518
     * @vftbl  194
     * @symbol  ?_iterateCandles\@CandleCakeBlock\@\@MEBAXAEBVBlock\@\@AEBVBlockPos\@\@V?$function\@$$A6AXAEBVVec3\@\@H\@Z\@std\@\@\@Z
     */
    virtual void _iterateCandles(class Block const &, class BlockPos const &, class std::function<void (class Vec3 const &, int)>) const;
    /**
     * @hash   -992486763
     * @vftbl  195
     * @symbol  ?_tryLightOnFire\@CandleCakeBlock\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    virtual void _tryLightOnFire(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @vftbl  196
     * @symbol  __unk_vfn_196
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  197
     * @symbol  __unk_vfn_197
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  198
     * @symbol  __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl  199
     * @symbol  __unk_vfn_199
     */
    virtual void __unk_vfn_199();
    /**
     * @vftbl  200
     * @symbol  __unk_vfn_200
     */
    virtual void __unk_vfn_200();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CANDLECAKEBLOCK
    /**
     * @hash   1726361656
     * @symbol  ?canBeSilkTouched\@CandleCakeBlock\@\@EEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   1253621624
     * @symbol  ?hasComparatorSignal\@CandleCakeBlock\@\@UEBA_NXZ
     */
    MCVAPI bool hasComparatorSignal() const;
    /**
     * @hash   -184208002
     * @symbol  ?isCandleCakeBlock\@CandleCakeBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isCandleCakeBlock() const;
#endif
    /**
     * @hash   -171427994
     * @symbol  ??0CandleCakeBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI CandleCakeBlock(std::string const &, int);
    /**
     * @hash   -370303158
     * @symbol  ?getCandleCakeFromCandle\@CandleCakeBlock\@\@SAAEBVBlock\@\@AEBV2\@\@Z
     */
    MCAPI static class Block const & getCandleCakeFromCandle(class Block const &);
    /**
     * @hash   -921220374
     * @symbol  ?getCandleFromCandleCake\@CandleCakeBlock\@\@SAAEBVBlock\@\@AEBV2\@\@Z
     */
    MCAPI static class Block const & getCandleFromCandleCake(class Block const &);
    /**
     * @hash   -830981348
     * @symbol  ?tryLightFire\@CandleCakeBlock\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@PEAVActor\@\@\@Z
     */
    MCAPI static bool tryLightFire(class BlockSource &, class BlockPos const &, class Actor *);

//private:
    /**
     * @hash   1349171344
     * @symbol  ?_popCandle\@CandleCakeBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _popCandle(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -854486290
     * @symbol  ?_forEachCandle\@CandleCakeBlock\@\@CAXAEBVBlock\@\@AEBVBlockPos\@\@V?$function\@$$A6AXAEBVVec3\@\@H\@Z\@std\@\@\@Z
     */
    MCAPI static void _forEachCandle(class Block const &, class BlockPos const &, class std::function<void (class Vec3 const &, int)>);

private:

};