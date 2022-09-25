/**
 * @file  SweetBerryBushBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SweetBerryBushBlock.
 *
 */
class SweetBerryBushBlock : public BushBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWEETBERRYBUSHBLOCK
public:
    class SweetBerryBushBlock& operator=(class SweetBerryBushBlock const &) = delete;
    SweetBerryBushBlock(class SweetBerryBushBlock const &) = delete;
    SweetBerryBushBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SweetBerryBushBlock();
    /**
     * @hash   1282285535
     * @vftbl  4
     * @symbol ?hasTag@SweetBerryBushBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual bool hasTag(class BlockSource &, class BlockPos const &, class Block const &, std::string const &) const;
    /**
     * @hash   240478543
     * @vftbl  10
     * @symbol ?getAABB@SweetBerryBushBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
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
     * @hash   -772357447
     * @vftbl  62
     * @symbol ?canContainLiquid@SweetBerryBushBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   -1950734509
     * @vftbl  68
     * @symbol ?checkIsPathable@SweetBerryBushBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
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
     * @hash   273935616
     * @vftbl  85
     * @symbol ?onFertilized@SweetBerryBushBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /**
     * @hash   547307563
     * @vftbl  87
     * @symbol ?canBeFertilized@SweetBerryBushBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1368433439
     * @vftbl  91
     * @symbol ?mayPlace@SweetBerryBushBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   423149961
     * @vftbl  92
     * @symbol ?mayPlaceOn@SweetBerryBushBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1810971829
     * @vftbl  101
     * @symbol ?getResourceCount@SweetBerryBushBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -1967723054
     * @vftbl  103
     * @symbol ?asItemInstance@SweetBerryBushBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -2105264637
     * @vftbl  104
     * @symbol ?spawnResources@SweetBerryBushBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@MH@Z
     */
    virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   -234614436
     * @vftbl  110
     * @symbol ?attack@SweetBerryBushBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
     */
    virtual bool attack(class Player *, class BlockPos const &) const;
    /**
     * @hash   1578259305
     * @vftbl  114
     * @symbol ?entityInside@SweetBerryBushBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /**
     * @hash   246965187
     * @vftbl  119
     * @symbol ?executeEvent@SweetBerryBushBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
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
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   -592153991
     * @vftbl  144
     * @symbol ?getVisualShape@SweetBerryBushBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @hash   1576328223
     * @vftbl  147
     * @symbol ?getVariant@SweetBerryBushBlock@@UEBAHAEBVBlock@@@Z
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
     * @hash   455513873
     * @vftbl  160
     * @symbol ?dealsContactDamage@SweetBerryBushBlock@@UEBA_NAEBVActor@@AEBVBlock@@_N@Z
     */
    virtual bool dealsContactDamage(class Actor const &, class Block const &, bool) const;
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
     * @hash   1746956914
     * @vftbl  175
     * @symbol ?randomTick@SweetBerryBushBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -313669308
     * @vftbl  179
     * @symbol ?use@SweetBerryBushBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   827188897
     * @vftbl  180
     * @symbol ?canSurvive@SweetBerryBushBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -28573464
     * @vftbl  181
     * @symbol ?getRenderLayer@SweetBerryBushBlock@@UEBA?AW4BlockRenderLayer@@XZ
     */
    virtual enum BlockRenderLayer getRenderLayer() const;
    /**
     * @hash   -1194067704
     * @vftbl  182
     * @symbol ?getRenderLayer@SweetBerryBushBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual enum BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SWEETBERRYBUSHBLOCK
    /**
     * @hash   1825657352
     * @symbol ?canBeSilkTouched@SweetBerryBushBlock@@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   1850124878
     * @symbol ?isInteractiveBlock@SweetBerryBushBlock@@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   -1119826563
     * @symbol ??0SweetBerryBushBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI SweetBerryBushBlock(std::string const &, int);
    /**
     * @hash   -1907904203
     * @symbol ?SLOWDOWN_MULTIPLIER@SweetBerryBushBlock@@2VVec3@@B
     */
    MCAPI static class Vec3 const SLOWDOWN_MULTIPLIER;

//private:
    /**
     * @hash   1606497902
     * @symbol ?_growBush@SweetBerryBushBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool _growBush(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1332114578
     * @symbol ?_pickBerries@SweetBerryBushBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI bool _pickBerries(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1236356608
     * @symbol ?_popBerries@SweetBerryBushBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEBHPEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@@Z
     */
    MCAPI void _popBerries(class BlockSource &, class BlockPos const &, int const &, std::vector<class Item const *> *) const;

private:

};