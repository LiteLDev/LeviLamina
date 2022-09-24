/**
 * @file  SeaPickle.hpp
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
 * @brief MC class SeaPickle.
 *
 */
class SeaPickle : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAPICKLE
public:
    class SeaPickle& operator=(class SeaPickle const &) = delete;
    SeaPickle(class SeaPickle const &) = delete;
    SeaPickle() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SeaPickle();
    /**
     * @hash   1629806265
     * @vftbl  10
     * @symbol ?getAABB@SeaPickle@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   -1771214648
     * @vftbl  22
     * @symbol ?canProvideSupport@SeaPickle@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
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
     * @hash   672322671
     * @vftbl  62
     * @symbol ?canContainLiquid@SeaPickle@@UEBA_NXZ
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
     * @hash   -858208579
     * @vftbl  85
     * @symbol ?onFertilized@SeaPickle@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /**
     * @hash   -1223370374
     * @vftbl  86
     * @symbol ?mayConsumeFertilizer@SeaPickle@@UEBA_NAEAVBlockSource@@@Z
     */
    virtual bool mayConsumeFertilizer(class BlockSource &) const;
    /**
     * @hash   -1250288002
     * @vftbl  87
     * @symbol ?canBeFertilized@SeaPickle@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1757470849
     * @vftbl  92
     * @symbol ?mayPlaceOn@SeaPickle@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1504028421
     * @vftbl  99
     * @symbol ?neighborChanged@SeaPickle@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -1238451625
     * @vftbl  102
     * @symbol ?getResourceItem@SeaPickle@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   2067848044
     * @vftbl  103
     * @symbol ?asItemInstance@SeaPickle@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
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
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   -1000702176
     * @vftbl  134
     * @symbol ?buildDescriptionId@SeaPickle@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @hash   -2062396645
     * @vftbl  136
     * @symbol ?getColor@SeaPickle@@UEBAHAEBVBlock@@@Z
     */
    virtual int getColor(class Block const &) const;
    /**
     * @hash   1928568165
     * @vftbl  137
     * @symbol ?getColor@SeaPickle@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @hash   -358568815
     * @vftbl  154
     * @symbol ?getLightEmission@SeaPickle@@UEBA?AUBrightness@@AEBVBlock@@@Z
     */
    virtual struct Brightness getLightEmission(class Block const &) const;
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
     * @hash   1417312107
     * @vftbl  171
     * @symbol ?onPlace@SeaPickle@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1380012531
     * @vftbl  173
     * @symbol ?playerDestroy@SeaPickle@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1387860881
     * @vftbl  174
     * @symbol ?tick@SeaPickle@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   1850049292
     * @vftbl  175
     * @symbol ?randomTick@SeaPickle@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   1247411127
     * @vftbl  180
     * @symbol ?canSurvive@SeaPickle@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
    /**
     * @hash   250287041
     * @vftbl  192
     * @symbol ?checkAlive@SeaPickle@@MEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void checkAlive(class BlockSource &, class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SEAPICKLE
    /**
     * @hash   -1121675490
     * @symbol ?canBeSilkTouched@SeaPickle@@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   214167313
     * @symbol ?hasVariableLighting@SeaPickle@@UEBA_NXZ
     */
    MCVAPI bool hasVariableLighting() const;
    /**
     * @hash   -555429578
     * @symbol ?waterSpreadCausesSpawn@SeaPickle@@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @hash   224790775
     * @symbol ??0SeaPickle@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI SeaPickle(std::string const &, int);

};